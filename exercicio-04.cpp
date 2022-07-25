/*
Determinando o local de cruzamento:

1°) Colocando o ponto de referência em Ribeirão Preto, a equação do carro fica: 
            x1 = v1 * t


2°) a equação horário do caminhão é (com ele saíndo de um local 100km distante do ponto de referência): 
            x2 = 100km - v2 * t


3°) Como diz no enunciado, tem 2 pedágios no percurso e o caminhão perde 5 min em cada um deles, tiramos dai o tempo de viagem sem os pedágios:
            Tsp = (100km/80kmporh) = 1,25h 
Como perde 10 min (0,17h) nos 2 pedágios, o tempo de viagem para o caminhão será:
            Tv = 1,25h + 0,17h = 1,42h
E sua velocidade média é:
            v2 = 100km/1,42h = 70,6km/h


4°) Desta forma, podemos encontrar o ponto de cruzamento entre o carro e o caminhão:
            t = x1/v1
            t = (x2 - 100km)/(-v2)
            x1 = x2 => (x/v1) = (x-100km)/(-v2)
            (-v2*x) = (v1*x) - (v1*100km) 
            x = (v1*100km)/(v1+v2) = (110*100km)/(110+70,6)
            x = 60,9km/h
Portanto a distancia que o carro e o caminhão estão de Ribeirão Preto no momento em que se cruzam é de 60,9km/h, ambos estão à mesma distância.
*/