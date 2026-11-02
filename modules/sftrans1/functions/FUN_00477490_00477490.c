/* Module: sftrans1.dll
   Function: FUN_00477490
   Address: 00477490
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00477490(int param_1)

{
  undefined4 *puVar1;
  HWND hWnd;
  HWND pHVar2;
  HWND pHVar3;
  HWND pHVar4;
  LPARAM LVar5;
  int *piStack_130;
  float fStack_128;
  int *local_124;
  float fStack_120;
  float fStack_11c;
  CHAR aCStack_118 [276];
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_124 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00554ce0,&local_124);
  }
  (**(code **)(*local_124 + 0x34))(local_124,(undefined4 *)(param_1 + 0x50),0x38);
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x30),0x603);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5fd);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5fe);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5ff);
  LVar5 = ftol();
  SendMessageA(pHVar2,0x610,1,LVar5);
  LVar5 = ftol();
  SendMessageA(pHVar3,0x610,1,LVar5);
  LVar5 = ftol();
  SendMessageA(pHVar4,0x610,1,LVar5);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x606);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x607);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x608);
  FUN_004c6ae0(aCStack_118,"%1.3f",*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
  SetWindowTextA(pHVar2,aCStack_118);
  FUN_004c6ae0(aCStack_118,"%1.3f",*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
  SetWindowTextA(pHVar3,aCStack_118);
  FUN_004c6ae0(aCStack_118,"%1.3f",*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
  SetWindowTextA(pHVar4,aCStack_118);
  fStack_128 = (float)*(double *)(param_1 + 0x68);
  local_124 = (int *)(float)*(double *)(param_1 + 0x70);
  fStack_120 = (float)*(double *)(param_1 + 0x78);
  fStack_11c = (float)*(double *)(param_1 + 0x80);
  SendMessageA(hWnd,0x703,0,(LPARAM)&fStack_128);
  if (piStack_130 != (int *)0x0) {
    (**(code **)(*piStack_130 + 8))(piStack_130);
  }
  return;
}


