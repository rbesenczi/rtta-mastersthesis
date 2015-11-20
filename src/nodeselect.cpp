osmium::unsigned_object_id_type virtual node(){

  double no_edges = 0;
  for ( shm_map_Type::iterator iter=shm_map->begin();
        iter!=shm_map->end(); ++iter ){

      for ( auto nodeval : RealTraffic::alist[iter->first] )
        no_edges += nodeval;
    }

  double rand = ( double ) std::rand() / ( double ) RAND_MAX;

  double sum = 0.0;
  for ( shm_map_Type::iterator iter=shm_map->begin();
        iter!=shm_map->end(); ++iter ){

      for ( auto nodeval : RealTraffic::alist[iter->first] ){
          sum += ( double ) nodeval/no_edges;
          if ( sum >= rand )
            return iter->first;
        }
    }
    // ... //
}
