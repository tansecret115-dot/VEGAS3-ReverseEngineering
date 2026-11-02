/* Module: sdpp3260.dll
   Function: FUN_100057e0
   Address: 100057e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl FUN_100057e0(void *param_1,int param_2)

{
  char local_40 [40];
  undefined4 local_18;
  int local_14;
  int local_10 [3];
  
  FUN_100077b0(&local_18);
  sprintf(local_40,&DAT_100095b0,local_14 + param_2);
  FUN_10006770(param_1,local_40);
  FUN_10006700(local_10);
  return param_1;
}


