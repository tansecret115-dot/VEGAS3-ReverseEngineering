/* Module: vegas30.exe
   Function: FUN_00453a80
   Address: 00453a80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00453a80(undefined4 param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  bool bVar1;
  
  if (param_4 != 0 || param_5 != 0) {
    bVar1 = CARRY4(param_2,param_4);
    param_2 = param_2 + param_4;
    param_3 = param_3 + param_5 + (uint)bVar1;
    bVar1 = param_4 != 0;
    param_4 = -param_4;
    param_5 = -(param_5 + (uint)bVar1);
  }
  FUN_00453340(param_1,param_2,param_3,param_4,param_5,0x21);
  return;
}


