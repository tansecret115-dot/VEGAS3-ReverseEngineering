/* Module: sftrans1.dll
   Function: FUN_0047daf0
   Address: 0047daf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0047daf0(int param_1)

{
  HIMAGELIST p_Var1;
  int iVar2;
  HWND pHVar3;
  LPRECT lpRect;
  undefined1 local_88 [12];
  int local_7c;
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
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined4 local_8;
  undefined4 local_4;
  
  local_58 = 0;
  local_6c = 0;
  local_54 = 0;
  local_44 = 0;
  local_68 = 0;
  local_40 = 0;
  local_70 = 4;
  local_5c = 4;
  local_48 = 4;
  local_34 = 4;
  local_30 = 0;
  local_20 = 4;
  local_14 = 4;
  local_c = 4;
  local_6f = 2;
  local_5b = 2;
  local_3c = 2;
  local_33 = 2;
  local_1f = 2;
  local_b = 2;
  local_2c = 0;
  local_1c = 0;
  local_8 = 0;
  local_78 = 0;
  local_74 = 0x9c49;
  local_6e = 0;
  local_6d = 0;
  local_64 = 1;
  local_60 = 0x9c4a;
  local_5a = 0;
  local_59 = 0;
  local_50 = 0;
  local_4c = 0;
  local_47 = 1;
  local_46 = 0;
  local_45 = 0;
  local_38 = 0x9c4b;
  local_32 = 0;
  local_31 = 0;
  local_28 = 3;
  local_24 = 0x9c4d;
  local_1e = 0;
  local_1d = 0;
  local_18 = 0;
  local_10 = 0x9c4c;
  local_a = 0;
  local_9 = 0;
  local_4 = 0;
  p_Var1 = ImageList_LoadImageA(DAT_00577240,(LPCSTR)0xdd,0x10,1,0xff000000,0,0x1000);
  iVar2 = FUN_0052d0d0(*(undefined4 *)(param_1 + 4),0x50010b4c,0,0xdd,&local_78,6,DAT_00577240,
                       p_Var1,0,0);
  *(int *)(param_1 + 0x38) = iVar2;
  if (iVar2 != 0) {
    lpRect = (LPRECT)local_88;
    pHVar3 = GetDlgItem(*(HWND *)(param_1 + 4),0x651);
    GetWindowRect(pHVar3,lpRect);
    ScreenToClient(*(HWND *)(param_1 + 4),(LPPOINT)local_88);
    ScreenToClient(*(HWND *)(param_1 + 4),(LPPOINT)(local_88 + 8));
    pHVar3 = GetDlgItem(*(HWND *)(param_1 + 4),0x651);
    DestroyWindow(pHVar3);
    SetWindowPos(*(HWND *)(param_1 + 0x4c),(HWND)0x0,local_88._0_4_,local_88._4_4_,
                 local_88._8_4_ - local_88._0_4_,local_7c - local_88._4_4_,0x54);
  }
  return;
}


