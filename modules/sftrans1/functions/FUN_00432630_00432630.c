/* Module: sftrans1.dll
   Function: FUN_00432630
   Address: 00432630
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00432630(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13c));
  uVar1 = (**(code **)(*(int *)(param_1 + -8) + 0x20))(param_2,param_1 + 0x158);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13c));
  return uVar1;
}


