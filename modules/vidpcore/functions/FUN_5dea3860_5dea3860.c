/* Module: vidpcore.dll
   Function: FUN_5dea3860
   Address: 5dea3860
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5dea3860(undefined4 *param_1,LONG *param_2)

{
  int *piVar1;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  BOOL BVar2;
  int iVar3;
  int *piVar4;
  tagPOINT local_8;
  
  if (param_1 == (undefined4 *)0x0) {
    return -1;
  }
  if (param_2 == (LONG *)0x0) {
    GetCursorPos(&local_8);
    ScreenToClient((HWND)*param_1,&local_8);
  }
  else {
    local_8.x = *param_2;
    local_8.y = param_2[1];
  }
  piVar1 = (int *)param_1[0xf];
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar1;
  }
  iVar3 = iVar3 + -1;
  param_2 = (LONG *)0xffffffff;
  if (-1 < iVar3) {
    do {
      piVar4 = (int *)(piVar1[1] * iVar3 + piVar1[2]);
      pt.y = local_8.y;
      pt.x = local_8.x;
      BVar2 = PtInRect((RECT *)(piVar4 + 2),pt);
      piVar4[1] = BVar2;
      if (BVar2 != 0) {
        param_2 = (LONG *)*piVar4;
      }
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    if (-1 < (int)param_2) {
      return (int)param_2;
    }
  }
  pt_00.y = local_8.y;
  pt_00.x = local_8.x;
  BVar2 = PtInRect((RECT *)(param_1 + 6),pt_00);
  if (BVar2 == 0) {
    pt_01.y = local_8.y;
    pt_01.x = local_8.x;
    BVar2 = PtInRect((RECT *)(param_1 + 10),pt_01);
    if (BVar2 != 0) {
      param_2 = (LONG *)0x0;
    }
    return (int)param_2;
  }
  iVar3 = GetDlgCtrlID((HWND)*param_1);
  return iVar3;
}


