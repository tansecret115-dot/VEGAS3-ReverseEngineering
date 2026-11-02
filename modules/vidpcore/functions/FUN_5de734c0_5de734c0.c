/* Module: vidpcore.dll
   Function: FUN_5de734c0
   Address: 5de734c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5de734c0(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  WPARAM WVar3;
  uint uVar4;
  int iVar5;
  CHAR local_120 [260];
  HWND local_1c;
  HWND local_18;
  int *local_14;
  HWND local_10;
  HWND local_c;
  HWND local_8;
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_14 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17b30,&local_14);
  }
  local_c = GetDlgItem(*(HWND *)(param_1 + 0x30),0x41d);
  local_10 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x41f);
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x421);
  local_18 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x423);
  local_1c = GetDlgItem(*(HWND *)(param_1 + 0x30),0x425);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x427);
  WVar3 = SendMessageA(pHVar2,0x143,4,0x5df22ba4);
  SendMessageA(pHVar2,0x151,WVar3,4);
  WVar3 = SendMessageA(pHVar2,0x143,2,0x5df22ba0);
  SendMessageA(pHVar2,0x151,WVar3,2);
  WVar3 = SendMessageA(pHVar2,0x143,1,0x5df22b98);
  SendMessageA(pHVar2,0x151,WVar3,1);
  WVar3 = SendMessageA(pHVar2,0x143,0,0x5df22b90);
  SendMessageA(pHVar2,0x151,WVar3,0);
  WVar3 = SendMessageA(pHVar2,0x143,3,0x5df22b88);
  SendMessageA(pHVar2,0x151,WVar3,3);
  pHVar2 = local_c;
  SendMessageA(local_c,0x60e,0,0);
  SendMessageA(pHVar2,0x60f,0,1000);
  pHVar2 = local_10;
  SendMessageA(local_10,0x60e,0,0);
  SendMessageA(pHVar2,0x60f,0,1000);
  pHVar2 = local_8;
  SendMessageA(local_8,0x60e,0,0);
  SendMessageA(pHVar2,0x60f,0,1000);
  pHVar2 = local_18;
  SendMessageA(local_18,0x60e,0,0);
  SendMessageA(pHVar2,0x60f,0,1000);
  pHVar2 = local_1c;
  SendMessageA(local_1c,0x60e,0,0);
  SendMessageA(pHVar2,0x60f,0,1000);
  local_c = *(HWND *)(param_1 + 0x30);
  pHVar2 = GetDlgItem(local_c,0x5b1);
  SendMessageA(pHVar2,0x600,0,0);
  GetDlgItemTextA(local_c,0x5b1,local_120,0x82);
  SendMessageA(pHVar2,0x601,0xa029,0x5df18d88);
  SendMessageA(pHVar2,0x601,41000,0x5df18d90);
  uVar4 = lstrlenA("Sonic Foundry ");
  FUN_5df157d0();
  local_8 = (HWND)&stack0xfffffed4;
  FUN_5df157d0();
  local_10 = (HWND)&stack0xfffffed4;
  lstrcpynA((LPSTR)local_8,local_120,uVar4 + 1);
  *(CHAR *)((int)local_8 + uVar4) = '\0';
  *(CHAR *)((int)local_8 + uVar4) = '\0';
  lstrcpynA((LPSTR)local_10,"Sonic Foundry ",uVar4 + 1);
  *(CHAR *)((int)local_10 + uVar4) = '\0';
  *(CHAR *)((int)local_10 + uVar4) = '\0';
  iVar5 = lstrcmpiA((LPCSTR)local_8,(LPCSTR)local_10);
  FUN_5deb6b40(local_c,0x5b1,local_120 + (~-(uint)(iVar5 != 0) & uVar4));
  FUN_5de731c0();
  (**(code **)(*local_14 + 0x3c))(local_14,*(undefined4 *)(param_1 + 0x30),0x7f00);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(local_14);
  }
  return 1;
}


