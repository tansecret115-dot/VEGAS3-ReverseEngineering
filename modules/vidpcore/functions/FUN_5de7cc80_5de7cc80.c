/* Module: vidpcore.dll
   Function: FUN_5de7cc80
   Address: 5de7cc80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5de7cc80(int param_1)

{
  undefined4 *puVar1;
  HWND hWnd;
  uint uVar2;
  int iVar3;
  CHAR local_118 [260];
  HWND local_14;
  LPSTR local_10;
  int *local_c;
  HWND local_8;
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_c = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17b80,&local_c);
  }
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x443);
  SendMessageA(local_8,0x60e,0,0);
  SendMessageA(local_8,0x60f,0,100);
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x444);
  SendMessageA(local_8,0x60e,0,0);
  SendMessageA(local_8,0x60f,0,100);
  local_14 = *(HWND *)(param_1 + 0x30);
  hWnd = GetDlgItem(local_14,0x5b1);
  SendMessageA(hWnd,0x600,0,0);
  GetDlgItemTextA(local_14,0x5b1,local_118,0x82);
  SendMessageA(hWnd,0x601,0xa029,0x5df18d88);
  SendMessageA(hWnd,0x601,41000,0x5df18d90);
  uVar2 = lstrlenA("Sonic Foundry ");
  FUN_5df157d0();
  local_8 = (HWND)&stack0xfffffedc;
  FUN_5df157d0();
  local_10 = &stack0xfffffedc;
  lstrcpynA((LPSTR)local_8,local_118,uVar2 + 1);
  *(CHAR *)((int)local_8 + uVar2) = '\0';
  *(CHAR *)((int)local_8 + uVar2) = '\0';
  lstrcpynA(local_10,"Sonic Foundry ",uVar2 + 1);
  local_10[uVar2] = '\0';
  local_10[uVar2] = '\0';
  iVar3 = lstrcmpiA((LPCSTR)local_8,local_10);
  FUN_5deb6b40(local_14,0x5b1,local_118 + (~-(uint)(iVar3 != 0) & uVar2));
  FUN_5de7cb20();
  (**(code **)(*local_c + 0x3c))(local_c,*(undefined4 *)(param_1 + 0x30),0x7f00);
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  return 1;
}


