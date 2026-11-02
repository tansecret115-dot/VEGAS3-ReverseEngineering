/* Module: vegas30.exe
   Function: FUN_0051d0b0
   Address: 0051d0b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0051d0b0(int param_1)

{
  int iVar1;
  HWND hWnd;
  byte bVar2;
  LRESULT LVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  float10 fVar8;
  float fVar9;
  CHAR *pCVar10;
  int local_23c;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c [6];
  undefined1 local_1f4 [64];
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  undefined4 local_190 [33];
  CHAR local_10c [264];
  
  iVar1 = *(int *)(param_1 + 0x98);
  hWnd = *(HWND *)(param_1 + 0xf0);
  iVar5 = *(int *)(iVar1 + 0x9c);
  LVar3 = SendMessageA(hWnd,0x147,0,0);
  GetWindowTextA(hWnd,local_10c,0x104);
  if ((LVar3 == -1) && (LVar3 = SendMessageA(hWnd,0x14c,0,(LPARAM)local_10c), LVar3 < 0)) {
    LVar3 = SendMessageA(hWnd,0x146,0,0);
  }
  if ((0x32 < LVar3) || (LVar3 < 5)) {
    pCVar10 = local_10c;
    uVar6 = _SfGetString_8(DAT_00647204,0x81);
    SfMsgBox(DAT_00647624,0x30,uVar6,pCVar10);
    return -0x7ff8fffb;
  }
  if (iVar5 == 0) {
    iVar4 = 0x898;
  }
  else if (iVar5 == 1) {
    iVar4 = 0x8ca;
  }
  else if (iVar5 == 2) {
    iVar4 = 0x8fc;
  }
  else {
    iVar4 = 0;
  }
  iVar4 = LVar3 + -5 + iVar4;
  local_23c = _SfSetMetricString_12(DAT_00647200,iVar4,local_10c);
  puVar7 = (undefined4 *)0x0;
  if (iVar5 == 0) {
    iVar5 = FUN_0050c470(iVar1,*(undefined4 *)(iVar1 + 0x88),*(undefined4 *)(iVar1 + 0x8c),local_20c
                         ,0,0,0);
    if (iVar5 == -1) {
      return 0;
    }
    if ((_DAT_00610fd8 != (double)CONCAT44(uStack_1a0,local_1a4)) &&
       (((*(int *)(iVar1 + 0x80) != 0 || (*(int *)(iVar1 + 0x84) != 0x3ff00000)) &&
        (_DAT_00610fd8 != *(double *)(iVar1 + 0x80))))) {
      local_228 = local_1b0;
      local_22c = local_1b4;
      local_224 = local_1ac;
      local_220 = local_1a8;
      FUN_005a6120(local_1f4,local_1f4,-(double)CONCAT44(uStack_1a0,local_1a4),&local_22c);
      FUN_005a6440(local_1f4,local_1f4,&local_22c,0x3f800000,
                   (float)((float10)_DAT_006106d0 / (float10)*(double *)(iVar1 + 0x80)));
      FUN_005a6120(local_1f4,local_1f4,local_1a4,uStack_1a0,&local_22c);
      FUN_005a6440(local_1f4,local_1f4,&local_22c,0x3f800000,(float)*(double *)(iVar1 + 0x80));
    }
    local_21c = 0;
    local_218 = 0;
    local_214 = 0;
    local_210 = 0;
    fVar8 = (float10)FUN_005a5ff0(iVar1 + 0x24);
    fVar9 = (float)((float10)_DAT_00619ab0 / fVar8);
    fVar8 = (float10)FUN_005a5f80();
    FUN_005a6440(local_1f4,local_1f4,&local_21c,(float)((float10)_DAT_00619ab0 / fVar8),fVar9);
    puVar7 = local_20c;
  }
  else {
    if (iVar5 == 1) {
      iVar5 = FUN_0050c470(*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(iVar1 + 0x88),
                           *(undefined4 *)(iVar1 + 0x8c),local_190,1,0,0);
      if (iVar5 == -1) {
        return -0x7fffbffb;
      }
      bVar2 = *(byte *)(iVar1 + 4) & 4;
    }
    else {
      if (iVar5 != 2) goto LAB_0051d3b6;
      iVar5 = FUN_0050c470(*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(iVar1 + 0x88),
                           *(undefined4 *)(iVar1 + 0x8c),local_190,2,0,0);
      if (iVar5 == -1) {
        return -0x7fffbffb;
      }
      bVar2 = *(byte *)(iVar1 + 4) & 8;
    }
    if (bVar2 != 0) {
      return -0x7fffbffb;
    }
    puVar7 = local_190;
  }
LAB_0051d3b6:
  if (-1 < local_23c) {
    local_23c = _SfSetMetricBinary_16(DAT_00647200,iVar4,puVar7,*puVar7);
  }
  FUN_0051ddc0();
  return local_23c;
}


