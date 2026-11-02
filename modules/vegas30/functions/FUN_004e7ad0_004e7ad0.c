/* Module: vegas30.exe
   Function: FUN_004e7ad0
   Address: 004e7ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e7ad0(int param_1,HDC param_2)

{
  int iVar1;
  HDC hdc;
  DWORD DVar2;
  HGDIOBJ h;
  int iVar3;
  UINT UVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  RECT local_20;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  hdc = param_2;
  DVar2 = GetSysColor(0x12);
  SetTextColor(param_2,DVar2);
  h = (HGDIOBJ)_SfGetUIFont_4(100);
  SelectObject(param_2,h);
  DVar2 = GetSysColor(0xf);
  SetBkColor(param_2,DVar2);
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
  iVar1 = *(int *)(param_1 + 0x40);
  iVar3 = *(int *)(param_1 + 0x48) - iVar1;
  if (*(int *)(param_1 + 0x1b0) == 0) {
    if (0 < *(int *)(param_1 + 0x3c)) {
      local_20.bottom = iVar3 + iVar1;
      local_20.left = 0;
      local_20.top = iVar1;
      local_20.right = *(int *)(param_1 + 0x3c);
      ExtTextOutA(param_2,0,0,2,&local_20,(LPCSTR)0x0,0,(INT *)0x0);
    }
    UVar4 = lstrlenA((LPCSTR)(param_1 + 0x5c));
    ExtTextOutA(param_2,*(int *)(param_1 + 0x1c) / 2 + ((RECT *)(param_1 + 0x3c))->left,
                ((*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x20)) - *(int *)(param_1 + 0x40)) /
                2 + iVar1,6,(RECT *)(param_1 + 0x3c),(LPCSTR)(param_1 + 0x5c),UVar4,(INT *)0x0);
    iVar5 = *(int *)(param_1 + 0x44);
  }
  else {
    if (0 < *(int *)(param_1 + 0x4c)) {
      local_20.bottom = iVar3 + iVar1;
      local_20.left = 0;
      local_20.top = iVar1;
      local_20.right = *(int *)(param_1 + 0x4c);
      ExtTextOutA(param_2,0,0,2,&local_20,(LPCSTR)0x0,0,(INT *)0x0);
    }
    UVar4 = lstrlenA((LPCSTR)(param_1 + 0x5c));
    ExtTextOutA(param_2,*(int *)(param_1 + 0x1c) / 2 + ((RECT *)(param_1 + 0x4c))->left,
                ((*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x20)) - *(int *)(param_1 + 0x40)) /
                2 + iVar1,6,(RECT *)(param_1 + 0x4c),(LPCSTR)(param_1 + 0x5c),UVar4,(INT *)0x0);
    iVar5 = *(int *)(param_1 + 0x54);
  }
  param_2 = (HDC)0x0;
  if (0 < *(int *)(param_1 + 0xbcc)) {
    puVar7 = (undefined4 *)(param_1 + 0x218);
    do {
      if (iVar5 < (int)puVar7[-0x13]) {
        local_20.bottom = iVar3 + iVar1;
        local_20.left = iVar5;
        local_20.top = iVar1;
        local_20.right = puVar7[-0x13];
        ExtTextOutA(hdc,0,0,2,&local_20,(LPCSTR)0x0,0,(INT *)0x0);
      }
      if (param_2 == (HDC)(*(int *)(param_1 + 0xbcc) + -1)) {
        local_10 = puVar7[-0x13];
        local_c = puVar7[-0x12];
        local_4 = puVar7[-0x10];
        local_8 = puVar7[-0x11] + 2;
        uVar10 = puVar7[-0xd];
        uVar9 = *puVar7;
        uVar8 = puVar7[-0xe];
        puVar6 = &local_10;
      }
      else {
        uVar10 = puVar7[-0xd];
        uVar9 = *puVar7;
        uVar8 = puVar7[-0xe];
        puVar6 = puVar7 + -0x13;
      }
      FUN_004e7d40(hdc,puVar6,uVar8,puVar7 + -0xc,uVar9,uVar10,0);
      iVar5 = puVar7[-0x11];
      puVar7 = puVar7 + 0x14;
      param_2 = (HDC)((int)param_2 + 1);
    } while ((int)param_2 < *(int *)(param_1 + 0xbcc));
  }
  return;
}


