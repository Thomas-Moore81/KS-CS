This code includes producer.c and consumer.c which run simultaneosuly to simulate the producer consumer problem. 

Instructions to run code:

$ gcc producer.c -pthread -lrt -o producer
$ gcc consumer.c -pthread -lrt -o consumer
$ ./producer & ./consumer &

Compliation of this code should produce zero errors.
After building it should end after producing and consuming double the amount set within the loops on lines 73 and 70.

If the code is run mulitple times it may cause issues with memory already being used or threads still processing if ended incorrectly.
To fix this relaunch the IDE terminal or kill the processes manually via kill -9 "process ID".