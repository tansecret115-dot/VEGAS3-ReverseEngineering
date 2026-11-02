/* Module: vidpcore.dll
   Function: FUN_5de74f20
   Address: 5de74f20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5de74f20(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  HWND hWnd;
  WPARAM WVar3;
  uint uVar4;
  int iVar5;
  CHAR local_11c [260];
  HWND local_18;
  int *local_14;
  HWND local_10;
  HWND local_c;
  HWND local_8;
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_14 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17b40,&local_14);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x42d);
  local_18 = pHVar2;
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x42e);
  local_c = GetDlgItem(*(HWND *)(param_1 + 0x30),0x433);
  local_10 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x434);
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x30),0x431);
  SendMessageA(pHVar2,0x60e,0,0);
  SendMessageA(local_18,0x60f,0,1000);
  SendMessageA(local_8,0x60e,0,0);
  SendMessageA(local_8,0x60f,0,1000);
  SendMessageA(local_c,0x60e,0,0);
  SendMessageA(local_c,0x60f,0,1000);
  SendMessageA(local_10,0x60e,0,0);
  SendMessageA(local_10,0x60f,0,1000);
  WVar3 = SendMessageA(hWnd,0x143,0,0x5df23238);
  SendMessageA(hWnd,0x151,WVar3,1);
  WVar3 = SendMessageA(hWnd,0x143,0,0x5df22ba0);
  SendMessageA(hWnd,0x151,WVar3,2);
  WVar3 = SendMessageA(hWnd,0x143,0,0x5df22b98);
  SendMessageA(hWnd,0x151,WVar3,3);
  WVar3 = SendMessageA(hWnd,0x143,0,0x5df22b90);
  SendMessageA(hWnd,0x151,WVar3,4);
  WVar3 = SendMessageA(hWnd,0x143,0,0x5df22b88);
  SendMessageA(hWnd,0x151,WVar3,0);
  local_c = *(HWND *)(param_1 + 0x30);
  pHVar2 = GetDlgItem(local_c,0x5b1);
  SendMessageA(pHVar2,0x600,0,0);
  GetDlgItemTextA(local_c,0x5b1,local_11c,0x82);
  SendMessageA(pHVar2,0x601,0xa029,0x5df18d88);
  SendMessageA(pHVar2,0x601,41000,0x5df18d90);
  uVar4 = lstrlenA("Sonic Foundry ");
  FUN_5df157d0();
  local_8 = (HWND)&stack0xfffffed8;
  FUN_5df157d0();
  local_10 = (HWND)&stack0xfffffed8;
  lstrcpynA((LPSTR)local_8,local_11c,uVar4 + 1);
  *(CHAR *)((int)local_8 + uVar4) = '\0';
  *(CHAR *)((int)local_8 + uVar4) = '\0';
  lstrcpynA((LPSTR)local_10,"Sonic Foundry ",uVar4 + 1);
  *(CHAR *)((int)local_10 + uVar4) = '\0';
  *(CHAR *)((int)local_10 + uVar4) = '\0';
  iVar5 = lstrcmpiA((LPCSTR)local_8,(LPCSTR)local_10);
  FUN_5deb6b40(local_c,0x5b1,local_11c + (~-(uint)(iVar5 != 0) & uVar4));
  FUN_5de74cb0();
  (**(code **)(*local_14 + 0x3c))(local_14,*(undefined4 *)(param_1 + 0x30),0x7f00);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(local_14);
  }
  return 1;
}


