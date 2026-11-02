/* Module: vidpcore.dll
   Function: FUN_5de6c860
   Address: 5de6c860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5de6c860(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  uint uVar3;
  int iVar4;
  CHAR local_118 [260];
  int *local_14;
  HWND local_10;
  HWND local_c;
  HWND local_8;
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_14 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17ac0,&local_14);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x3f9);
  local_10 = pHVar2;
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x3f8);
  local_c = GetDlgItem(*(HWND *)(param_1 + 0x30),0x526);
  SendMessageA(pHVar2,0x60e,0,-100);
  SendMessageA(local_10,0x60f,0,100);
  SendMessageA(local_8,0x60e,0,-100);
  SendMessageA(local_8,0x60f,0,100);
  SendMessageA(local_c,0x60e,0,0);
  SendMessageA(local_c,0x60f,0,100);
  local_10 = *(HWND *)(param_1 + 0x30);
  pHVar2 = GetDlgItem(local_10,0x5b1);
  SendMessageA(pHVar2,0x600,0,0);
  GetDlgItemTextA(local_10,0x5b1,local_118,0x82);
  SendMessageA(pHVar2,0x601,0xa029,0x5df18d88);
  SendMessageA(pHVar2,0x601,41000,0x5df18d90);
  uVar3 = lstrlenA("Sonic Foundry ");
  FUN_5df157d0();
  local_8 = (HWND)&stack0xfffffedc;
  FUN_5df157d0();
  local_c = (HWND)&stack0xfffffedc;
  lstrcpynA((LPSTR)local_8,local_118,uVar3 + 1);
  *(CHAR *)((int)local_8 + uVar3) = '\0';
  *(CHAR *)((int)local_8 + uVar3) = '\0';
  lstrcpynA((LPSTR)local_c,"Sonic Foundry ",uVar3 + 1);
  *(CHAR *)((int)local_c + uVar3) = '\0';
  *(CHAR *)((int)local_c + uVar3) = '\0';
  iVar4 = lstrcmpiA((LPCSTR)local_8,(LPCSTR)local_c);
  FUN_5deb6b40(local_10,0x5b1,local_118 + (~-(uint)(iVar4 != 0) & uVar3));
  FUN_5de6c690();
  (**(code **)(*local_14 + 0x3c))(local_14,*(undefined4 *)(param_1 + 0x30),0x7f00);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(local_14);
  }
  return 1;
}


