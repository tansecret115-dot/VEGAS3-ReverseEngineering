/* Module: sfs4rw.dll
   Function: FUN_00404d90
   Address: 00404d90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00404d90(HWND param_1,LPCSTR param_2)

{
  int iVar1;
  int *piVar2;
  int local_70;
  LPCSTR local_6c;
  undefined4 local_68;
  undefined4 local_64;
  LPCSTR local_60;
  undefined4 local_5c;
  undefined4 local_58;
  LPCSTR local_54;
  undefined4 local_50;
  undefined4 local_4c;
  LPCSTR local_48;
  undefined4 local_44;
  undefined4 local_40;
  LPCSTR local_3c;
  undefined4 local_38;
  undefined4 local_34;
  LPCSTR local_30;
  undefined4 local_2c;
  undefined4 local_28;
  LPCSTR local_24;
  undefined4 local_20;
  undefined4 local_1c;
  LPCSTR local_18;
  undefined4 local_14;
  HWND local_10;
  HWND local_c;
  HWND local_8;
  
  local_6c = param_2;
  local_60 = param_2 + 0x80;
  local_54 = param_2 + 799;
  local_48 = param_2 + 0x100;
  local_3c = param_2 + 0x180;
  local_38 = 0x7f;
  local_2c = 0x7f;
  local_30 = param_2 + 0x200;
  local_70 = 0x1b84;
  local_68 = 0x32;
  local_64 = 0xe3c;
  local_5c = 0x32;
  local_58 = 0x1b88;
  local_50 = 0x32;
  local_4c = 0x1b85;
  local_44 = 0x32;
  local_40 = 0x1b86;
  local_34 = 0x1b7c;
  local_28 = 0x1b87;
  local_24 = param_2 + 0x280;
  local_20 = 0x32;
  local_1c = 0x1b7a;
  local_18 = param_2 + 0x305;
  local_14 = 0x14;
  piVar2 = &local_70;
  local_c = (HWND)0x8;
  do {
    iVar1 = *piVar2;
    local_8 = GetDlgItem(param_1,iVar1);
    if (local_8 != (HWND)0x0) {
      SetDlgItemTextA(param_1,iVar1,(LPCSTR)piVar2[1]);
      SendMessageA(local_8,0xc5,piVar2[2],0);
    }
    piVar2 = piVar2 + 3;
    local_c = (HWND)((int)local_c + -1);
  } while (local_c != (HWND)0x0);
  local_10 = GetDlgItem(param_1,0x1b89);
  SendMessageA(local_10,0x14e,0,0);
  local_8 = (HWND)0x0;
  local_c = (HWND)&DAT_004a4884;
  do {
    FUN_0048b2e0();
    FUN_0048b2e0();
    lstrcpynA(&stack0xffffff84,param_2 + 0x300,6);
    lstrcpynA(&stack0xffffff84,(LPCSTR)local_c,6);
    iVar1 = lstrcmpA(&stack0xffffff84,&stack0xffffff84);
    if (iVar1 == 0) {
      SendMessageA(local_10,0x14e,(WPARAM)local_8,0);
    }
    local_c = (HWND)((int)local_c + 8);
    local_8 = (HWND)((int)local_8 + 1);
  } while (local_c < &DAT_004a4b14);
  local_c = GetDlgItem(param_1,0x1b8a);
  SendMessageA(local_c,0x14e,0,0);
  local_8 = (HWND)0x0;
  local_10 = (HWND)(param_2 + 0x31a);
  param_2 = &DAT_004a4b14;
  do {
    FUN_0048b2e0();
    FUN_0048b2e0();
    lstrcpynA(&stack0xffffff84,(LPCSTR)local_10,6);
    lstrcpynA(&stack0xffffff84,param_2,6);
    iVar1 = lstrcmpA(&stack0xffffff84,&stack0xffffff84);
    if (iVar1 == 0) {
      SendMessageA(local_c,0x14e,(WPARAM)local_8,0);
    }
    param_2 = param_2 + 8;
    local_8 = (HWND)((int)local_8 + 1);
  } while (param_2 < &DAT_004a52c4);
  CheckDlgButton(param_1,0xe3f,1);
  CheckDlgButton(param_1,0xe40,1);
  return;
}


