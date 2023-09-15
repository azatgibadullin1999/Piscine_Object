/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:14:08 by larlena           #+#    #+#             */
/*   Updated: 2023/09/14 17:35:54 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolmanager.hpp"
#include "workermanager.hpp"

int	main() {
	std::size_t		max = 10;
	std::vector<int>	toolIds;
	std::vector<int>	workerIds;
	Workshop	workshop1;
	Workshop	workshop2;
	
	for (size_t i = 0; i != max; ++i) {
		workerIds.push_back(WorkerManagerSingleton::getInstance().addWorker(Worker()));
		if (std::rand() % 2) {
			toolIds.push_back(ToolManagerSingleton::getInstance().addTool(Shovel()));
			WorkerManagerSingleton::getInstance().giveWorkerToWorkshop(workshop1, workerIds[i]);
		} else {
			toolIds.push_back(ToolManagerSingleton::getInstance().addTool(Hammer()));
			WorkerManagerSingleton::getInstance().giveWorkerToWorkshop(workshop2, workerIds[i]);
		}
		ToolManagerSingleton::getInstance().giveToolToWorker(workerIds[std::rand() % max], toolIds[std::rand() % max]);
	}

	workshop1.executeWorkDay();
	workshop2.executeWorkDay();

	return 0;
}