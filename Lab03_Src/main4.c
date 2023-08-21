while(1){
char input;
	  char str[]="Display Blinking LED PRESS (1,2)\r\nDisplay Group Members PRESS m\r\nQuit PRESS q\r\n";
	  char newline[]="\r\n";
	  if(state!=2){
		  if(!state){
			  while(__HAL_UART_GET_FLAG(&huart3,UART_FLAG_TC)==RESET){}
			  HAL_UART_Transmit(&huart3,(uint8_t*) str, strlen(str),1000);
			  state=1;
		  }
		  strcpy(str,"Input => ");
		  while(__HAL_UART_GET_FLAG(&huart3,UART_FLAG_TC)==RESET){}
		  HAL_UART_Transmit(&huart3,(uint8_t*) str, strlen(str),1000);

		  while(__HAL_UART_GET_FLAG(&huart3,UART_FLAG_RXNE)==RESET){}
		  HAL_UART_Receive(&huart3,(uint8_t*) &input, 1,1000);
		  while(__HAL_UART_GET_FLAG(&huart3,UART_FLAG_TC)==RESET){}
		  HAL_UART_Transmit(&huart3,(uint8_t*) &input, 1,1000);
		  while(__HAL_UART_GET_FLAG(&huart3,UART_FLAG_TC)==RESET){}
		  HAL_UART_Transmit(&huart3,(uint8_t*) newline, strlen(newline),1000);

		  if(input=='1'){
			  for(int i=0;i<3;i++){
				  HAL_GPIO_WritePin(GPIOF, GPIO_PIN_12, GPIO_PIN_SET);
				  HAL_Delay(300);
				  HAL_GPIO_WritePin(GPIOF, GPIO_PIN_12, GPIO_PIN_RESET);
				  HAL_Delay(300);
			  }
		  }
		  else if(input=='2'){
		  			  for(int i=0;i<3;i++){
		  				  HAL_GPIO_WritePin(GPIOF, GPIO_PIN_13, GPIO_PIN_SET);
		  				  HAL_Delay(300);
		  				  HAL_GPIO_WritePin(GPIOF, GPIO_PIN_13, GPIO_PIN_RESET);
		  				  HAL_Delay(300);
		  			  }
		  		  }
		  else if(input=='m'){
			  strcpy(str,"64010009\r\nKorn Rojrattanapanya\r\n64010300\r\nThongthana Laemkaothong\r\n64010324\r\nThanapob Parinyarat\r\n");

			  while(__HAL_UART_GET_FLAG(&huart3,UART_FLAG_TC)==RESET){}
			  HAL_UART_Transmit(&huart3,(uint8_t*) str, strlen(str),1000);
		  }
		  else if(input=='q'){
			  strcpy(str,"QUIT\r\n");
			  state=2;
			  while(__HAL_UART_GET_FLAG(&huart3,UART_FLAG_TC)==RESET){}
			  HAL_UART_Transmit(&huart3,(uint8_t*) str, strlen(str),1000);
		  }
		  else{
			  strcpy(str,"Unknown Command\r\n");
			  while(__HAL_UART_GET_FLAG(&huart3,UART_FLAG_TC)==RESET){}
			  HAL_UART_Transmit(&huart3,(uint8_t*) str, strlen(str),1000);
		  }
	  }
	  HAL_Delay(500);
}
