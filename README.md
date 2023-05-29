# SJF-Schedulin-Program-in-C++

### nesse projeto temos que implementar um schedulin shortest job first 


# autor: NERVAL JUNIOR

# CPU Scheduler Simulator
## An application to simulate few CPU scheduling Policies.

![](https://img.shields.io/badge/Language-JavaScript-yellow)![](https://img.shields.io/badge/Language-C%2B%2B-brightgreen) ![](https://img.shields.io/badge/Compiler-Visual%20C%2B%2B-yellow) ![](https://img.shields.io/badge/IDE-Microsoft%20Visual%20Studio%202022-blue) ![](https://img.shields.io/badge/Environment-Windows-red) ![](https://img.shields.io/badge/User%20Interface-GUI%20%2B%20CLI-yellowgreen)

---

## o agendamento do primeiro trabalho mais curto
### shortest job first(SJF)
 

No sjf o sistema operacionaç da prioridade para processos com tempo de trabalho mais curto.

O Shortest-Job-First Scheduling é considerado a melhor abordagem de escalonamento de processos, pois minimiza o tempo de espera dos outros processos que aguardam sua execução. Também é referido como Shortest-Job-Next devido à sua característica de agendar o trabalho com o tempo mínimo como próximo. É preemptivo e não preemptivo. Vejamos algumas de suas características:

## caracteristicas:

Ele se adapta melhor em sistemas do tipo Batch, onde o tempo de CPU, ou seja, Burst Time, é conhecido de antemão e a execução do processo não é tão crítica.
 
Está associado a cada processo como um tempo a ser concluído.
 
Ele pode aumentar a produção oferecendo um tempo de processo curto, ou seja, os processos curtos são executados primeiro.
 
Como os trabalhos que precisam de menos tempo são executados primeiro, isso também aumenta o tempo de processamento.
 
O algoritmo funciona melhor quando o tempo de chegada para todos os processos é o mesmo.
 
Antes de prosseguir, vamos aprender sobre alguns fatores-chave que desempenham um papel significativo no agendamento.

Arrival Time:  Hora em que um processo/trabalho chega
 
Burst Time:  Tempo necessário para completar a execução
 
Tempo de conclusão : o tempo real é necessário para concluir a execução do processo/trabalho
 
Turn around Time : A diferença entre o tempo de conclusão e o tempo de chegada
Turn Around Time=Tempo de Conclusão-Hora de Chegada
 

Tempo de espera:  a diferença entre o tempo de retorno e o tempo de rajada.
Tempo de Espera = Tempo de Retorno Tempo Explosivo
 

Existem dois tipos de algoritmos de escalonamento Shortest-Time-First, preemptivos e não preemptivos. Vamos vê-los em detalhes.




## Simulador de algoritmo de agendamento de primeiro trabalho mais curto 
É possível simular algoritmos SJF preemptivos e não preemptivos .

### Incluindo um procedimento 

### Gráfico de Gantt Resultados para visualização

![image](https://github.com/nervaljunior/SJF-Schedulin-Program-in-Cpp/assets/108685222/50f322b1-ce3d-4ec0-86ee-956f49c4da80)

![image](https://github.com/nervaljunior/SJF-Schedulin-Program-in-Cpp/assets/108685222/474220ea-727a-495f-930f-b9cc410af599)

O algoritmo de agendamento Shortest Job First (SJF) seleciona o processo com o menor tempo de execução como a próxima execução.  Estratégias de escalonamento preemptivas e não preemptivas são possíveis.  O tempo médio que outros processos ficam esperando para serem executados é muito diminuiu.  

Shortest Job First é o acrônimo para esse conceito.

## As abordagens SJF geralmente se enquadram em uma das duas categorias:

### SJF sem preempção 
No escalonamento não preemptivo , o processo retém o ciclo da CPU uma vez atribuído a ele até que entre em um estado de espera ou seja eliminado .

### Um SJF proativo 
Os trabalhos são inseridos na fila de prontos à medida que são recebidos no agendamento SJF preemptivo .  O processo com o menor tempo de rajada começa a correr.  O processo atual é encerrado ou impedido de continuar se um com um tempo de rajada menor entrar nosistema, e o trabalho mais curto recebe um ciclo de CPU .

## Pilha 
de tecnologia usada Escolhi utilizar um notebook no jupyter criado com python para ilustrar o procedimento  de agendamento.



### Happy Coding!.
