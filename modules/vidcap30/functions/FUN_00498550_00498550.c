/* Module: vidcap30.exe
   Function: FUN_00498550
   Address: 00498550
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00498550(int param_1,int param_2)

{
  ushort uVar1;
  HWND hWnd;
  undefined4 uVar2;
  int iVar3;
  LPCSTR lpsz;
  int lParam;
  uint uVar4;
  char *pcVar5;
  undefined4 unaff_EDI;
  code *pcVar6;
  char *pcVar7;
  int *piVar8;
  HWND local_434;
  int local_430 [3];
  undefined1 *local_424;
  undefined4 uStack_420;
  char *local_41c;
  undefined1 *local_418;
  char local_410 [512];
  undefined1 auStack_210 [8];
  undefined1 local_208 [520];
  
  pcVar6 = SendMessageA_exref;
  lParam = *(int *)(param_1 + 0x6fc);
  local_434 = *(HWND *)(param_1 + 0x1c);
  hWnd = *(HWND *)(param_1 + 0x18);
  if (lParam == 0) {
    lParam = SendMessageA(hWnd,0x110a,9,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x6fc) = 0;
    FUN_004f8340(hWnd,lParam,local_410);
    FUN_004f8100(param_1,local_410,1,1);
    pcVar6 = SendMessageA_exref;
  }
  if (param_2 != 0) {
    uVar2 = (*pcVar6)(local_434,0x100c,0xffffffff,2);
    iVar3 = FUN_004f6ec0(hWnd,lParam);
    local_434 = (HWND)FUN_004f3c20(unaff_EDI,uVar2);
    iVar3 = *(int *)(*(int *)(iVar3 + 8) + (int)local_434 * 4);
    (*pcVar6)(hWnd,0x1102,2,lParam);
    uVar1 = *(ushort *)(iVar3 + 0x10);
    lpsz = local_410;
    pcVar5 = (char *)(iVar3 + 0x14);
    pcVar7 = local_410;
    for (uVar4 = (uint)(uVar1 >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
    while (local_410[0] != '\0') {
      if (local_410[0] == '\t') {
        *lpsz = '\0';
        break;
      }
      lpsz = CharNextA(lpsz);
      local_410[0] = *lpsz;
    }
    lParam = FUN_004f7f00(hWnd,lParam,local_410);
    SendMessageA(hWnd,0x110b,9,lParam);
  }
  piVar8 = local_430;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar8 = 0;
    piVar8 = piVar8 + 1;
  }
  SendMessageA(local_434,0x1004,0,0);
  FUN_004f8340(hWnd,lParam,local_410);
  local_424 = (undefined1 *)FUN_004f79a0(hWnd,lParam,local_430 + 2);
  local_418 = local_208;
  local_41c = local_410;
  local_430[0] = 2;
  (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(*(int **)(param_1 + 0x3c),local_430);
  local_430[2] = *(undefined4 *)(*(int *)(*(int *)(local_430[0] + 8) + local_430[1] * 4) + 0xc);
  local_430[0] = FUN_004f6ec0(hWnd,lParam);
  local_424 = auStack_210;
  uStack_420 = 0;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))
                    (*(int **)(param_1 + 0x3c),&stack0xfffffbc8);
  if (iVar3 == 0) {
    FUN_004f9950(param_1,lParam);
  }
  return;
}


