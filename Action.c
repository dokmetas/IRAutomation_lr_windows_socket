/*********************************************************************
 * Created by Mercury Interactive Windows Sockets Recorder
 *
 * Created on: Wed Jun 06 15:50:49
 *********************************************************************/

#include "lrs.h"


Action()
{
	int i;

	



    lrs_create_socket("socket0", "TCP", "RemoteHost=192.168.1.26:4998",  LrsLastArg);
	//GC100_000C1E01B3F7_GlobalCache.home


	/*
	 * GO UP
	 */

	for (i=0;i<17;i++) {
	
    lr_think_time(21);

    lrs_send("socket0", "buf0", LrsLastArg);
}
	/*
	 * GO DOWN
	 */

		for (i=0;i<17;i++) {
    lr_think_time(17);

    lrs_send("socket0", "buf1", LrsLastArg);
		}
	/*
	 * GO UP
	 */
/*
    lr_think_time(16);

    lrs_send("socket0", "buf2", LrsLastArg);
*/
	/*
	 * GO DOWN
	 */
/*
    lr_think_time(17);

    lrs_send("socket0", "buf3", LrsLastArg);
*/

		   

    
    return 0;
}

