/* Module: sftrans1.dll
   Function: FUN_00416a60
   Address: 00416a60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00416a60(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xcc));
  uVar1 = (**(code **)(*(int *)(param_1 + -8) + 0x20))(param_2,param_1 + 0xe8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xcc));
  return uVar1;
}


