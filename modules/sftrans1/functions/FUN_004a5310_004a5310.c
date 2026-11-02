/* Module: sftrans1.dll
   Function: FUN_004a5310
   Address: 004a5310
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004a5310(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  HWND hWnd;
  LPARAM LVar3;
  int iVar4;
  int *unaff_ESI;
  int *local_20 [2];
  CHAR aCStack_18 [24];
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_20[0] = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00554d50,local_20);
  }
  (**(code **)(*local_20[0] + 0x34))(local_20[0],(undefined4 *)(param_1 + 0x50),0x10);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x414);
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x30),0x415);
  LVar3 = ftol();
  SendMessageA(pHVar2,0x610,1,LVar3);
  LVar3 = ftol();
  SendMessageA(hWnd,0x610,1,LVar3);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x416);
  FUN_004d6250(&stack0xffffffdc,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),3,0)
  ;
  SendMessageA(pHVar2,0xd,6,(LPARAM)aCStack_18);
  iVar4 = lstrcmpA(aCStack_18,&stack0xffffffdc);
  if (iVar4 != 0) {
    SendMessageA(pHVar2,0xc,0,(LPARAM)&stack0xffffffdc);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x417);
  FUN_004d6250(&stack0xffffffdc,*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),3,0)
  ;
  SendMessageA(pHVar2,0xd,6,(LPARAM)aCStack_18);
  iVar4 = lstrcmpA(aCStack_18,&stack0xffffffdc);
  if (iVar4 != 0) {
    SendMessageA(pHVar2,0xc,0,(LPARAM)&stack0xffffffdc);
  }
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return;
}


