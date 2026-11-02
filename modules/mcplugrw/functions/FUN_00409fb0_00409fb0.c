/* Module: mcplugrw.dll
   Function: FUN_00409fb0
   Address: 00409fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00409fb0(HWND param_1,int param_2)

{
  int dwNewLong;
  HWND pHVar1;
  int iVar2;
  BYTE *pBVar3;
  LPCSTR lpString;
  int iVar4;
  int iVar5;
  HWND pHVar6;
  int *piVar7;
  uint uVar8;
  int local_214;
  int local_210 [38];
  int local_178 [30];
  uchar local_100 [256];
  
  dwNewLong = *(int *)(param_2 + 0x1c);
  SetWindowLongA(param_1,-0x15,dwNewLong);
  FUN_0041ff20(param_1,(HFONT)0x0);
  uVar8 = 0x8001;
  piVar7 = (int *)0x0;
  pHVar6 = (HWND)0x0;
  pHVar1 = GetParent(param_1);
  FUN_00429fa0(pHVar1,pHVar6,piVar7,uVar8);
  FUN_004088c0(dwNewLong,param_1);
  iVar4 = *(int *)(dwNewLong + 0x254);
  FUN_00406d70(param_1,*(int *)(dwNewLong + 0x1dc),(uint)(*(int *)(dwNewLong + 0x22c) == 0),iVar4);
  FUN_0040a2e0(param_1,dwNewLong);
  if (iVar4 == 0) {
    local_210[9] = 0;
    local_210[8] = 0x1f46;
    local_178[0] = 0x1f46;
    local_178[1] = 0;
    local_210[10] = 0xe73;
    local_210[0xb] = 0;
    local_178[2] = 0xe73;
    local_178[3] = 0;
  }
  else {
    local_210[8] = 0x1f46;
    local_178[0] = 0x1f46;
    local_210[9] = 1;
    local_178[1] = 5;
    local_210[10] = 0xe73;
    local_210[0xb] = 1;
    local_178[2] = 0xe73;
    local_178[3] = 5;
    FUN_00408f00(dwNewLong,param_1);
  }
  local_210[0xd] = 1;
  local_210[0xc] = 0x1f47;
  local_178[4] = 0x1f47;
  local_178[5] = 5;
  iVar5 = 3;
  local_214 = 0x1b94;
  iVar4 = 3;
  if ((*(uint *)(dwNewLong + 0x1d8) & 0x100) == 0) {
    iVar5 = 4;
    local_210[0xe] = 0x1b95;
    local_210[0xf] = 0;
    local_178[6] = 0x1b95;
    local_178[7] = 0;
    iVar4 = 4;
  }
  else {
    local_214 = 0x1b95;
  }
  if ((*(byte *)(dwNewLong + 0x1d8) & 0x80) == 0) {
    local_210[iVar5 * 2 + 8] = 0x1b96;
    local_210[iVar5 * 2 + 9] = 0;
    local_178[iVar4 * 2] = 0x1b96;
    iVar5 = iVar5 + 1;
    local_178[iVar4 * 2 + 1] = 0;
    iVar4 = iVar4 + 1;
  }
  else {
    local_214 = 0x1b96;
  }
  if (*(int *)(dwNewLong + 0x22c) == 0) {
    local_210[iVar5 * 2 + 8] = 0x1b97;
    local_210[iVar5 * 2 + 9] = 0;
    local_178[iVar4 * 2] = 0x1b97;
    iVar5 = iVar5 + 1;
    local_178[iVar4 * 2 + 1] = 0;
    iVar4 = iVar4 + 1;
  }
  else if (*(int *)(dwNewLong + 0x1dc) == 0) {
    local_210[iVar5 * 2 + 8] = 0x1b97;
    local_210[iVar5 * 2 + 9] = 0;
    iVar5 = iVar5 + 1;
  }
  else {
    local_214 = 0x1b97;
  }
  if (((*(byte *)(dwNewLong + 0x1d8) & 0x10) == 0) || (0 < *(int *)(dwNewLong + 0x1dc))) {
    local_210[iVar5 * 2 + 8] = 0x1b9e;
    local_210[iVar5 * 2 + 9] = 0;
    local_178[iVar4 * 2] = 0x1b9e;
    iVar5 = iVar5 + 1;
    local_178[iVar4 * 2 + 1] = 0;
    iVar4 = iVar4 + 1;
  }
  else {
    iVar2 = FUN_00406450();
    if (iVar2 == 0) {
      local_210[iVar5 * 2 + 8] = 0x1b9e;
      local_210[iVar5 * 2 + 9] = 0;
      iVar5 = iVar5 + 1;
    }
    else {
      local_214 = 0x1b9e;
      if (iVar2 == 1) {
        FUN_00406500(0);
        pBVar3 = FUN_0041f9f0(DAT_004a811c,0x2774);
        FUN_00420fe0(local_100,pBVar3);
        SetDlgItemTextA(param_1,0x1b9e,(LPCSTR)local_100);
      }
      else {
        lpString = FUN_0041f9f0(DAT_004a811c,0x2775);
        SetDlgItemTextA(param_1,0x1b9e,lpString);
      }
    }
  }
  FUN_00405d10(param_1,local_210 + 8,iVar5);
  FUN_00405d50(param_1,local_178,iVar4);
  local_210[0] = 0x1f46;
  local_210[1] = 0xe73;
  local_210[2] = 0x1f47;
  local_210[3] = 0x1b94;
  local_210[4] = 0x1b95;
  local_210[5] = 0x1b96;
  local_210[6] = 0x1b97;
  local_210[7] = 0x1b9e;
  FUN_00405d90(param_1,local_210,8);
  CheckRadioButton(param_1,0x1b94,local_214,0x1b94);
  FUN_00405cd0(0x1b94,dwNewLong);
  return 1;
}


