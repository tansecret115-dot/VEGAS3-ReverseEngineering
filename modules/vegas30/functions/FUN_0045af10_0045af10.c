/* Module: vegas30.exe
   Function: FUN_0045af10
   Address: 0045af10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045af10(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0xab4) + 0x30);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1,param_2,param_3);
    return;
  }
  FUN_00458c00(param_1,param_2,param_3);
  return;
}


