/* Module: sftrans1.dll
   Function: FUN_00472870
   Address: 00472870
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00472870(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  HWND pHVar3;
  HWND pHVar4;
  LPARAM LVar5;
  int *piStack_280;
  HWND local_278;
  HWND pHStack_274;
  HWND pHStack_270;
  double dStack_26c;
  double dStack_264;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined2 uStack_240;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  CHAR aCStack_114 [272];
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_278 = (HWND)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00555130,&local_278);
  }
  (**(code **)(local_278->unused + 0xc))(local_278,(undefined4 *)(param_1 + 0x68));
  local_278 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5af);
  uStack_12c = 0;
  dStack_26c = (*(double *)(param_1 + 0x70) + _DAT_00555908) * _DAT_00557838;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_240 = 0;
  uStack_120 = 0;
  uStack_13c = 0;
  uStack_118 = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  dStack_264 = (*(double *)(param_1 + 0x78) + _DAT_00555908) * _DAT_00557838;
  uStack_25c = 2;
  uStack_254 = 0xffffffff;
  uStack_250 = 0x3f800000;
  uStack_24c = 0x3f000000;
  uStack_248 = 0x3f000000;
  uStack_244 = 0;
  uStack_130 = 0x3f800000;
  uStack_11c = 1;
  uStack_258 = 1;
  SendMessageA(local_278,0x804,0,(LPARAM)&dStack_26c);
  pHStack_274 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5b7);
  pHStack_270 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5b8);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5b4);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5b6);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5b1);
  FUN_004c6ae0(aCStack_114,&DAT_0055e6e4,*(undefined4 *)(param_1 + 0x70),
               *(undefined4 *)(param_1 + 0x74));
  SetWindowTextA(pHStack_274,aCStack_114);
  FUN_004c6ae0(aCStack_114,&DAT_0055e6e4,*(undefined4 *)(param_1 + 0x78),
               *(undefined4 *)(param_1 + 0x7c));
  SetWindowTextA(pHStack_270,aCStack_114);
  FUN_004c6ae0(aCStack_114,&DAT_0055e6e4,*(undefined4 *)(param_1 + 0x80),
               *(undefined4 *)(param_1 + 0x84));
  SetWindowTextA(pHVar2,aCStack_114);
  FUN_004c6ae0(aCStack_114,&DAT_0055e6e4,*(undefined4 *)(param_1 + 0x88),
               *(undefined4 *)(param_1 + 0x8c));
  SetWindowTextA(pHVar3,aCStack_114);
  FUN_004c6ae0(aCStack_114,&DAT_0055e6e4,*(undefined4 *)(param_1 + 0x68),
               *(undefined4 *)(param_1 + 0x6c));
  SetWindowTextA(pHVar4,aCStack_114);
  EnableWindow(pHVar3,(uint)(*(int *)(param_1 + 0x90) == 0));
  CheckDlgButton(*(HWND *)(param_1 + 0x30),0x5b9,*(UINT *)(param_1 + 0x90));
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5b2);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5b5);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5b0);
  LVar5 = ftol();
  SendMessageA(pHVar2,0x610,1,LVar5);
  LVar5 = ftol();
  SendMessageA(pHVar3,0x610,1,LVar5);
  LVar5 = ftol();
  SendMessageA(pHVar4,0x610,1,LVar5);
  EnableWindow(pHVar3,(uint)(*(int *)(param_1 + 0x90) == 0));
  SendMessageA(local_278,0x80f,0,0);
  if (piStack_280 != (int *)0x0) {
    (**(code **)(*piStack_280 + 8))(piStack_280);
  }
  return;
}


