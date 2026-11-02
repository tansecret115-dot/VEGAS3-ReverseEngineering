/* Module: sftrans1.dll
   Function: FUN_004b1f00
   Address: 004b1f00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004b1f00(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  HWND hWnd;
  LPARAM LVar3;
  uint wParam;
  int iVar4;
  UINT UVar5;
  WPARAM wParam_00;
  float *lParam;
  CHAR aCStack_1a8 [12];
  CHAR aCStack_19c [12];
  int *piStack_190;
  HWND pHStack_18c;
  HWND local_188;
  HWND pHStack_184;
  HWND pHStack_180;
  HWND pHStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined2 uStack_13c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_188 = (HWND)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00555130,&local_188);
  }
  (**(code **)(local_188->unused + 0xc))(local_188,(undefined4 *)(param_1 + 0x68));
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6f0);
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6f3);
  pHStack_17c = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6f7);
  local_188 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x701);
  pHStack_184 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6f9);
  pHStack_18c = GetDlgItem(*(HWND *)(param_1 + 0x30),0x708);
  pHStack_180 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x70b);
  LVar3 = ftol();
  SendMessageA(pHVar2,0x610,1,LVar3);
  LVar3 = ftol();
  SendMessageA(hWnd,0x610,1,LVar3);
  LVar3 = ftol();
  SendMessageA(pHStack_17c,0x610,1,LVar3);
  LVar3 = ftol();
  SendMessageA(local_188,0x610,1,LVar3);
  LVar3 = ftol();
  SendMessageA(pHStack_184,0x610,1,LVar3);
  LVar3 = ftol();
  SendMessageA(pHStack_18c,0x610,1,LVar3);
  LVar3 = ftol();
  SendMessageA(pHStack_180,0x610,1,LVar3);
  LVar3 = 0;
  wParam = (uint)(*(int *)(param_1 + 0x88) != 0);
  UVar5 = 0xf1;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6fb);
  SendMessageA(pHVar2,UVar5,wParam,LVar3);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6eb);
  FUN_004d6250(aCStack_1a8,*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),3,0);
  SendMessageA(pHVar2,0xd,6,(LPARAM)aCStack_19c);
  iVar4 = lstrcmpA(aCStack_19c,aCStack_1a8);
  if (iVar4 != 0) {
    SendMessageA(pHVar2,0xc,0,(LPARAM)aCStack_1a8);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6ed);
  FUN_004d6250(aCStack_1a8,*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74),3,0);
  SendMessageA(pHVar2,0xd,6,(LPARAM)aCStack_19c);
  iVar4 = lstrcmpA(aCStack_19c,aCStack_1a8);
  if (iVar4 != 0) {
    SendMessageA(pHVar2,0xc,0,(LPARAM)aCStack_1a8);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6f1);
  FUN_004d6250(aCStack_1a8,*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),3,0);
  SendMessageA(pHVar2,0xd,6,(LPARAM)aCStack_19c);
  iVar4 = lstrcmpA(aCStack_19c,aCStack_1a8);
  if (iVar4 != 0) {
    SendMessageA(pHVar2,0xc,0,(LPARAM)aCStack_1a8);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6f4);
  FUN_004d6250(aCStack_1a8,*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),3,0);
  SendMessageA(pHVar2,0xd,6,(LPARAM)aCStack_19c);
  iVar4 = lstrcmpA(aCStack_19c,aCStack_1a8);
  if (iVar4 != 0) {
    SendMessageA(pHVar2,0xc,0,(LPARAM)aCStack_1a8);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6f8);
  FUN_004d6250(aCStack_1a8,*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),3,0);
  SendMessageA(pHVar2,0xd,6,(LPARAM)aCStack_19c);
  iVar4 = lstrcmpA(aCStack_19c,aCStack_1a8);
  if (iVar4 != 0) {
    SendMessageA(pHVar2,0xc,0,(LPARAM)aCStack_1a8);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x702);
  FUN_004d6250(aCStack_1a8,*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c),3,0);
  SendMessageA(pHVar2,0xd,6,(LPARAM)aCStack_19c);
  iVar4 = lstrcmpA(aCStack_19c,aCStack_1a8);
  if (iVar4 != 0) {
    SendMessageA(pHVar2,0xc,0,(LPARAM)aCStack_1a8);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6fa);
  FUN_004d6250(aCStack_1a8,*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4),3,0);
  SendMessageA(pHVar2,0xd,6,(LPARAM)aCStack_19c);
  iVar4 = lstrcmpA(aCStack_19c,aCStack_1a8);
  if (iVar4 != 0) {
    SendMessageA(pHVar2,0xc,0,(LPARAM)aCStack_1a8);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x709);
  FUN_004d6250(aCStack_1a8,*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xc4),3,0);
  SendMessageA(pHVar2,0xd,6,(LPARAM)aCStack_19c);
  iVar4 = lstrcmpA(aCStack_19c,aCStack_1a8);
  if (iVar4 != 0) {
    SendMessageA(pHVar2,0xc,0,(LPARAM)aCStack_1a8);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x70c);
  FUN_004d6250(aCStack_1a8,*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xcc),3,0);
  SendMessageA(pHVar2,0xd,6,(LPARAM)aCStack_19c);
  iVar4 = lstrcmpA(aCStack_19c,aCStack_1a8);
  if (iVar4 != 0) {
    SendMessageA(pHVar2,0xc,0,(LPARAM)aCStack_1a8);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6e9);
  uStack_154 = 1;
  uStack_18 = 1;
  uStack_168 = *(undefined4 *)(param_1 + 0x68);
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_160 = *(undefined4 *)(param_1 + 0x70);
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_164 = *(undefined4 *)(param_1 + 0x6c);
  uStack_15c = *(undefined4 *)(param_1 + 0x74);
  uStack_158 = 2;
  uStack_150 = 0xffffffff;
  uStack_14c = 0x3f800000;
  uStack_148 = 0x3f000000;
  uStack_144 = 0x3f000000;
  uStack_140 = 0;
  uStack_13c = 0;
  uStack_38 = 0;
  uStack_34 = 0xffffff;
  uStack_30 = 0;
  uStack_2c = 0x3f800000;
  uStack_14 = 0;
  SendMessageA(pHVar2,0x804,0,(LPARAM)&uStack_168);
  SendMessageA(pHVar2,0x80f,0,0);
  fStack_178 = (float)*(double *)(param_1 + 0xb8);
  lParam = &fStack_178;
  fStack_174 = (float)*(double *)(param_1 + 0xb0);
  wParam_00 = 0;
  fStack_170 = (float)*(double *)(param_1 + 0xa8);
  UVar5 = 0x703;
  uStack_16c = 0x3f800000;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x70d);
  SendMessageA(pHVar2,UVar5,wParam_00,(LPARAM)lParam);
  if (piStack_190 != (int *)0x0) {
    (**(code **)(*piStack_190 + 8))(piStack_190);
  }
  return;
}


