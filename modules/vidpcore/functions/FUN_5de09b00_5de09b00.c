/* Module: vidpcore.dll
   Function: FUN_5de09b00
   Address: 5de09b00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de09b00(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    return 0x80004005;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb8));
  uVar1 = (**(code **)(*(int *)(param_1 + -0xc) + 0x24))(param_2,param_1 + 0xd4);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb8));
  return uVar1;
}


