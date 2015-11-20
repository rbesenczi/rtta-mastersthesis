traffic = new justine::robocar::RealTraffic {
      nrcars,       //Number of cars 
      shm.c_str(),  //Shared memory management
      catchdist,    //Catch distance 
      type,         //Type of traffic simulation
      itype,        //Type of car initialization  
      minutes       //Time of the simulation 
	};