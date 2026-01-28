#include <vxWorks.h>
#include <taskLib.h>
#include <stdio.h>

/* Task to print Hello World */
void helloTask(void)
{
    while (1)
    {
        printf("Hello World\n");
        taskDelay(100); /* delay for 100 ticks */
    }
}

/* RTP to start Hello task */
int main(void)
{
    TASK_ID tid;

    /* Create task to print Hello World */
    tid = taskSpawn("helloTask", 50, 0, 0x4000, (FUNCPTR)helloTask, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);

    /* Wait for task to complete (not necessary in this case since task runs forever) */
    taskWait(tid, WAIT_FOREVER);

    return 0;
}