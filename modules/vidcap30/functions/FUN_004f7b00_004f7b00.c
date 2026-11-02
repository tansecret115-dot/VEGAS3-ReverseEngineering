/* Module: vidcap30.exe
   Function: FUN_004f7b00
   Address: 004f7b00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f7b00(int param_1,int param_2)

{
  undefined4 uVar1;
  uint *_Memory;
  LRESULT LVar2;
  LRESULT LVar3;
  int iVar4;
  HWND hWnd;
  uint *puVar5;
  HWND unaff_EDI;
  int **ppiVar6;
  undefined4 *puVar7;
  undefined4 **ppuVar8;
  UINT Msg;
  WPARAM wParam;
  undefined1 *lParam;
  int *local_450 [4];
  undefined1 auStack_440 [4];
  undefined1 *local_43c;
  undefined4 *local_438 [5];
  uint *puStack_424;
  char acStack_420 [4];
  undefined4 uStack_41c;
  undefined1 local_410 [512];
  uchar auStack_210 [8];
  undefined4 local_208 [128];
  LPARAM LStack_8;
  
  if (param_2 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  FUN_004f3e30(param_1);
  ppiVar6 = local_450;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppiVar6 = (int *)0x0;
    ppiVar6 = ppiVar6 + 1;
  }
  local_450[3] = (int *)FUN_004f79a0(uVar1,param_2,local_450 + 2);
  if (local_450[2] == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *local_450[2];
  }
  if (((int)local_450[3] < 0) || (iVar4 + -1 < (int)local_450[3])) {
    puVar5 = (uint *)0x0;
  }
  else {
    puVar5 = *(uint **)(local_450[2][2] + (int)local_450[3] * 4);
  }
  if (puVar5 == (uint *)0x0) {
    return;
  }
  if ((*puVar5 & 0x80000) != 0) {
    return;
  }
  FUN_004f8340(uVar1,param_2,local_410);
  local_438[0] = local_208;
  puVar7 = local_208;
  for (iVar4 = 0x82; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_43c = local_410;
  local_450[0] = (int *)0x2;
  (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(*(int **)(param_1 + 0x3c),local_450);
  ppuVar8 = local_438;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppuVar8 = (undefined4 *)0x0;
    ppuVar8 = ppuVar8 + 1;
  }
  local_438[0] = *(undefined4 **)(param_1 + 4);
  local_438[1] = *(undefined4 **)(param_1 + 0x2c);
  local_438[2] = (undefined4 *)0x36;
  iVar4 = lstrlenA((LPCSTR)auStack_210);
  _Memory = calloc(1,(iVar4 + 1U & 0xffff) + 0x17);
  *(short *)(_Memory + 4) = (short)(iVar4 + 1U);
  *(undefined2 *)((int)_Memory + 0x12) = 0;
  *_Memory = *puVar5;
  _Memory[1] = puVar5[1];
  _Memory[2] = puVar5[2];
  _Memory[3] = puVar5[3];
  _mbscpy((uchar *)(_Memory + 5),auStack_210);
  uStack_41c = 1;
  puStack_424 = _Memory;
  LVar2 = SendMessageA(*(HWND *)(param_1 + 8),0x4e,*(WPARAM *)(param_1 + 0x2c),(LPARAM)local_438);
  if (LVar2 == 3) {
    return;
  }
  if (LVar2 == 2) {
    local_43c = (undefined1 *)0x1;
  }
  local_450[3] = (int *)auStack_210;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))
                    (*(int **)(param_1 + 0x3c),&stack0xfffffba8);
  if (iVar4 == 0) {
    LVar2 = SendMessageA(unaff_EDI,0x110a,3,LStack_8);
    if (LVar2 == 0) {
      LVar2 = -0x10000;
    }
    LVar3 = SendMessageA(unaff_EDI,0x110a,2,LStack_8);
    if ((LVar3 == 0) && (LVar3 = SendMessageA(unaff_EDI,0x110a,1,LStack_8), LVar3 == 0)) {
      LVar3 = LVar2;
    }
    if (LVar3 == -0x10000) {
      acStack_420[0] = '\0';
    }
    else {
      FUN_004f8340(unaff_EDI,LVar3,acStack_420);
    }
    FUN_004f96e0(param_1,LVar2,0xffffffff);
    lParam = (undefined1 *)0x0;
    if (acStack_420[0] != '\0') {
      FUN_004f8100(param_1,acStack_420,1,0);
      goto LAB_004f7d6a;
    }
    hWnd = *(HWND *)(param_1 + 0x1c);
    wParam = 0;
    Msg = 0x1009;
  }
  else {
    wParam = *(WPARAM *)(param_1 + 0x2c);
    hWnd = *(HWND *)(param_1 + 8);
    lParam = auStack_440;
    local_438[0] = (undefined4 *)0x37;
    Msg = 0x4e;
  }
  SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
LAB_004f7d6a:
  free(_Memory);
  return;
}


