// Created on Sun January 25 2015

int main()
{
	// initialize servo, camera, etc here?.
	// if you are using a Create you should uncomment the next line
	create_connect();
	create_full();//won't stop if you lift
	
	wait_for_light(3); // change the port number to match where your robot
	shut_down_in(119); // shut off the motors and stop the Create after 119 seconds
	// note that shut_down_in should immediately follow wait_for_light!! 
	while( 1 == 1){
		if (analog_et(6) < 400)
		{
			printf("driving forward\n");
			
		}
		else {
			create_drive_direct(-300,-300);
			break;
		}
	}
	printf("I'm following you\n");
	//create_disconnect();
	return 0;
}
