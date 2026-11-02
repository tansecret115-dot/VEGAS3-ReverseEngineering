/* Module: mpegin.dll
   Function: FUN_1000f23a
   Address: 1000f23a
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl FUN_1000f23a(undefined8 *param_1,char *param_2,size_t param_3)

{
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_100123cb((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  FUN_10012354(param_2 + (local_14 == 0x2d),local_10 + param_3,(int)&local_14);
  FUN_1000f28f(param_2,param_3,&local_14,'\0');
  return param_2;
}


