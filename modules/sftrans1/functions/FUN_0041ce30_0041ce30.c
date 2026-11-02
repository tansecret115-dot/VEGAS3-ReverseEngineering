/* Module: sftrans1.dll
   Function: FUN_0041ce30
   Address: 0041ce30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041ce30(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40c));
  uVar1 = (**(code **)(*(int *)(param_1 + -8) + 0x20))(param_2,param_1 + 0x428);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40c));
  return uVar1;
}


