/* Module: sftrans1.dll
   Function: FUN_004142e0
   Address: 004142e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004142e0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30c));
  uVar1 = (**(code **)(*(int *)(param_1 + -8) + 0x20))(param_2,param_1 + 0x328);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30c));
  return uVar1;
}


