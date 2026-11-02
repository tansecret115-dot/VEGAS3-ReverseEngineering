/* Module: mpegin.dll
   Function: FUN_1000f117
   Address: 1000f117
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * __cdecl FUN_1000f117(undefined8 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint local_2c [6];
  int local_14 [4];
  
  FUN_100123cb((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),local_14,local_2c);
  FUN_10012354(param_2 + (uint)(0 < param_3) + (uint)(local_14[0] == 0x2d),param_3 + 1,(int)local_14
              );
  FUN_1000f178(param_2,param_3,param_4,local_14,'\0');
  return param_2;
}


