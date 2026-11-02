/* Module: sftrans1.dll
   Function: FUN_00465b90
   Address: 00465b90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00465b90(int param_1)

{
  HWND pHVar1;
  int iVar2;
  WPARAM WVar3;
  HIMAGELIST p_Var4;
  LPRECT lpRect;
  int *piStack_1bc;
  undefined *puStack_1b8;
  int **ppiStack_1b4;
  CHAR local_1a4 [260];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  undefined1 local_81;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28 [12];
  int local_1c;
  LPSTR local_18;
  int *local_14;
  HIMAGELIST local_10;
  HWND local_c;
  HWND local_8;
  
  piStack_1bc = (int *)**(int **)(param_1 + 8);
  local_14 = (int *)0x0;
  if (piStack_1bc != (int *)0x0) {
    ppiStack_1b4 = &local_14;
    puStack_1b8 = &DAT_00555130;
    (**(code **)*piStack_1bc)();
  }
  puStack_1b8 = *(undefined **)(param_1 + 0x30);
  ppiStack_1b4 = (int **)0x3e8;
  piStack_1bc = local_14;
  (**(code **)(*local_14 + 0x14))();
  FUN_00465450();
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x573);
  SendMessageA(pHVar1,0x811,1,0);
  local_10 = *(HIMAGELIST *)(param_1 + 0x30);
  local_c = GetDlgItem((HWND)local_10,0x5b3);
  SendMessageA(local_c,0x600,0,0);
  GetDlgItemTextA((HWND)local_10,0x5b3,local_1a4,0x82);
  SendMessageA(local_c,0x601,0xa029,0x555a6c);
  SendMessageA(local_c,0x601,41000,0x555a74);
  local_8 = (HWND)lstrlenA("Sonic Foundry ");
  FUN_00551640();
  local_c = (HWND)&piStack_1bc;
  FUN_00551640();
  local_18 = (LPSTR)&piStack_1bc;
  lstrcpynA((LPSTR)local_c,local_1a4,(int)local_8 + 1);
  *(CHAR *)((int)local_c + (int)local_8) = '\0';
  *(CHAR *)((int)local_c + (int)local_8) = '\0';
  lstrcpynA(local_18,"Sonic Foundry ",(int)local_8 + 1);
  local_18[(int)local_8] = '\0';
  local_18[(int)local_8] = '\0';
  iVar2 = lstrcmpiA((LPCSTR)local_c,local_18);
  FUN_004c85d0(local_10,0x5b3,local_1a4 + (~-(uint)(iVar2 != 0) & (uint)local_8));
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x580);
  WVar3 = SendMessageA(local_8,0x143,0,0x560f24);
  SendMessageA(local_8,0x151,WVar3,0);
  WVar3 = SendMessageA(local_8,0x143,0,0x560f18);
  SendMessageA(local_8,0x151,WVar3,1);
  WVar3 = SendMessageA(local_8,0x143,0,0x560f0c);
  SendMessageA(local_8,0x151,WVar3,2);
  local_94 = 0;
  local_80 = 0;
  local_a0 = 0;
  local_9c = 0x9c43;
  local_98 = 4;
  local_97 = 0;
  local_96 = 0;
  local_95 = 1;
  local_90 = 0;
  local_8c = 1;
  local_88 = 0x9c44;
  local_84 = 4;
  local_83 = 0;
  local_82 = 0;
  local_81 = 0;
  local_7c = 0;
  local_78 = 2;
  local_6c = 0;
  local_58 = 0;
  local_70 = 4;
  local_5c = 4;
  local_50 = 4;
  local_48 = 4;
  local_34 = 4;
  local_68 = 0;
  local_54 = 0;
  local_44 = 0;
  local_30 = 0;
  local_74 = 0x9c45;
  local_6f = 0;
  local_6e = 0;
  local_6d = 0;
  local_64 = 3;
  local_60 = 0x9c46;
  local_5b = 0;
  local_5a = 0;
  local_59 = 0;
  local_4c = 0x9c47;
  local_47 = 0;
  local_46 = 0;
  local_45 = 0;
  local_40 = 0;
  local_3c = 5;
  local_38 = 0x9c48;
  local_33 = 0;
  local_32 = 0;
  local_31 = 0;
  local_2c = 0;
  local_10 = ImageList_LoadImageA(DAT_00577240,(LPCSTR)0xbc,0x10,1,0xff000000,0,0x1000);
  p_Var4 = ImageList_LoadImageA(DAT_00577240,(LPCSTR)0xbd,0x10,1,0xff000000,0,0x1000);
  FUN_0052d0d0(*(undefined4 *)(param_1 + 0x30),0x50000b68,0,0xbc,&local_a0,6,DAT_00577240,local_10,
               p_Var4,0);
  lpRect = (LPRECT)local_28;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5ab);
  GetWindowRect(pHVar1,lpRect);
  ScreenToClient(*(HWND *)(param_1 + 0x30),(LPPOINT)local_28);
  ScreenToClient(*(HWND *)(param_1 + 0x30),(LPPOINT)(local_28 + 8));
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5ab);
  DestroyWindow(pHVar1);
  SetWindowPos(*(HWND *)(param_1 + 0x1cc),(HWND)0x0,local_28._0_4_,local_28._4_4_,
               local_28._8_4_ - local_28._0_4_,local_1c - local_28._4_4_,0x54);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(local_14);
  }
  return 0;
}


