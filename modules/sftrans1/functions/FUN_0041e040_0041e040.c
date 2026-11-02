/* Module: sftrans1.dll
   Function: FUN_0041e040
   Address: 0041e040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041e040(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x61c));
  uVar1 = (**(code **)(*(int *)(param_1 + -8) + 0x20))(param_2,param_1 + 0x638);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x61c));
  return uVar1;
}


