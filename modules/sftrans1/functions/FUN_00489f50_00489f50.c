/* Module: sftrans1.dll
   Function: FUN_00489f50
   Address: 00489f50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00489f50(int param_1,HDC param_2,RECT *param_3)

{
  int dy;
  int iVar1;
  int iVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  COLORREF *pCVar6;
  tagRECT local_70;
  tagRECT local_60;
  int local_50;
  LONG local_4c;
  int local_48;
  int local_44;
  int local_40;
  LONG local_3c;
  int local_38;
  int local_34;
  RECT local_30;
  RECT local_20;
  tagRECT local_10;
  
  dy = *(int *)(param_1 + 0x38);
  iVar5 = *(int *)(param_1 + 0x94);
  iVar4 = *(int *)(param_1 + 0x98);
  iVar1 = *(int *)(param_1 + 0x9c);
  local_20.bottom = *(int *)(param_1 + 0xa0);
  local_70.left = 0;
  local_70.top = 0;
  local_70.right = iVar1 - iVar5;
  local_70.bottom = dy;
  OffsetRect(&local_70,0,-*(int *)(param_1 + 0xec));
  iVar2 = **(int **)(param_1 + 0xa4);
  local_60.bottom = local_20.bottom;
  local_60.left = iVar5;
  local_60.top = iVar4;
  local_60.right = iVar1;
  OffsetRect(&local_60,-iVar5,-iVar4);
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      if (**(int **)(param_1 + 0xa4) <= iVar5) break;
      BVar3 = IntersectRect(&local_10,&local_70,param_3);
      if (BVar3 != 0) {
        local_4c = local_70.top;
        local_44 = local_70.bottom + -1;
        local_48 = *(int *)(param_1 + 0x3c) + local_70.left;
        local_50 = local_70.left;
        FUN_00489800(param_2,iVar5,&local_50);
        iVar4 = *(int *)(param_1 + 0x2c);
        if (iVar4 == 0) {
          iVar4 = param_1 + 8;
        }
        SetBkColor(param_2,*(COLORREF *)(iVar4 + 8));
        local_30.left = local_48;
        local_30.right = local_48 + 1;
        local_30.top = local_70.top;
        local_30.bottom = local_70.bottom;
        ExtTextOutA(param_2,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
        local_38 = local_70.right;
        local_34 = local_70.bottom + -1;
        local_3c = local_70.top;
        local_40 = local_48 + 1;
        FUN_00489aa0(param_2,iVar5,&local_70,&local_40);
        iVar4 = *(int *)(param_1 + 0x2c);
        if (iVar4 == 0) {
          iVar4 = param_1 + 8;
        }
        SetBkColor(param_2,*(COLORREF *)(iVar4 + 8));
        local_20.top = local_70.bottom + -1;
        local_20.bottom = local_70.bottom;
        local_20.left = local_70.left;
        local_20.right = local_70.right;
        ExtTextOutA(param_2,0,0,2,&local_20,(LPCSTR)0x0,0,(INT *)0x0);
      }
      local_60.top = local_70.bottom;
      OffsetRect(&local_70,0,dy);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  if (local_60.bottom != local_60.top && -1 < local_60.bottom - local_60.top) {
    pCVar6 = *(COLORREF **)(param_1 + 0x2c);
    if (pCVar6 == (COLORREF *)0x0) {
      pCVar6 = (COLORREF *)(param_1 + 8);
    }
    SetBkColor(param_2,*pCVar6);
    local_20.top = local_60.top;
    local_20.left = local_60.left;
    local_20.right = local_60.right;
    local_20.bottom = local_60.bottom;
    ExtTextOutA(param_2,0,0,2,&local_20,(LPCSTR)0x0,0,(INT *)0x0);
  }
  return;
}


