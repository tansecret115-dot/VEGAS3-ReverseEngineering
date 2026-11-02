/* Module: vidcap30.exe
   Function: FUN_004105b0
   Address: 004105b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004105b0(int param_1,HDC param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  HDC hdc;
  DWORD DVar4;
  HGDIOBJ h;
  int iVar5;
  UINT UVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  RECT local_20;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  hdc = param_2;
  DVar4 = GetSysColor(0x12);
  SetTextColor(param_2,DVar4);
  h = (HGDIOBJ)_SfGetUIFont_4(100);
  SelectObject(param_2,h);
  DVar4 = GetSysColor(0xf);
  SetBkColor(param_2,DVar4);
  local_20.top = *(int *)(param_1 + 0x48);
  local_20.bottom = *(int *)(param_1 + 0x18);
  if (local_20.top < local_20.bottom) {
    local_20.right = *(LONG *)(param_1 + 0x14);
    local_20.left = 0;
    ExtTextOutA(param_2,0,0,2,&local_20,(LPCSTR)0x0,0,(INT *)0x0);
  }
  local_20.right = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0xc);
  local_20.left = 0;
  local_20.top = 0;
  local_20.bottom = 2;
  ExtTextOutA(param_2,0,0,2,&local_20,(LPCSTR)0x0,0,(INT *)0x0);
  iVar2 = *(int *)(param_1 + 0x40);
  iVar5 = *(int *)(param_1 + 0x48) - iVar2;
  if (*(int *)(param_1 + 0x1b0) == 0) {
    if (0 < *(int *)(param_1 + 0x3c)) {
      local_20.bottom = iVar5 + iVar2;
      local_20.left = 0;
      local_20.top = iVar2;
      local_20.right = *(int *)(param_1 + 0x3c);
      ExtTextOutA(param_2,0,0,2,&local_20,(LPCSTR)0x0,0,(INT *)0x0);
    }
    UVar6 = lstrlenA((LPCSTR)(param_1 + 0x5c));
    ExtTextOutA(param_2,*(int *)(param_1 + 0x1c) / 2 + ((RECT *)(param_1 + 0x3c))->left,
                ((*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x20)) - *(int *)(param_1 + 0x40)) /
                2 + iVar2,6,(RECT *)(param_1 + 0x3c),(LPCSTR)(param_1 + 0x5c),UVar6,(INT *)0x0);
    iVar7 = *(int *)(param_1 + 0x44);
    param_2 = (HDC)0x0;
  }
  else {
    if (0 < *(int *)(param_1 + 0x4c)) {
      local_20.bottom = iVar5 + iVar2;
      local_20.left = 0;
      local_20.top = iVar2;
      local_20.right = *(int *)(param_1 + 0x4c);
      ExtTextOutA(param_2,0,0,2,&local_20,(LPCSTR)0x0,0,(INT *)0x0);
    }
    UVar6 = lstrlenA((LPCSTR)(param_1 + 0x5c));
    ExtTextOutA(param_2,*(int *)(param_1 + 0x1c) / 2 + ((RECT *)(param_1 + 0x4c))->left,
                ((*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x20)) - *(int *)(param_1 + 0x40)) /
                2 + iVar2,6,(RECT *)(param_1 + 0x4c),(LPCSTR)(param_1 + 0x5c),UVar6,(INT *)0x0);
    iVar7 = *(int *)(param_1 + 0x54);
    param_2 = (HDC)0x0;
  }
  do {
    iVar1 = param_1 + (int)param_2 * 0x84;
    iVar3 = *(int *)(param_1 + 0x1bc + (int)param_2 * 0x84);
    if (iVar7 < iVar3) {
      local_20.bottom = iVar5 + iVar2;
      local_20.left = iVar7;
      local_20.top = iVar2;
      local_20.right = iVar3;
      ExtTextOutA(hdc,0,0,2,&local_20,(LPCSTR)0x0,0,(INT *)0x0);
    }
    if (param_2 == (HDC)0x3) {
      local_10 = *(undefined4 *)(param_1 + 0x348);
      uVar11 = *(undefined4 *)(param_1 + 0x360);
      local_c = *(undefined4 *)(param_1 + 0x34c);
      uVar9 = *(undefined4 *)(param_1 + 0x35c);
      local_8 = *(int *)(param_1 + 0x350) + 3;
      local_4 = *(undefined4 *)(param_1 + 0x354);
      uVar10 = *(undefined4 *)(param_1 + 0x3c8);
      iVar7 = param_1 + 0x364;
      puVar8 = &local_10;
    }
    else {
      uVar11 = *(undefined4 *)(iVar1 + 0x1d4);
      uVar10 = *(undefined4 *)(iVar1 + 0x23c);
      uVar9 = *(undefined4 *)(iVar1 + 0x1d0);
      iVar7 = iVar1 + 0x1d8;
      puVar8 = (undefined4 *)(iVar1 + 0x1bc);
    }
    FUN_00410830(hdc,puVar8,uVar9,iVar7,uVar10,uVar11,0);
    iVar7 = *(int *)(iVar1 + 0x1c4);
    param_2 = (HDC)((int)param_2 + 1);
  } while (param_2 < 4);
  return;
}


