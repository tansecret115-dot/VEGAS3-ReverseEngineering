/* Module: sftrans1.dll
   Function: FUN_004af9a0
   Address: 004af9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004af9a0(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  HWND hWnd;
  HWND hWnd_00;
  LPARAM LVar3;
  int *unaff_ESI;
  int **ppiVar4;
  int *local_110 [68];
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_110[0] = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00554d90,local_110);
  }
  (**(code **)(*local_110[0] + 0x34))(local_110[0],(undefined4 *)(param_1 + 0x50),0x18);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),300);
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x30),0x12f);
  hWnd_00 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x136);
  LVar3 = ftol();
  SendMessageA(pHVar2,0x610,1,LVar3);
  LVar3 = ftol();
  SendMessageA(hWnd,0x610,1,LVar3);
  LVar3 = ftol();
  SendMessageA(hWnd_00,0x610,1,LVar3);
  FUN_004c6ae0(local_110,"%2.3f",*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
  ppiVar4 = local_110;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x12e);
  FUN_004c84a0(pHVar2,ppiVar4);
  FUN_004c6ae0(local_110,"%3.3f",*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
  ppiVar4 = local_110;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x130);
  FUN_004c84a0(pHVar2,ppiVar4);
  FUN_004c6ae0(local_110,"%1.3f",*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
  ppiVar4 = local_110;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x137);
  FUN_004c84a0(pHVar2,ppiVar4);
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return;
}


