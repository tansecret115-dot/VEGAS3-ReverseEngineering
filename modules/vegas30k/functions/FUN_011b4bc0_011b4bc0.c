/* Module: vegas30k.dll
   Function: FUN_011b4bc0
   Address: 011b4bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_011b4bc0(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  if (param_3 < 0) {
    return 0;
  }
  param_1[0x92] = param_2;
  param_1[0x93] = param_3;
  (**(code **)(*param_1 + 0xb8))(param_1,param_2,param_3,param_6);
  (*(code *)param_1[5])(param_1,0xb,param_1[6],0xffffffff,0,0,0,param_2,param_3,0,0);
  return 0;
}


