/* Module: vidpcore.dll
   Function: FUN_5de09870
   Address: 5de09870
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de09870(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbc));
  uVar1 = (**(code **)(*(int *)(param_1 + -8) + 0x20))(param_2,param_1 + 0xd8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbc));
  return uVar1;
}


