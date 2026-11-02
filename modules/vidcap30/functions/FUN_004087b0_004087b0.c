/* Module: vidcap30.exe
   Function: FUN_004087b0
   Address: 004087b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004087b0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  HGLOBAL pvVar4;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*(code **)(*param_1 + 4) != (code *)0x0) {
    (**(code **)(*param_1 + 4))(param_1,0);
  }
  iVar1 = param_1[1];
  if (param_1 == *(int **)(iVar1 + 0xa0)) {
    *(undefined4 *)(iVar1 + 0xa0) = 0;
  }
  if (((param_1[3] & 0x1000U) == 0) && (*(code **)(*param_1 + 0xc) != (code *)0x0)) {
    (**(code **)(*param_1 + 0xc))(param_1);
  }
  uVar2 = param_1[5];
  if (uVar2 < 7) {
    if (param_1[2] != 0) {
      iVar3 = uVar2 * 0x40;
      *(int *)(&DAT_005bbb3c + iVar3) = param_1[0x11];
      *(int *)(&DAT_005bbb40 + iVar3) = param_1[0x12];
      (&DAT_005bbb34)[uVar2 * 0x10] = param_1[3];
      (&DAT_005bbb38)[uVar2 * 0x10] = param_1[4];
      ((WINDOWPLACEMENT *)(&DAT_005bbb44 + iVar3))->length = 0x2c;
      GetWindowPlacement((HWND)param_1[2],(WINDOWPLACEMENT *)(&DAT_005bbb44 + iVar3));
    }
    if ((param_1[3] & 0x1000U) == 0) {
      *(undefined4 *)(iVar1 + 0x6c + param_1[5] * 4) = 0;
      goto LAB_00408857;
    }
  }
  else {
LAB_00408857:
    if ((param_1[3] & 0x1000U) == 0) {
      pvVar4 = GlobalHandle(param_1);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(param_1);
      GlobalFree(pvVar4);
      goto LAB_0040887f;
    }
  }
  param_1[2] = 0;
LAB_0040887f:
  iVar3 = _SfList_FindSpecificItemRange_16(*(undefined4 *)(iVar1 + 0xa4),0,0xffffffff,param_1);
  if (-1 < iVar3) {
    _SfList_DeleteList_16(*(undefined4 *)(iVar1 + 0xa4),iVar3,1,0);
  }
  iVar3 = _SfList_FindSpecificItemRange_16(*(undefined4 *)(iVar1 + 0xa8),0,0xffffffff,param_1);
  if ((-1 < iVar3) &&
     (_SfList_DeleteList_16(*(undefined4 *)(iVar1 + 0xa8),iVar3,1,0),
     (*(byte *)(iVar1 + 4) & 2) == 0)) {
    FUN_0040dd80(*(undefined4 *)(iVar1 + 0x38),param_1);
    FUN_00408500(iVar1,0,0);
  }
  return;
}


