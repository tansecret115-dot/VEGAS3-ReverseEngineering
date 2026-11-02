/* Module: vegas30.exe
   Function: FUN_00427cd0
   Address: 00427cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00427cd0(undefined4 param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  HDC pHVar5;
  DWORD color;
  COLORREF color_00;
  HGDIOBJ pvVar6;
  UINT c;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  INT *lpDx;
  tagRECT local_114;
  CHAR local_104 [260];
  
  if ((((DAT_0064762c == 0) || (iVar2 = *(int *)(DAT_0064762c + 0x80), iVar2 == 0)) ||
      (*(int *)(iVar2 + 0x94) == 0)) || (*(int *)(iVar2 + 0xfc) == 0)) {
    return 1;
  }
  if ((*(int *)(iVar2 + 0xbc) != 0) && (*(int *)(iVar2 + 0xd0) != 0)) {
    _SfLongLongToText_16(param_1,param_2,local_104,1);
    pHVar5 = GetDC(*(HWND *)(iVar2 + 0xd0));
    color = GetSysColor(0xf);
    color_00 = SetBkColor(pHVar5,color);
    pvVar6 = (HGDIOBJ)_SfGetUIFont_4(100);
    pvVar6 = SelectObject(pHVar5,pvVar6);
    lpDx = (INT *)0x0;
    c = lstrlenA(local_104);
    ExtTextOutA(pHVar5,((RECT *)(iVar2 + 0x4d0))->left,*(int *)(iVar2 + 0x4d4),6,
                (RECT *)(iVar2 + 0x4d0),local_104,c,lpDx);
    SelectObject(pHVar5,pvVar6);
    SetBkColor(pHVar5,color_00);
    ReleaseDC(*(HWND *)(iVar2 + 0xd0),pHVar5);
  }
  if (DAT_00649e24 == 0) {
    return 1;
  }
  uVar7 = DAT_00649e28;
  if (DAT_00649e28 < 2) {
    uVar7 = 1;
  }
  lVar11 = __allrem(param_1,param_2,uVar7,0);
  if ((lVar11 != 0) && (param_3 == 0)) {
    return 1;
  }
  uVar3 = *(undefined4 *)(iVar2 + 0x80);
  uVar8 = FUN_005ba4b0(uVar3,0);
  iVar9 = FUN_005b9fc0(uVar3,uVar8,0);
  piVar10 = (int *)FUN_005a5ec0(iVar9 + 0x108);
  if (((piVar10 == (int *)0x0) &&
      (((*(int *)(iVar9 + 0xc4) == 0 ||
        (piVar10 = (int *)FUN_005a5ec0(iVar9 + 0x390), piVar10 == (int *)0x0)) &&
       (piVar10 = (int *)FUN_005a5ec0(iVar9 + 0x2b8), piVar10 == (int *)0x0)))) ||
     ((*(byte *)(piVar10 + 0x10d) & 4) != 0)) goto LAB_00427f58;
  pHVar5 = GetDC(*(HWND *)(iVar2 + 0xfc));
  GetClientRect(*(HWND *)(iVar2 + 0xfc),&local_114);
  if (*(int *)(iVar2 + 0x930) == 0) {
    uVar8 = DrawDibOpen();
    *(undefined4 *)(iVar2 + 0x930) = uVar8;
  }
  if (*(int *)(iVar2 + 0x930) != 0) {
    piVar4 = (int *)*piVar10;
    piVar10 = (int *)piVar10[0x10b];
    if (piVar10 == (int *)0x0) {
      if (piVar4[4] == 0) {
        if (((piVar4[8] != 0) || (uVar1 = *(ushort *)((int)piVar4 + 0xe), uVar1 == 0)) ||
           (8 < uVar1)) goto LAB_00427f0d;
        piVar10 = (int *)(*piVar4 + (1 << ((byte)uVar1 & 0x1f)) * 4 + (int)piVar4);
      }
      else if (piVar4[4] == 3) {
        piVar10 = piVar4 + 0xd;
      }
      else {
LAB_00427f0d:
        piVar10 = (int *)(*piVar4 + piVar4[8] * 4 + (int)piVar4);
      }
    }
    DrawDibDraw(*(int *)(iVar2 + 0x930),pHVar5,local_114.left,local_114.top,
                local_114.right - local_114.left,local_114.bottom - local_114.top,piVar4,piVar10,0,0
                ,0xffffffff,0xffffffff,0);
  }
  ReleaseDC(*(HWND *)(iVar2 + 0xfc),pHVar5);
LAB_00427f58:
  FUN_005ba030(uVar3,iVar9,0,1);
  return 0;
}


