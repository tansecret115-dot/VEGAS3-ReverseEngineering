/* Module: vidcap30.exe
   Function: FUN_0040a2d0
   Address: 0040a2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040a2d0(int param_1,HIMAGELIST param_2,int param_3,int *param_4,int *param_5,int *param_6,
                 undefined4 *param_7,uint param_8)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  HIMAGELIST p_Var8;
  uint uVar9;
  int iVar10;
  HIMAGELIST local_40;
  uint local_3c;
  int local_30;
  int local_2c;
  int local_24;
  tagRECT local_20;
  tagRECT local_10;
  
  if (((param_8 & 0x8000) == 0) && (param_2 != (HIMAGELIST)0x0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uVar2 = param_8 >> 4;
  local_40 = (HIMAGELIST)0x0;
  local_3c = 0;
  piVar3 = (int *)_SfGetUIFontSize_4(0x92);
  iVar4 = *piVar3;
  local_24 = piVar3[1];
  local_30 = 0;
  local_2c = 0;
  if (!bVar1) {
    ImageList_GetIconSize(param_2,(int *)&param_2,(int *)&param_8);
    local_3c = param_8;
    local_40 = param_2;
  }
  if (DAT_005bbd08 == 0) {
    param_2 = (HIMAGELIST)
              CreateWindowExA(0,"ComboBoxEx32",(LPCSTR)0x0,0x40000042,0,0,0,0x14,
                              *(HWND *)(param_1 + 8),(HMENU)0xffffffff,DAT_005ba298,(LPVOID)0x0);
    GetWindowRect((HWND)param_2,&local_20);
    DestroyWindow((HWND)param_2);
    DAT_005bbd08 = (local_20.bottom - local_20.top) + 6;
  }
  uVar9 = local_3c;
  if ((int)local_3c < (int)DAT_005bbd08) {
    uVar9 = DAT_005bbd08;
  }
  if (bVar1) {
    local_40 = (HIMAGELIST)0x0;
  }
  if ((param_3 != 0) && (_SfGetToolbarSize_8(param_3,&local_30), (uVar2 & 1) != 0)) {
    local_30 = 0;
  }
  GetClientRect(*(HWND *)(param_1 + 8),&local_10);
  uVar2 = (iVar4 * 2) / 3;
  iVar10 = uVar9 + local_10.top;
  iVar7 = local_10.left + uVar2;
  iVar4 = (int)((local_10.top - local_3c) + iVar10) / 2;
  p_Var8 = local_40 + iVar7 + (~-(uint)bVar1 & uVar2);
  param_2 = p_Var8;
  if ((int)p_Var8 <= (int)(local_10.right - local_30)) {
    param_2 = (HIMAGELIST)(local_10.right - local_30);
  }
  iVar5 = ((local_10.top - local_2c) + iVar10) / 2;
  iVar6 = ((local_10.top - local_24) + iVar10) / 2;
  if (param_4 != (int *)0x0) {
    *param_4 = iVar7;
    param_4[1] = local_10.top;
    param_4[2] = local_10.right;
    param_4[3] = iVar10;
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iVar7;
    param_5[1] = iVar4;
    param_5[2] = (int)(local_40 + iVar7);
    param_5[3] = iVar4 + local_3c;
  }
  if (param_6 != (int *)0x0) {
    *param_6 = (int)p_Var8;
    param_6[1] = iVar6;
    param_6[2] = (int)param_2;
    param_6[3] = local_24 + iVar6;
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = param_2;
    param_7[1] = iVar5;
    param_7[2] = param_2 + local_30;
    param_7[3] = iVar5 + local_2c;
  }
  return;
}


