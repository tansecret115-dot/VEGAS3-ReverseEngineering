/* Module: vegas30.exe
   Function: FUN_00474800
   Address: 00474800
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00474800(HDC param_1,int *param_2,RECT *param_3,undefined4 param_4,undefined4 param_5,
                 int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,
                 int param_11,COLORREF param_12)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  UINT c;
  int iVar4;
  undefined4 uVar5;
  BOOL BVar6;
  int *piVar7;
  longlong lVar8;
  undefined8 uVar9;
  uchar *puVar10;
  UINT UVar11;
  RECT local_e0;
  COLORREF local_d0;
  COLORREF local_cc;
  int local_c8;
  int local_c4;
  int local_c0 [2];
  int local_b8 [6];
  int local_a0;
  int local_9c;
  tagRECT local_90;
  uchar local_80 [64];
  uchar local_40 [64];
  
  lVar2 = CONCAT44(param_5,param_4);
  iVar3 = _SfGetUIFontSize_4(0x6e);
  local_c4 = *(int *)(iVar3 + 4);
  if (param_2[3] - param_2[1] < (local_c4 * 3) / 2) {
    return;
  }
  local_d0 = SetBkColor(param_1,param_12);
  local_cc = SetTextColor(param_1,0);
  local_c8 = SetBkMode(param_1,2);
  piVar7 = local_b8;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  local_a0 = -param_7;
  local_9c = -(param_8 + (uint)(param_7 != 0));
  local_b8[2] = param_9;
  local_b8[3] = param_10;
  if (DAT_0064776c == 0) {
    local_b8[0] = 0;
LAB_004748cf:
    if (param_7 != 0 || param_8 != 0) {
      lVar8 = ftol();
      lVar2 = lVar8 + lVar2;
    }
    c = SfPrintF(local_40,"%I64d",lVar2);
  }
  else {
    if (DAT_0064776c == 1) {
      local_b8[0] = 1;
    }
    else {
      local_b8[0] = param_6;
      if (param_6 == 0) goto LAB_004748cf;
    }
    uVar5 = 0;
    uVar9 = ftol(0);
    iVar3 = _SfNanoTimeToText_20(local_80,local_b8,uVar9,uVar5);
    do {
      iVar1 = iVar3;
      if (iVar1 + -1 == 0) break;
      iVar4 = _ismbcdigit((int)(char)local_80[iVar1 + -1]);
      iVar3 = iVar1 + -1;
    } while (iVar4 != 0);
    iVar3 = 0;
    if (0 < iVar1 + -2) {
      do {
        iVar4 = _ismbcdigit((int)(char)local_80[iVar3]);
        if ((iVar4 != 0) && (local_80[iVar3] != '0')) break;
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1 + -2);
    }
    _mbscpy(local_40,local_80 + iVar3);
    c = lstrlenA((LPCSTR)local_40);
  }
  piVar7 = local_c0;
  puVar10 = local_40;
  UVar11 = c;
  uVar5 = _SfGetUIFont_4(0x6e);
  _SfGetTextExtent_16(uVar5,puVar10,UVar11,piVar7);
  local_e0.left = param_11 - local_c0[0] / 2;
  if (local_e0.left < *param_2 + 1) {
    local_e0.left = *param_2 + 1;
  }
  local_e0.right = local_e0.left + 1 + local_c0[0];
  iVar3 = param_2[2] + -1;
  if (iVar3 < local_e0.right) {
    local_e0.left = (iVar3 - local_c0[0]) + -1;
    local_e0.right = iVar3;
  }
  local_e0.bottom = param_2[3] + -1;
  local_e0.top = (local_e0.bottom - local_c4) + 2;
  BVar6 = IntersectRect(&local_90,param_3,&local_e0);
  if (BVar6 != 0) {
    ExtTextOutA(param_1,local_e0.left,local_e0.top + -1,6,&local_90,(LPCSTR)local_40,c,(INT *)0x0);
  }
  SetBkMode(param_1,local_c8);
  SetBkColor(param_1,local_d0);
  SetTextColor(param_1,local_cc);
  return;
}


