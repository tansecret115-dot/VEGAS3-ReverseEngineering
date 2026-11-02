/* Module: sftrans1.dll
   Function: FUN_0042aa10
   Address: 0042aa10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042aa10(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xac));
  uVar1 = (**(code **)(*(int *)(param_1 + -8) + 0x20))(param_2,param_1 + 200);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xac));
  return uVar1;
}


