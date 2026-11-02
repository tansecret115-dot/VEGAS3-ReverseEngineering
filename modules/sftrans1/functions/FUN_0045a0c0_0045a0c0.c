/* Module: sftrans1.dll
   Function: FUN_0045a0c0
   Address: 0045a0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0045a0c0(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  WPARAM WVar3;
  uint uVar4;
  int iVar5;
  LPARAM LVar6;
  CHAR local_118 [260];
  LPSTR local_14;
  LPSTR local_10;
  int *local_c;
  HWND local_8;
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_c = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00554c20,&local_c);
  }
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x44d);
  SendMessageA(local_8,0x60e,0,0);
  SendMessageA(local_8,0x60f,0,0xffff);
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x44f);
  SendMessageA(local_8,0x60e,0,0);
  SendMessageA(local_8,0x60f,0,0xffff);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x59f);
  LVar6 = 0;
  WVar3 = SendMessageA(pHVar2,0x143,0,0x55ca60);
  SendMessageA(pHVar2,0x151,WVar3,LVar6);
  LVar6 = 2;
  WVar3 = SendMessageA(pHVar2,0x143,0,0x55ca58);
  SendMessageA(pHVar2,0x151,WVar3,LVar6);
  LVar6 = 3;
  WVar3 = SendMessageA(pHVar2,0x143,0,0x55ca50);
  SendMessageA(pHVar2,0x151,WVar3,LVar6);
  LVar6 = 1;
  WVar3 = SendMessageA(pHVar2,0x143,0,0x55ca48);
  SendMessageA(pHVar2,0x151,WVar3,LVar6);
  SendMessageA(pHVar2,0x14e,0,0);
  local_8 = *(HWND *)(param_1 + 0x30);
  pHVar2 = GetDlgItem(local_8,0x5b3);
  SendMessageA(pHVar2,0x600,0,0);
  GetDlgItemTextA(local_8,0x5b3,local_118,0x82);
  SendMessageA(pHVar2,0x601,0xa029,0x555a6c);
  SendMessageA(pHVar2,0x601,41000,0x555a74);
  uVar4 = lstrlenA("Sonic Foundry ");
  FUN_00551640();
  local_10 = &stack0xfffffedc;
  FUN_00551640();
  local_14 = &stack0xfffffedc;
  lstrcpynA(local_10,local_118,uVar4 + 1);
  local_10[uVar4] = '\0';
  local_10[uVar4] = '\0';
  lstrcpynA(local_14,"Sonic Foundry ",uVar4 + 1);
  local_14[uVar4] = '\0';
  local_14[uVar4] = '\0';
  iVar5 = lstrcmpiA(local_10,local_14);
  FUN_004c85d0(local_8,0x5b3,local_118 + (~-(uint)(iVar5 != 0) & uVar4));
  FUN_00459f50();
  (**(code **)(*local_c + 0x3c))(local_c,*(undefined4 *)(param_1 + 0x30),1000);
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  return 1;
}


