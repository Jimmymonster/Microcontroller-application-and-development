while (1)
  {
    /* USER CODE END WHILE */

	  // Lab Kor 1
	  /*
	  char str[]="Hello, World!!\r\n";
	  while(__HAL_UART_GET_FLAG(&huart3,UART_FLAG_TC)==RESET){}
	  HAL_UART_Transmit(&huart3,(uint8_t*) str, strlen(str),1000);
	  HAL_Delay(500);
	  */

	  //Lab Kor 2
	  /*
	  char ch1='A';
	  while(__HAL_UART_GET_FLAG(&huart3,UART_FLAG_TC)==RESET){}
	  HAL_UART_Transmit(&huart3,(uint8_t*) &ch1,1,1000);
	  HAL_Delay(500);
	  */

	  //Lab Kor 3
	  /*
	  char ch1;
	  char str[]="Input => ";
	  char newline[]="\r\n";

	  if(!state){
		  while(__HAL_UART_GET_FLAG(&huart3,UART_FLAG_TC)==RESET){}
		  HAL_UART_Transmit(&huart3,(uint8_t*) str, strlen(str),1000);

		  while(__HAL_UART_GET_FLAG(&huart3,UART_FLAG_RXNE)==RESET){}
		  HAL_UART_Receive(&huart3,(uint8_t*) &ch1, 1,1000);

		  while(__HAL_UART_GET_FLAG(&huart3,UART_FLAG_TC)==RESET){}
		  HAL_UART_Transmit(&huart3,(uint8_t*) &ch1, 1,1000);

		  if(ch1=='q'){
		  	state=1;
		  }
		  while(__HAL_UART_GET_FLAG(&huart3,UART_FLAG_TC)==RESET){}
		  HAL_UART_Transmit(&huart3,(uint8_t*) newline, strlen(newline),1000);
		  if(state==1){
			 strcpy(str,"QUIT");
			 while(__HAL_UART_GET_FLAG(&huart3,UART_FLAG_TC)==RESET){}
			 HAL_UART_Transmit(&huart3,(uint8_t*) str, strlen(str),1000);
		  }

	  }
	  HAL_Delay(500);
	*/



    /* USER CODE BEGIN 3 */
  }
