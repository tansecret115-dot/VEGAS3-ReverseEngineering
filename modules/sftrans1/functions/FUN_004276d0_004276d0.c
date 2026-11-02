/* Module: sftrans1.dll
   Function: FUN_004276d0
   Address: 004276d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004276d0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd4));
  uVar1 = (**(code **)(*(int *)(param_1 + -8) + 0x20))(param_2,param_1 + 0xec);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd4));
  return uVar1;
}


