/* Module: sftrans1.dll
   Function: FUN_004a5470
   Address: 004a5470
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_004a5470(int param_1)

{
  HWND pHVar1;
  HWND hWnd;
  uint uVar2;
  int iVar3;
  UINT UVar4;
  WPARAM WVar5;
  LPARAM LVar6;
  CHAR local_114 [260];
  int *local_10;
  HWND local_c;
  HWND local_8;
  
  local_10 = (int *)0x0;
  if ((undefined4 *)**(int **)(param_1 + 8) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)**(int **)(param_1 + 8))();
  }
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x414);
  local_c = pHVar1;
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x415);
  SendMessageA(pHVar1,0x60e,0,0);
  SendMessageA(local_c,0x60f,0,0x10000);
  SendMessageA(local_8,0x60e,0,0);
  SendMessageA(local_8,0x60f,0,0x10000);
  LVar6 = 0;
  WVar5 = 6;
  UVar4 = 0xc5;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x416);
  SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  LVar6 = 0;
  WVar5 = 6;
  UVar4 = 0xc5;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x417);
  SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  FUN_004a5310();
  (**(code **)(*local_10 + 0x3c))();
  pHVar1 = *(HWND *)(param_1 + 0x30);
  local_c = pHVar1;
  hWnd = GetDlgItem(pHVar1,0x5b3);
  SendMessageA(hWnd,0x600,0,0);
  GetDlgItemTextA(pHVar1,0x5b3,local_114,0x82);
  SendMessageA(hWnd,0x601,0xa029,0x555a6c);
  SendMessageA(hWnd,0x601,41000,0x555a74);
  uVar2 = lstrlenA("Sonic Foundry ");
  FUN_00551640();
  FUN_00551640();
  local_8 = (HWND)&stack0xfffffed4;
  lstrcpynA(&stack0xfffffed4,local_114,uVar2 + 1);
  pHVar1 = local_8;
  local_114[uVar2 - 0x18] = '\0';
  local_114[uVar2 - 0x18] = '\0';
  lstrcpynA((LPSTR)pHVar1,"Sonic Foundry ",uVar2 + 1);
  *(CHAR *)((int)local_8 + uVar2) = '\0';
  *(CHAR *)((int)local_8 + uVar2) = '\0';
  iVar3 = lstrcmpiA(&stack0xfffffed4,(LPCSTR)local_8);
  FUN_004c85d0(local_c,0x5b3,local_114 + (~-(uint)(iVar3 != 0) & uVar2));
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 8))(local_10);
  }
  return 1;
}


