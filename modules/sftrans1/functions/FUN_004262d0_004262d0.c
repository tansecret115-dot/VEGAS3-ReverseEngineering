/* Module: sftrans1.dll
   Function: FUN_004262d0
   Address: 004262d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004262d0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14c));
  uVar1 = (**(code **)(*(int *)(param_1 + -8) + 0x20))(param_2,param_1 + 0x168);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14c));
  return uVar1;
}


