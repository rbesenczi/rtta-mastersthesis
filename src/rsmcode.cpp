//Calculate the Cop_gangster matrix
for (int i = 0; i < 10; i++){
    
    int *dists = dijkDist(w_cops[i].to, w_gangsters);
    
    for (int j = 0; j < number_of_gangster; j++){
        m_cop_gangster[i][j] = dists[j];
    }
}

int it = 10;

//Sort the matrix
while (it-- > 0){
    int MAX = 10000000;
    int min = MAX;
    int i_cop = -1;
    int j_gang = -1;
    
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < number_of_gangster; j++){
            if (m_cop_gangster[i][j] < min){
                min = m_cop_gangster[i][j];
                i_cop = i;
                j_gang = j;
            }
        }
    }
    
    gcop[i_cop] = w_gangsters[j_gang];
    //....//
}

//Routing
for (int i = 0; i < 10; i++){
    Cop  c = w_cops[i];
    Gangster g = gcop[i];
    Dijkstra target = dijkstraAll(c.to, g.to);
    route ( socket, c.id, target.path );
}