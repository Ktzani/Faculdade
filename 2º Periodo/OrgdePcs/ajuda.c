else {
        for (int i = 0; i < NRO_InstruInterru; i++)
        {
            switch (instruInterru[i].opCode)
            {
            case -1:
                //Halt.
                varrerCache(RAM, cacheL1, cacheL2, cacheL3);
                return;

            case 0:
                // Soma.
                addressOne = buscarMemoria(cacheL1, cacheL2, cacheL3, RAM, instruInterru[i].addressOne, cache1_Hit, cache2_Hit, cache3_Hit, cache1_Miss, cache2_Miss, cache3_Miss, &address3_cacheL1, custoTotal);
                incrementarTempoRelevancia(cacheL1, cacheL2, cacheL3);
                addressTwo = buscarMemoria(cacheL1, cacheL2, cacheL3, RAM, instruInterru[i].addressTwo, cache1_Hit, cache2_Hit, cache3_Hit, cache1_Miss, cache2_Miss, cache3_Miss, &address3_cacheL1, custoTotal);
                incrementarTempoRelevancia(cacheL1, cacheL2, cacheL3);
                addressThree = buscarMemoria(cacheL1, cacheL2, cacheL3, RAM, instruInterru[i].addressThree, cache1_Hit, cache2_Hit, cache3_Hit, cache1_Miss, cache2_Miss, cache3_Miss, &address3_cacheL1, custoTotal);
                incrementarTempoRelevancia(cacheL1, cacheL2, cacheL3);
                addressThree.data[rand() % NRO_PALAVRAS] = somarInteiros(addressOne.data[rand() % NRO_PALAVRAS], addressTwo.data[rand() % NRO_PALAVRAS]);
                addressThree.tag = instruInterru[i].addressThree;
                cacheL1[address3_cacheL1] = addressThree;
                cacheL1[address3_cacheL1].atualizado = 1;

                break;

            case 1:
                // Subtração.
                addressOne = buscarMemoria(cacheL1, cacheL2, cacheL3, RAM, instruInterru[i].addressOne, cache1_Hit, cache2_Hit, cache3_Hit, cache1_Miss, cache2_Miss, cache3_Miss, &address3_cacheL1, custoTotal);
                incrementarTempoRelevancia(cacheL1, cacheL2, cacheL3);
                addressTwo = buscarMemoria(cacheL1, cacheL2, cacheL3, RAM, instruInterru[i].addressTwo, cache1_Hit, cache2_Hit, cache3_Hit, cache1_Miss, cache2_Miss, cache3_Miss, &address3_cacheL1, custoTotal);
                incrementarTempoRelevancia(cacheL1, cacheL2, cacheL3);
                addressThree = buscarMemoria(cacheL1, cacheL2, cacheL3, RAM, instruInterru[i].addressThree, cache1_Hit, cache2_Hit, cache3_Hit, cache1_Miss, cache2_Miss, cache3_Miss, &address3_cacheL1, custoTotal);
                incrementarTempoRelevancia(cacheL1, cacheL2, cacheL3);
                addressThree.data[rand() % NRO_PALAVRAS] = subtrairInteiros(addressOne.data[rand() % NRO_PALAVRAS], addressTwo.data[rand() % NRO_PALAVRAS]);
                addressThree.tag = instruInterru[i].addressThree;
                cacheL1[address3_cacheL1] = addressThree;
                cacheL1[address3_cacheL1].atualizado = 1;
                break;
            }
        }
    }