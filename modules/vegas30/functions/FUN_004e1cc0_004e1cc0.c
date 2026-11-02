/* Module: vegas30.exe
   Function: FUN_004e1cc0
   Address: 004e1cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e1cc0(COLORREF param_1,HDC param_2,COLORREF *param_3,int param_4)

{
  int iVar1;
  COLORREF CVar2;
  COLORREF CVar3;
  COLORREF *pCVar4;
  HGDIOBJ pvVar5;
  DWORD DVar6;
  DWORD DVar7;
  uint color;
  undefined4 uVar8;
  int iVar9;
  COLORREF CVar10;
  code *pcVar11;
  int *piVar12;
  RECT local_10;
  
  pCVar4 = param_3;
  CVar3 = param_1;
  if ((DAT_00647854 & 0x4000000) != 0) {
    GetSysColor(DAT_00647854 & 0xffffff);
  }
  iVar9 = *(int *)(param_1 + 0xd94);
  if (param_4 != 0) {
    iVar1 = *(int *)(param_4 + 0x18);
    pcVar11 = SetBkColor_exref;
    if (iVar1 < (int)param_3[3]) {
      pvVar5 = (HGDIOBJ)_SfGetUIBrush_4(0x271e);
      pcVar11 = SetBkColor_exref;
      if (pvVar5 != (HGDIOBJ)0x0) {
        UnrealizeObject(pvVar5);
        SetBrushOrgEx(param_2,*(int *)(param_1 + 0xb14),*(int *)(param_1 + 0xb18),(LPPOINT)0x0);
        pvVar5 = SelectObject(param_2,pvVar5);
        CVar10 = *(COLORREF *)(param_1 + 0xb80);
        CVar2 = *param_3;
        param_3 = (COLORREF *)CVar2;
        if ((int)CVar2 <= (int)CVar10) {
          param_3 = (COLORREF *)CVar10;
        }
        CVar10 = CVar10 + *(int *)(param_1 + 0xb84);
        param_1 = CVar2;
        if (((int)CVar2 <= (int)CVar10) && (param_1 = pCVar4[2], (int)CVar10 <= (int)pCVar4[2])) {
          param_1 = CVar10;
        }
        SetTextColor(param_2,0x808080);
        DVar6 = GetSysColor(0x10);
        DVar7 = GetSysColor(0xf);
        pcVar11 = SetBkColor_exref;
        color = ((DVar7 & 0xff) + 1 + (DVar6 & 0xff)) / 2 & 0xff |
                (uint)CONCAT11((char)(((DVar7 >> 0x10 & 0xff) + 1 + (DVar6 >> 0x10 & 0xff)) / 2),
                               (char)(((DVar7 >> 8 & 0xff) + 1 + (DVar6 >> 8 & 0xff)) / 2)) << 8;
        if ((int)*pCVar4 < (int)param_3) {
          SetBkColor(param_2,color);
          local_10.left = *pCVar4;
          local_10.bottom = pCVar4[3];
          local_10.right = (LONG)param_3;
          local_10.top = iVar1;
          ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
        }
        if ((int)param_3 < (int)param_1) {
          SetBkColor(param_2,DAT_0064b528);
          local_10.left = (LONG)param_3;
          local_10.bottom = pCVar4[3];
          local_10.right = param_1;
          local_10.top = iVar1;
          ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
        }
        if ((int)param_1 < (int)pCVar4[2]) {
          SetBkColor(param_2,color);
          local_10.right = pCVar4[2];
          local_10.left = param_1;
          local_10.bottom = pCVar4[3];
          local_10.top = iVar1;
          ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
        }
        SelectObject(param_2,pvVar5);
      }
      if (iVar9 == 0) {
        FUN_00468a60(param_2,CVar3 + 0xac0);
      }
      pvVar5 = (HGDIOBJ)_SfGetUIBrush_4(0x2711);
      if (pvVar5 != (HGDIOBJ)0x0) {
        UnrealizeObject(pvVar5);
      }
      if (iVar9 == 0) {
        return;
      }
    }
    FUN_004646b0(CVar3,param_2,pCVar4,param_4);
    FUN_00455700(CVar3,param_2,pCVar4);
    if (iVar9 == 2) {
      SetTextColor(param_2,0xc0c0c0);
      uVar8 = (*pcVar11)(param_2,0);
      pvVar5 = (HGDIOBJ)_SfGetUIBrush_4(0x271a);
      local_10.bottom = (LONG)SelectObject(param_2,pvVar5);
      iVar9 = *(int *)(*(int *)(CVar3 + 0xd88) + 0x69c);
      PatBlt(param_2,*(int *)(iVar9 + 0x18),
             (*(int *)(iVar9 + 0x2c) * 3 >> 3) + *(int *)(iVar9 + 0x1c),
             *(int *)(iVar9 + 0x20) - *(int *)(iVar9 + 0x18),1,0x5a0049);
      iVar9 = *(int *)(*(int *)(CVar3 + 0xd8c) + 0x69c);
      PatBlt(param_2,*(int *)(iVar9 + 0x18),
             (*(int *)(iVar9 + 0x1c) - (*(int *)(iVar9 + 0x2c) * 3 >> 3)) + *(int *)(iVar9 + 0x2c),
             *(int *)(iVar9 + 0x20) - *(int *)(iVar9 + 0x18),1,0x5a0049);
      SelectObject(param_2,(HGDIOBJ)local_10.bottom);
      SetTextColor(param_2,param_1);
      (*pcVar11)(param_2,uVar8);
    }
    param_1 = 0;
    if (0 < *(int *)(param_4 + 0x5c)) {
      piVar12 = (int *)(param_4 + 0x78);
      do {
        if (((((*(byte *)(piVar12 + 0x13) & 1) == 0) && (1 < piVar12[10] - piVar12[8])) &&
            (iVar9 = (*(code *)piVar12[0x14])(param_2,pCVar4,piVar12,param_4), iVar9 == 0)) &&
           ((((*(int *)(*(int *)(*piVar12 + 0x50) + 0x18) != 0 &&
              (iVar9 = FUN_005f13f0(*(undefined4 *)(*piVar12 + 4)), iVar9 != 0)) &&
             (((*(uint *)(*(int *)(iVar9 + 8) + 0x134) >> 5 & 1) != 0 ||
              ((*(uint *)(iVar9 + 0x8c) & 1) != 0)))) &&
            ((*(uint *)(*piVar12 + 0x10) & 0x100000) == 0)))) {
          FUN_00465bb0(param_2,pCVar4,param_4,*piVar12);
        }
        param_1 = param_1 + 1;
        piVar12 = piVar12 + 0x16;
      } while ((int)param_1 < *(int *)(param_4 + 0x5c));
    }
    pvVar5 = GetStockObject(7);
    SelectObject(param_2,pvVar5);
  }
  return;
}


