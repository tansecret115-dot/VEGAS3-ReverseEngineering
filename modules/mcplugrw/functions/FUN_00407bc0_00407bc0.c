/* Module: mcplugrw.dll
   Function: FUN_00407bc0
   Address: 00407bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00407bc0(HWND param_1,int param_2)

{
  int dwNewLong;
  bool bVar1;
  bool bVar2;
  HWND pHVar3;
  BYTE *pBVar4;
  int iVar5;
  uchar *lpString;
  int iVar6;
  int iVar7;
  HWND pHVar8;
  int *piVar9;
  uint uVar10;
  int local_1d0;
  int local_1c4;
  int local_1bc [27];
  int local_150 [20];
  uchar local_100 [256];
  
  dwNewLong = *(int *)(param_2 + 0x1c);
  SetWindowLongA(param_1,-0x15,dwNewLong);
  FUN_0041ff20(param_1,(HFONT)0x0);
  uVar10 = 0x8001;
  piVar9 = (int *)0x0;
  pHVar8 = (HWND)0x0;
  pHVar3 = GetParent(param_1);
  FUN_00429fa0(pHVar3,pHVar8,piVar9,uVar10);
  FUN_00407ee0(dwNewLong,param_1,0);
  FUN_00407f90(dwNewLong,param_1);
  if ((*(uint *)(dwNewLong + 0x1d4) & 0x800) == 0) {
    pBVar4 = FUN_0041f9f0(DAT_004a811c,0x2762);
    FUN_00420fe0(local_100,pBVar4);
  }
  else {
    FUN_00406230(DAT_004a84f4,0);
    pBVar4 = FUN_0041f9f0(DAT_004a811c,0x2763);
    FUN_00420fe0(local_100,pBVar4);
  }
  SetDlgItemTextA(param_1,0xe72,(LPCSTR)local_100);
  pBVar4 = FUN_0041f9f0(DAT_004a811c,0x2764);
  FUN_00420fe0(local_100,pBVar4);
  SetDlgItemTextA(param_1,0x1b9f,(LPCSTR)local_100);
  bVar1 = true;
  bVar2 = true;
  local_1bc[0] = 0;
  local_1bc[1] = 0;
  local_1d0 = 0x1b9f;
  iVar6 = 0;
  FUN_00416bc0(DAT_004a8128,local_1bc,local_1bc + 1);
  if ((DAT_004a823c == '\0') ||
     (((local_1bc[0] != DAT_004a84f4 || (DAT_004a84f4 == 0)) && (local_1bc[0] != 0)))) {
    iVar6 = 2;
    local_1bc[7] = 0x1b9f;
    local_150[0] = 0x1b9f;
    bVar1 = false;
    local_1c4 = 0x1ba0;
    local_150[1] = 0;
    local_150[2] = 0xe72;
    local_150[3] = 0;
    local_1bc[9] = 0x1f43;
    local_1bc[10] = 1;
    iVar7 = 2;
  }
  else {
    local_1c4 = 0x1b9f;
    local_1bc[7] = 0x1f43;
    iVar7 = 1;
  }
  local_1bc[8] = 0;
  if ((*(byte *)(dwNewLong + 0x1d4) & 8) == 0) {
    bVar2 = false;
    local_1bc[iVar7 * 2 + 7] = 0x1b9e;
    local_1bc[iVar7 * 2 + 8] = 0;
    local_150[iVar6 * 2] = 0x1b9e;
    iVar7 = iVar7 + 1;
    local_150[iVar6 * 2 + 1] = 0;
    iVar6 = iVar6 + 1;
  }
  else {
    local_1d0 = 0x1b9e;
    iVar5 = FUN_00406450();
    if (iVar5 == 0) {
      local_1bc[iVar7 * 2 + 7] = 0x1b9e;
      local_1bc[iVar7 * 2 + 8] = 0;
      iVar7 = iVar7 + 1;
      local_1d0 = 0x1ba0;
    }
    else {
      if (iVar5 == 1) {
        FUN_00406500(0);
        pBVar4 = FUN_0041f9f0(DAT_004a811c,0x2774);
        FUN_00420fe0(local_100,pBVar4);
        lpString = local_100;
      }
      else {
        lpString = FUN_0041f9f0(DAT_004a811c,0x2775);
      }
      SetDlgItemTextA(param_1,0x1b9e,(LPCSTR)lpString);
    }
  }
  if ((!bVar1) && (!bVar2)) {
    local_150[iVar6 * 2] = 0x1ba0;
    local_150[iVar6 * 2 + 1] = 0;
    iVar6 = iVar6 + 1;
  }
  FUN_00405d10(param_1,local_1bc + 7,iVar7);
  FUN_00405d50(param_1,local_150,iVar6);
  local_1bc[2] = 0x1b9f;
  local_1bc[3] = 0xe72;
  local_1bc[4] = 0x1f43;
  local_1bc[5] = 0x1b9e;
  local_1bc[6] = 0x1ba0;
  FUN_00405d90(param_1,local_1bc + 2,5);
  CheckRadioButton(param_1,local_1d0,0x1ba0,local_1c4);
  FUN_00405cd0(local_1c4,dwNewLong);
  return 1;
}


