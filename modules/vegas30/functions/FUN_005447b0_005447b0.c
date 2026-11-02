/* Module: vegas30.exe
   Function: FUN_005447b0
   Address: 005447b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005447b0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 0x3c) + 0xc));
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if ((-1 < iVar2 + -1) && ((undefined4 *)piVar1[2] != (undefined4 *)0x0)) {
    puVar3 = (undefined4 *)piVar1[2];
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *puVar3;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + 1;
    }
    _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x3c),0,1,0);
    ResetEvent(*(HANDLE *)(param_1 + 4));
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 0x3c) + 0xc));
    return 1;
  }
  param_2[2] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 0x3c) + 0xc));
  return 0;
}


