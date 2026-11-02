/* Module: sftrans1.dll
   Function: FUN_00420010
   Address: 00420010
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00420010(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa4));
  uVar1 = (**(code **)(*(int *)(param_1 + -8) + 0x20))(param_2,param_1 + 0xbc);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa4));
  return uVar1;
}


