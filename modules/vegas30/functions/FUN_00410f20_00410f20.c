/* Module: vegas30.exe
   Function: FUN_00410f20
   Address: 00410f20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00410f20(int *param_1)

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
  if (param_1 == *(int **)(iVar1 + 0xc4)) {
    *(undefined4 *)(iVar1 + 0xc4) = 0;
  }
  if (((param_1[3] & 0x1000U) == 0) && (*(code **)(*param_1 + 0xc) != (code *)0x0)) {
    (**(code **)(*param_1 + 0xc))(param_1);
  }
  uVar2 = param_1[5];
  if (uVar2 < 0xc) {
    if (param_1[2] != 0) {
      iVar3 = uVar2 * 0x40;
      *(int *)(&DAT_0064b5bc + iVar3) = param_1[0x11];
      *(int *)(&DAT_0064b5c0 + iVar3) = param_1[0x12];
      (&DAT_0064b5b4)[uVar2 * 0x10] = param_1[3];
      (&DAT_0064b5b8)[uVar2 * 0x10] = param_1[4];
      ((WINDOWPLACEMENT *)(&DAT_0064b5c4 + iVar3))->length = 0x2c;
      GetWindowPlacement((HWND)param_1[2],(WINDOWPLACEMENT *)(&DAT_0064b5c4 + iVar3));
    }
    if ((param_1[3] & 0x1000U) == 0) {
      *(undefined4 *)(iVar1 + 0x68 + param_1[5] * 4) = 0;
      goto LAB_00410fc7;
    }
  }
  else {
LAB_00410fc7:
    if ((param_1[3] & 0x1000U) == 0) {
      pvVar4 = GlobalHandle(param_1);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(param_1);
      GlobalFree(pvVar4);
      goto LAB_00410fef;
    }
  }
  param_1[2] = 0;
LAB_00410fef:
  iVar3 = _SfList_FindSpecificItemRange_16(*(undefined4 *)(iVar1 + 200),0,0xffffffff,param_1);
  if (-1 < iVar3) {
    _SfList_DeleteList_16(*(undefined4 *)(iVar1 + 200),iVar3,1,0);
  }
  iVar3 = _SfList_FindSpecificItemRange_16(*(undefined4 *)(iVar1 + 0xcc),0,0xffffffff,param_1);
  if ((-1 < iVar3) &&
     (_SfList_DeleteList_16(*(undefined4 *)(iVar1 + 0xcc),iVar3,1,0),
     (*(byte *)(iVar1 + 4) & 2) == 0)) {
    FUN_00416670(*(undefined4 *)(iVar1 + 0x34),param_1);
    FUN_00410bb0(iVar1,0,0);
  }
  return;
}


