/* Module: sftrans1.dll
   Function: FUN_004aca30
   Address: 004aca30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004aca30(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  HWND hWnd;
  HWND hWnd_00;
  LPARAM LVar3;
  int iVar4;
  CHAR aCStack_1a0 [12];
  int *piStack_194;
  HWND pHStack_190;
  HWND pHStack_18c;
  HWND local_188;
  HWND pHStack_184;
  HWND pHStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  double dStack_16c;
  double dStack_164;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined2 uStack_140;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_188 = (HWND)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00554d70,&local_188);
  }
  (**(code **)(local_188->unused + 0x34))(local_188,param_1 + 0x4c,0x3b4);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x420);
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x30),0x434);
  pHStack_180 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x42d);
  pHStack_18c = GetDlgItem(*(HWND *)(param_1 + 0x30),0x422);
  local_188 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x432);
  pHStack_190 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x423);
  hWnd_00 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x41e);
  pHStack_184 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x42a);
  LVar3 = ftol();
  SendMessageA(pHVar2,0x610,1,LVar3);
  LVar3 = ftol();
  SendMessageA(hWnd,0x610,1,LVar3);
  LVar3 = ftol();
  SendMessageA(pHStack_180,0x610,1,LVar3);
  LVar3 = ftol();
  SendMessageA(pHStack_18c,0x610,1,LVar3);
  LVar3 = ftol();
  SendMessageA(local_188,0x610,1,LVar3);
  SendMessageA(hWnd_00,0x80d,2,0);
  SendMessageA(hWnd_00,0x80e,2,0);
  uStack_158 = 1;
  uStack_1c = 1;
  uStack_2c = 0;
  uStack_28 = 0;
  dStack_16c = (double)((*(float *)(param_1 + 0x4c) + _DAT_0055c008) * _DAT_0055c00c);
  uStack_24 = 0;
  uStack_154 = 0xffffffff;
  uStack_150 = 0x3f800000;
  uStack_14c = 0x3f000000;
  uStack_148 = 0x3f000000;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_3c = 0;
  dStack_164 = (double)((*(float *)(param_1 + 0x50) + _DAT_0055c008) * _DAT_0055c00c);
  uStack_38 = 0xffffff;
  uStack_34 = 0;
  uStack_30 = 0x3f800000;
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_15c = 0;
  SendMessageA(hWnd_00,0x804,0,(LPARAM)&dStack_16c);
  dStack_16c = 0.5;
  dStack_164 = 0.5;
  uStack_15c = 1;
  uStack_158 = 0;
  SendMessageA(hWnd_00,0x804,1,(LPARAM)&dStack_16c);
  uStack_15c = 0;
  dStack_16c = (double)((*(float *)(param_1 + 0x4c) + _DAT_0055c008) * _DAT_0055c00c);
  dStack_164 = (double)((*(float *)(param_1 + 0x50) + _DAT_0055c008) * _DAT_0055c00c);
  SendMessageA(hWnd_00,0x804,2,(LPARAM)&dStack_16c);
  SendMessageA(hWnd_00,0x80f,0,0);
  uStack_17c = *(undefined4 *)(param_1 + 0x3f4);
  uStack_178 = *(undefined4 *)(param_1 + 0x3f8);
  uStack_174 = *(undefined4 *)(param_1 + 0x3fc);
  uStack_170 = 0x3f800000;
  SendMessageA(pHStack_190,0x703,0,(LPARAM)&uStack_17c);
  SendMessageA(pHStack_184,0x14e,*(WPARAM *)(param_1 + 0x3dc),0);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x451);
  FUN_004d6250(&stack0xfffffe54,(double)*(float *)(param_1 + 0x4c),3,0);
  SendMessageA(pHVar2,0xd,6,(LPARAM)aCStack_1a0);
  iVar4 = lstrcmpA(aCStack_1a0,&stack0xfffffe54);
  if (iVar4 != 0) {
    SendMessageA(pHVar2,0xc,0,(LPARAM)&stack0xfffffe54);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x452);
  FUN_004d6250(&stack0xfffffe54,(double)*(float *)(param_1 + 0x50),3,0);
  SendMessageA(pHVar2,0xd,6,(LPARAM)aCStack_1a0);
  iVar4 = lstrcmpA(aCStack_1a0,&stack0xfffffe54);
  if (iVar4 != 0) {
    SendMessageA(pHVar2,0xc,0,(LPARAM)&stack0xfffffe54);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x44f);
  FUN_004d6250(&stack0xfffffe54,(double)*(float *)(param_1 + 0x3e0),3,0);
  SendMessageA(pHVar2,0xd,6,(LPARAM)aCStack_1a0);
  iVar4 = lstrcmpA(aCStack_1a0,&stack0xfffffe54);
  if (iVar4 != 0) {
    SendMessageA(pHVar2,0xc,0,(LPARAM)&stack0xfffffe54);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x454);
  FUN_004d6250(&stack0xfffffe54,(double)*(float *)(param_1 + 0x3e4),3,0);
  SendMessageA(pHVar2,0xd,6,(LPARAM)aCStack_1a0);
  iVar4 = lstrcmpA(aCStack_1a0,&stack0xfffffe54);
  if (iVar4 != 0) {
    SendMessageA(pHVar2,0xc,0,(LPARAM)&stack0xfffffe54);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x44e);
  FUN_004d6250(&stack0xfffffe54,(double)*(float *)(param_1 + 0x3f0),3,0);
  SendMessageA(pHVar2,0xd,6,(LPARAM)aCStack_1a0);
  iVar4 = lstrcmpA(aCStack_1a0,&stack0xfffffe54);
  if (iVar4 != 0) {
    SendMessageA(pHVar2,0xc,0,(LPARAM)&stack0xfffffe54);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x450);
  FUN_004d6250(&stack0xfffffe54,(double)*(float *)(param_1 + 1000),3,0);
  SendMessageA(pHVar2,0xd,6,(LPARAM)aCStack_1a0);
  iVar4 = lstrcmpA(aCStack_1a0,&stack0xfffffe54);
  if (iVar4 != 0) {
    SendMessageA(pHVar2,0xc,0,(LPARAM)&stack0xfffffe54);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x453);
  FUN_004d6250(&stack0xfffffe54,(double)*(float *)(param_1 + 0x3ec),3,0);
  SendMessageA(pHVar2,0xd,6,(LPARAM)aCStack_1a0);
  iVar4 = lstrcmpA(aCStack_1a0,&stack0xfffffe54);
  if (iVar4 != 0) {
    SendMessageA(pHVar2,0xc,0,(LPARAM)&stack0xfffffe54);
  }
  if (piStack_194 != (int *)0x0) {
    (**(code **)(*piStack_194 + 8))(piStack_194);
  }
  return;
}


