/* Module: vegas30.exe
   Function: FUN_00543f50
   Address: 00543f50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00543f50(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_4;
  
  local_4 = -1;
  GetCurrentThreadId();
  EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 8) + 0xc));
  iVar3 = 0;
  iVar1 = **(int **)(param_1 + 8);
  if (0 < iVar1) {
    piVar4 = (int *)(*(int **)(param_1 + 8))[2];
    do {
      iVar2 = *piVar4;
      if ((((*(int *)(iVar2 + 0x1c) != 0) && (*(int *)(iVar2 + 0x14) == 0)) &&
          (param_3 == *(int *)(iVar2 + 8))) && (param_4 == *(int *)(iVar2 + 0xc))) {
        *(undefined4 *)(iVar2 + 0x10) = 0;
        *(undefined4 *)(iVar2 + 8) = 0xffffffff;
        *(undefined4 *)(iVar2 + 0xc) = 0xffffffff;
        *(undefined4 *)(iVar2 + 0x18) = param_2;
        local_4 = iVar3;
        if (iVar2 != 0) goto LAB_0054402c;
        break;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < iVar1);
  }
  if (iVar1 < *(int *)(param_1 + 0x10)) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    iVar2 = FUN_00543e60(param_1,&local_4);
    if (iVar2 != 0) goto LAB_0054402c;
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  local_4 = FUN_00543d60(param_1,param_2);
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + local_4 * 4);
  if (iVar2 == 0) {
    FUN_00544490(param_1,*(int *)(param_1 + 0x10) + 1);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    iVar2 = FUN_00543e60(param_1,&local_4);
  }
LAB_0054402c:
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 8) + 0xc));
  if (iVar2 != 0) {
    _SfList_DeleteList_16(*(undefined4 *)(param_1 + 8),local_4,1,0);
  }
  return iVar2;
}


