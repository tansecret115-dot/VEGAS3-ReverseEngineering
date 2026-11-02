/* Module: vegas30.exe
   Function: FUN_004549b0
   Address: 004549b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004549b0(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  code *pcVar1;
  
  param_2 = ((int)param_2 < 1) - 1 & param_2;
  param_3 = ((int)param_3 < 1) - 1 & param_3;
  pcVar1 = *(code **)(*(int *)(param_1 + 0xab4) + 0x38);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1,param_2,param_3,param_4);
    return;
  }
  FUN_004547d0(param_1,param_2,param_3,param_4);
  return;
}


