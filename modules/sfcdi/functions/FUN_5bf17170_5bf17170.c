/* Module: sfcdi.dll
   Function: FUN_5bf17170
   Address: 5bf17170
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5bf17170(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x148));
  *param_2 = *(undefined4 *)(param_1 + 0x138);
  iVar1 = *(int *)(param_1 + 0x134);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x148));
  return iVar1 == 0;
}


