/* Module: sftrans1.dll
   Function: FUN_0045f890
   Address: 0045f890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0045f890(int param_1)

{
  undefined4 *puVar1;
  LPARAM LVar2;
  HWND pHVar3;
  WPARAM WVar4;
  uint uVar5;
  int iVar6;
  CHAR local_118 [260];
  LPSTR local_14;
  LPSTR local_10;
  int *local_c;
  HWND local_8;
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_c = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00554c80,&local_c);
  }
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x56e);
  SendMessageA(local_8,0x60e,0,0);
  SendMessageA(local_8,0x60f,0,0xffff);
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x570);
  SendMessageA(local_8,0x60e,0,0);
  SendMessageA(local_8,0x60f,0,0xffff);
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x568);
  SendMessageA(local_8,0x60e,0,0);
  SendMessageA(local_8,0x60f,0,10000);
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x574);
  SendMessageA(local_8,0x60e,0,0);
  LVar2 = ftol();
  SendMessageA(local_8,0x60f,0,LVar2);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5a5);
  LVar2 = 0;
  WVar4 = SendMessageA(pHVar3,0x143,0,0x55ca50);
  SendMessageA(pHVar3,0x151,WVar4,LVar2);
  LVar2 = 1;
  WVar4 = SendMessageA(pHVar3,0x143,0,0x55e6f4);
  SendMessageA(pHVar3,0x151,WVar4,LVar2);
  LVar2 = 2;
  WVar4 = SendMessageA(pHVar3,0x143,0,0x55ca48);
  SendMessageA(pHVar3,0x151,WVar4,LVar2);
  LVar2 = 3;
  WVar4 = SendMessageA(pHVar3,0x143,0,0x55e6ec);
  SendMessageA(pHVar3,0x151,WVar4,LVar2);
  SendMessageA(pHVar3,0x14e,0,0);
  local_8 = *(HWND *)(param_1 + 0x30);
  pHVar3 = GetDlgItem(local_8,0x5b3);
  SendMessageA(pHVar3,0x600,0,0);
  GetDlgItemTextA(local_8,0x5b3,local_118,0x82);
  SendMessageA(pHVar3,0x601,0xa029,0x555a6c);
  SendMessageA(pHVar3,0x601,41000,0x555a74);
  uVar5 = lstrlenA("Sonic Foundry ");
  FUN_00551640();
  local_10 = &stack0xfffffedc;
  FUN_00551640();
  local_14 = &stack0xfffffedc;
  lstrcpynA(local_10,local_118,uVar5 + 1);
  local_10[uVar5] = '\0';
  local_10[uVar5] = '\0';
  lstrcpynA(local_14,"Sonic Foundry ",uVar5 + 1);
  local_14[uVar5] = '\0';
  local_14[uVar5] = '\0';
  iVar6 = lstrcmpiA(local_10,local_14);
  FUN_004c85d0(local_8,0x5b3,local_118 + (~-(uint)(iVar6 != 0) & uVar5));
  FUN_0045f620();
  (**(code **)(*local_c + 0x3c))(local_c,*(undefined4 *)(param_1 + 0x30),1000);
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  return 1;
}


