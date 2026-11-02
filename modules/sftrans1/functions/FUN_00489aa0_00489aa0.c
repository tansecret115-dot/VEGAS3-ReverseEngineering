/* Module: sftrans1.dll
   Function: FUN_00489aa0
   Address: 00489aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00489aa0(int param_1,HDC param_2,int param_3,int param_4,int *param_5)

{
  int *piVar1;
  HDC hdc;
  COLORREF color;
  COLORREF color_00;
  COLORREF *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  COLORREF CVar6;
  undefined4 *puVar7;
  code *pcVar8;
  undefined4 uVar9;
  wchar_t *pwVar10;
  int local_68;
  tagRECT local_50;
  tagRECT local_40;
  RECT local_30;
  RECT local_20;
  int local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  hdc = param_2;
  if ((-1 < param_3) && (param_3 < **(int **)(param_1 + 0xa4))) {
    piVar1 = *(int **)((*(int **)(param_1 + 0xa4))[2] + param_3 * 4);
    color = GetBkColor(param_2);
    color_00 = GetBkColor(param_2);
    if ((piVar1[3] == 0) ||
       ((*(int *)(param_1 + 0x108) != 0 && (*(int *)(param_1 + 0x100) == param_3)))) {
      pCVar2 = *(COLORREF **)(param_1 + 0x2c);
      if (pCVar2 == (COLORREF *)0x0) {
        pCVar2 = (COLORREF *)(param_1 + 8);
      }
      SetBkColor(param_2,*pCVar2);
      iVar3 = *(int *)(param_1 + 0x2c);
      if (iVar3 == 0) {
        iVar3 = param_1 + 8;
      }
      CVar6 = *(COLORREF *)(iVar3 + 4);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x2c);
      if (*(int *)(param_1 + 0x30) == 0) {
        if (iVar3 == 0) {
          iVar3 = param_1 + 8;
        }
        CVar6 = *(COLORREF *)(iVar3 + 0x10);
      }
      else {
        if (iVar3 == 0) {
          iVar3 = param_1 + 8;
        }
        CVar6 = *(COLORREF *)(iVar3 + 0xc);
      }
      SetBkColor(param_2,CVar6);
      pCVar2 = *(COLORREF **)(param_1 + 0x2c);
      if (pCVar2 == (COLORREF *)0x0) {
        pCVar2 = (COLORREF *)(param_1 + 8);
      }
      CVar6 = *pCVar2;
    }
    SetTextColor(param_2,CVar6);
    iVar3 = SetMapMode(param_2,1);
    local_50.left = *param_5;
    local_50.top = param_5[1];
    local_50.right = param_5[2];
    local_50.bottom = param_5[3];
    iVar4 = FUN_00486910(param_3);
    if (iVar4 == 0) {
      local_68 = 1;
    }
    else {
      local_68 = *(int *)(iVar4 + 0xc);
    }
    param_2 = (HDC)0x0;
    pcVar8 = ExtTextOutA_exref;
    if (0 < local_68) {
      do {
        if ((piVar1[2] == 0) || (local_68 + -1 <= (int)param_2)) {
          local_50.right = param_5[2] - *param_5;
        }
        else {
          local_50.right = *(int *)(piVar1[2] + (int)param_2 * 4);
        }
        local_50.right = *param_5 + local_50.right;
        local_40.left = local_50.left;
        local_40.top = local_50.top;
        local_40.bottom = local_50.bottom;
        local_40.right = local_50.right;
        InflateRect(&local_40,-2,-1);
        if (((param_3 == *(int *)(param_1 + 0x100)) && (param_2 == (HDC)*(int *)(param_1 + 0x104)))
           && (*(int *)(param_1 + 0x108) == 0)) {
          FUN_004897b0(hdc,&local_50,&local_40);
        }
        else if (((local_50.left <= local_40.left) && (local_50.top <= local_40.top)) &&
                ((local_40.right <= local_50.right &&
                 (pcVar8 = ExtTextOutA_exref, local_40.bottom <= local_50.bottom)))) {
          local_30.top = local_50.top;
          local_30.left = local_50.left;
          local_30.right = local_50.right;
          local_30.bottom = local_40.top;
          ExtTextOutA(hdc,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
          local_20.top = local_40.bottom;
          local_20.left = local_50.left;
          local_20.right = local_50.right;
          local_20.bottom = local_50.bottom;
          ExtTextOutA(hdc,0,0,2,&local_20,(LPCSTR)0x0,0,(INT *)0x0);
          FUN_0048cd60(hdc,local_50.left,local_40.top,local_40.left - local_50.left,
                       local_40.bottom - local_40.top);
          FUN_0048cd60(hdc,local_40.right,local_40.top,local_50.right - local_40.right,
                       local_40.bottom - local_40.top);
        }
        if (((iVar4 == 0) || (puVar7 = (undefined4 *)(iVar4 + 0x14), *(int *)(iVar4 + 0x14) == 0))
           || (puVar7 == (undefined4 *)0x0)) {
          iVar5 = *(int *)(param_1 + 0x2c);
          if (*piVar1 == 0) {
            if (iVar5 == 0) {
              iVar5 = param_1 + 8;
            }
            puVar7 = (undefined4 *)(iVar5 + 0x1c);
          }
          else {
            if (iVar5 == 0) {
              iVar5 = param_1 + 8;
            }
            puVar7 = (undefined4 *)(iVar5 + 0x18);
          }
        }
        if ((*piVar1 == -1) &&
           ((*(int *)(param_1 + 0x108) == 0 || (*(int *)(param_1 + 0x100) != param_3)))) {
          iVar5 = *(int *)(param_1 + 0x2c);
          if (iVar5 == 0) {
            iVar5 = param_1 + 8;
          }
          uVar9 = *(undefined4 *)(iVar5 + 0x20);
          pwVar10 = L"< Insert text here >";
        }
        else if ((piVar1[1] == 0) ||
                (pwVar10 = *(wchar_t **)(piVar1[1] + (int)param_2 * 4), pwVar10 == (wchar_t *)0x0))
        {
          uVar9 = *puVar7;
          pwVar10 = L"";
        }
        else {
          uVar9 = *puVar7;
        }
        FUN_00489ed0(hdc,uVar9,&local_40,pwVar10);
        CVar6 = GetBkColor(hdc);
        iVar5 = *(int *)(param_1 + 0x2c);
        if (iVar5 == 0) {
          iVar5 = param_1 + 8;
        }
        SetBkColor(hdc,*(COLORREF *)(iVar5 + 8));
        local_10 = local_50.right;
        local_8 = local_50.right + 1;
        local_c = *(undefined4 *)(param_4 + 4);
        local_4 = *(undefined4 *)(param_4 + 0xc);
        (*pcVar8)(hdc,0,0,2,&local_10,0,0,0);
        SetBkColor(hdc,CVar6);
        OffsetRect(&local_50,(local_50.right - local_50.left) + 1,0);
        param_2 = (HDC)((int)param_2 + 1);
      } while ((int)param_2 < local_68);
    }
    SetMapMode(hdc,iVar3);
    SetBkColor(hdc,color);
    SetBkColor(hdc,color_00);
  }
  return;
}


