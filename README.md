

Nathan Loveless

Dr. Guan 

Operating Systems

10/28/21

The scope of this project was to use semaphores and share information between two programs. The two programs, titled producer and consumer respectively, are supposed to interact. The producer is supposed to generate information that the consumer is supposed to be able to read. I was not able to achieve this. I could not do this because I could not figure out how to take advantage of the semaphore libraries. I tried to use them in several different environments (MacOS, Windows 10, Ubuntu 20.04) and none of which were able to find the need libraries to compile the program. On top of that, nearly every resource I could find online would contradict one and other complicating the matters even more. After reaching out to tutoring and being told several other people already stopped by asking how to use them and they have never worked with semaphores before, I gave up trying to use them. I then came to the code I have now. I was hoping using shared global variables between two programs could be like a makeshift semaphore, but I was wrong. Both codes complied and can run but they do not interact with each other because there is no semaphore to communicate between them. An example of them running have been included. 


