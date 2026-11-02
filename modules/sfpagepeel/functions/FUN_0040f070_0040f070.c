/* Module: sfpagepeel.dll
   Function: FUN_0040f070
   Address: 0040f070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040f070(int param_1,undefined4 *param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_2,4);
  if (BVar1 != 0) {
    return 0x80004003;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  (**(code **)(*(int *)(param_1 + -8) + 0x28))();
  *param_2 = *(undefined4 *)(param_1 + 0x5c);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return 0;
}


