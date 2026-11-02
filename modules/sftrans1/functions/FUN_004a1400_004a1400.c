/* Module: sftrans1.dll
   Function: FUN_004a1400
   Address: 004a1400
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_004a1400(int param_1)

{
  HWND pHVar1;
  uint uVar2;
  int iVar3;
  int *piStack_184;
  undefined *puStack_180;
  int **ppiStack_17c;
  CHAR local_16c [260];
  HWND local_68;
  HWND local_64;
  HWND local_60;
  HWND local_5c;
  HWND local_58;
  HWND local_54;
  HWND local_50;
  HWND local_4c;
  HWND local_48;
  HWND local_44;
  HWND local_40;
  HWND local_3c;
  int *local_38;
  HWND local_34;
  HWND local_30;
  HWND local_2c;
  HWND local_28;
  HWND local_24;
  HWND local_20;
  HWND local_1c;
  HWND local_18;
  HWND local_14;
  HWND local_10;
  HWND local_c;
  HWND local_8;
  
  piStack_184 = (int *)**(int **)(param_1 + 8);
  local_38 = (int *)0x0;
  if (piStack_184 != (int *)0x0) {
    ppiStack_17c = &local_38;
    puStack_180 = &DAT_00555130;
    (**(code **)*piStack_184)();
  }
  puStack_180 = *(undefined **)(param_1 + 0x30);
  ppiStack_17c = (int **)0x3e8;
  piStack_184 = local_38;
  (**(code **)(*local_38 + 0x14))();
  local_3c = GetDlgItem(*(HWND *)(param_1 + 0x30),0x710);
  local_68 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x712);
  local_40 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x711);
  local_64 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x713);
  local_60 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x714);
  local_5c = GetDlgItem(*(HWND *)(param_1 + 0x30),0x715);
  local_58 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x716);
  local_54 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x717);
  local_50 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x718);
  local_4c = GetDlgItem(*(HWND *)(param_1 + 0x30),0x719);
  local_48 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x71a);
  local_44 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x71b);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x71c);
  local_8 = pHVar1;
  local_c = GetDlgItem(*(HWND *)(param_1 + 0x30),0x71d);
  local_10 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x71e);
  local_34 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x71f);
  local_30 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x720);
  local_2c = GetDlgItem(*(HWND *)(param_1 + 0x30),0x721);
  local_28 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x722);
  local_24 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x723);
  local_20 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x724);
  local_1c = GetDlgItem(*(HWND *)(param_1 + 0x30),0x725);
  local_18 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x726);
  local_14 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x727);
  SendMessageA(pHVar1,0x622,0x91,0);
  SendMessageA(local_8,0x624,(WPARAM)local_3c,9);
  SendMessageA(local_8,0x60e,0,-0xe10);
  SendMessageA(local_8,0x60f,0,0xe10);
  SendMessageA(local_c,0x622,0x11,0);
  SendMessageA(local_c,0x624,(WPARAM)local_40,9);
  SendMessageA(local_c,0x60e,0,0);
  SendMessageA(local_c,0x60f,0,1000);
  SendMessageA(local_10,0x622,0x91,0);
  SendMessageA(local_10,0x624,(WPARAM)local_68,9);
  SendMessageA(local_10,0x60e,0,-10000);
  SendMessageA(local_10,0x60f,0,10000);
  SendMessageA(local_34,0x622,0x11,0);
  SendMessageA(local_34,0x624,(WPARAM)local_64,9);
  SendMessageA(local_34,0x60e,0,-1000);
  SendMessageA(local_34,0x60f,0,1000);
  SendMessageA(local_30,0x622,0x11,0);
  SendMessageA(local_30,0x624,(WPARAM)local_60,9);
  SendMessageA(local_30,0x60e,0,-1000);
  SendMessageA(local_30,0x60f,0,1000);
  SendMessageA(local_2c,0x622,0x11,0);
  SendMessageA(local_2c,0x624,(WPARAM)local_5c,9);
  SendMessageA(local_2c,0x60e,0,-1000);
  SendMessageA(local_2c,0x60f,0,1000);
  SendMessageA(local_28,0x622,0x11,0);
  SendMessageA(local_28,0x624,(WPARAM)local_58,9);
  SendMessageA(local_28,0x60e,0,-1000);
  SendMessageA(local_28,0x60f,0,1000);
  SendMessageA(local_24,0x622,0x11,0);
  SendMessageA(local_24,0x624,(WPARAM)local_54,9);
  SendMessageA(local_24,0x60e,0,-1000);
  SendMessageA(local_24,0x60f,0,1000);
  SendMessageA(local_20,0x622,0x11,0);
  SendMessageA(local_20,0x624,(WPARAM)local_50,9);
  SendMessageA(local_20,0x60e,0,-1000);
  SendMessageA(local_20,0x60f,0,1000);
  SendMessageA(local_1c,0x622,0x11,0);
  SendMessageA(local_1c,0x624,(WPARAM)local_4c,9);
  SendMessageA(local_1c,0x60e,0,-1000);
  SendMessageA(local_1c,0x60f,0,1000);
  SendMessageA(local_18,0x622,0x11,0);
  SendMessageA(local_18,0x624,(WPARAM)local_48,9);
  SendMessageA(local_18,0x60e,0,-1000);
  SendMessageA(local_18,0x60f,0,1000);
  SendMessageA(local_14,0x622,0x11,0);
  SendMessageA(local_14,0x624,(WPARAM)local_44,9);
  SendMessageA(local_14,0x60e,0,-1000);
  SendMessageA(local_14,0x60f,0,1000);
  local_c = *(HWND *)(param_1 + 0x30);
  pHVar1 = GetDlgItem(local_c,0x5b3);
  SendMessageA(pHVar1,0x600,0,0);
  GetDlgItemTextA(local_c,0x5b3,local_16c,0x82);
  SendMessageA(pHVar1,0x601,0xa029,0x555a6c);
  SendMessageA(pHVar1,0x601,41000,0x555a74);
  uVar2 = lstrlenA("Sonic Foundry ");
  FUN_00551640();
  local_8 = (HWND)&piStack_184;
  FUN_00551640();
  local_10 = (HWND)&piStack_184;
  lstrcpynA((LPSTR)local_8,local_16c,uVar2 + 1);
  *(CHAR *)((int)local_8 + uVar2) = '\0';
  *(CHAR *)((int)local_8 + uVar2) = '\0';
  lstrcpynA((LPSTR)local_10,"Sonic Foundry ",uVar2 + 1);
  *(CHAR *)((int)local_10 + uVar2) = '\0';
  *(CHAR *)((int)local_10 + uVar2) = '\0';
  iVar3 = lstrcmpiA((LPCSTR)local_8,(LPCSTR)local_10);
  FUN_004c85d0(local_c,0x5b3,local_16c + (~-(uint)(iVar3 != 0) & uVar2));
  FUN_004a19e0(0);
  if (local_38 != (int *)0x0) {
    (**(code **)(*local_38 + 8))(local_38);
  }
  return 0;
}


