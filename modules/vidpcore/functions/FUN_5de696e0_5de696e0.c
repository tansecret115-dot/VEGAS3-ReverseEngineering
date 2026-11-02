/* Module: vidpcore.dll
   Function: FUN_5de696e0
   Address: 5de696e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5de696e0(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  LPARAM LVar3;
  uint uVar4;
  int iVar5;
  CHAR local_118 [260];
  HWND local_14;
  LPSTR local_10;
  int *local_c;
  HWND local_8;
  
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xc9);
  SendMessageA(local_8,0x60e,0,0);
  SendMessageA(local_8,0x60f,0,1000);
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xca);
  SendMessageA(local_8,0x60e,0,0);
  SendMessageA(local_8,0x60f,0,1000);
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xcb);
  SendMessageA(local_8,0x60e,0,0);
  SendMessageA(local_8,0x60f,0,1000);
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xcd);
  SendMessageA(local_8,0x60e,0,0);
  SendMessageA(local_8,0x60f,0,1000);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x567);
  SendMessageA(pHVar2,0xc5,5,0);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x568);
  SendMessageA(pHVar2,0xc5,5,0);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x569);
  SendMessageA(pHVar2,0xc5,5,0);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x56a);
  SendMessageA(pHVar2,0xc5,5,0);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xcc);
  LVar3 = FUN_5deb7ce0(DAT_5df42778,0x4fb);
  SendMessageA(pHVar2,0x143,0,LVar3);
  LVar3 = FUN_5deb7ce0(DAT_5df42778,0x4fc);
  SendMessageA(pHVar2,0x143,0,LVar3);
  LVar3 = FUN_5deb7ce0(DAT_5df42778,0x4fd);
  SendMessageA(pHVar2,0x143,0,LVar3);
  LVar3 = FUN_5deb7ce0(DAT_5df42778,0x4fe);
  SendMessageA(pHVar2,0x143,0,LVar3);
  LVar3 = FUN_5deb7ce0(DAT_5df42778,0x4ff);
  SendMessageA(pHVar2,0x143,0,LVar3);
  LVar3 = FUN_5deb7ce0(DAT_5df42778,0x500);
  SendMessageA(pHVar2,0x143,0,LVar3);
  LVar3 = FUN_5deb7ce0(DAT_5df42778,0x501);
  SendMessageA(pHVar2,0x143,0,LVar3);
  LVar3 = FUN_5deb7ce0(DAT_5df42778,0x502);
  SendMessageA(pHVar2,0x143,0,LVar3);
  LVar3 = FUN_5deb7ce0(DAT_5df42778,0x503);
  SendMessageA(pHVar2,0x143,0,LVar3);
  LVar3 = FUN_5deb7ce0(DAT_5df42778,0x504);
  SendMessageA(pHVar2,0x143,0,LVar3);
  local_14 = *(HWND *)(param_1 + 0x30);
  pHVar2 = GetDlgItem(local_14,0x5b1);
  SendMessageA(pHVar2,0x600,0,0);
  GetDlgItemTextA(local_14,0x5b1,local_118,0x82);
  SendMessageA(pHVar2,0x601,0xa029,0x5df18d88);
  SendMessageA(pHVar2,0x601,41000,0x5df18d90);
  uVar4 = lstrlenA("Sonic Foundry ");
  FUN_5df157d0();
  local_8 = (HWND)&stack0xfffffedc;
  FUN_5df157d0();
  local_10 = &stack0xfffffedc;
  lstrcpynA((LPSTR)local_8,local_118,uVar4 + 1);
  *(CHAR *)((int)local_8 + uVar4) = '\0';
  *(CHAR *)((int)local_8 + uVar4) = '\0';
  lstrcpynA(local_10,"Sonic Foundry ",uVar4 + 1);
  local_10[uVar4] = '\0';
  local_10[uVar4] = '\0';
  iVar5 = lstrcmpiA((LPCSTR)local_8,local_10);
  FUN_5deb6b40(local_14,0x5b1,local_118 + (~-(uint)(iVar5 != 0) & uVar4));
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_c = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df18100,&local_c);
  }
  (**(code **)(*local_c + 0x14))(local_c,*(undefined4 *)(param_1 + 0x30),0x7f00);
  FUN_5de69420();
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  return 0;
}


