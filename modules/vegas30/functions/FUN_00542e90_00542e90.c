/* Module: vegas30.exe
   Function: FUN_00542e90
   Address: 00542e90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00542e90(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 0x14) + 0xc));
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if ((-1 < iVar2 + -1) && ((undefined4 *)piVar1[2] != (undefined4 *)0x0)) {
    *param_2 = *(undefined4 *)piVar1[2];
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 0x14) + 0xc));
    return;
  }
  *param_2 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 0x14) + 0xc));
  return;
}


