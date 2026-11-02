/* Module: vidcap30.exe
   Function: FUN_0045d0e0
   Address: 0045d0e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045d0e0(int param_1,HWND param_2)

{
  int iVar1;
  HWND hWnd;
  int local_84;
  int local_80;
  tagPOINT local_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined4 local_18;
  undefined4 local_14;
  tagRECT local_10;
  
  local_40 = 0;
  local_6c = 4;
  local_44 = 4;
  local_3c = 0;
  local_30 = 4;
  local_1c = 4;
  local_74 = 0x10;
  local_43 = 0x10;
  local_2f = 0x10;
  local_2c = 0;
  local_1b = 0x10;
  local_28 = 0;
  local_18 = 0;
  local_14 = 0;
  local_84 = 0;
  local_80 = 0;
  local_70 = 0x4ba;
  local_6b = 0x50;
  local_6a = 0;
  local_69 = 0;
  local_68 = 0;
  local_64 = 0xc560;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_57 = 1;
  local_56 = 0;
  local_55 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0xf;
  local_48 = 0x4bb;
  local_42 = 0;
  local_41 = 0;
  local_38 = 0x3b;
  local_34 = 0x4bc;
  local_2e = 0;
  local_2d = 0;
  local_24 = 0x3c;
  local_20 = 0x4bd;
  local_1a = 0;
  local_19 = 0;
  iVar1 = FUN_0045b610(param_2,0x4cf,DAT_005bb9a4,DAT_005bb9a8,0,&local_74,5,&local_84);
  *(int *)(param_1 + 0x70) = iVar1;
  if (iVar1 != 0) {
    hWnd = GetDlgItem(param_2,0x4d1);
    GetWindowRect(hWnd,&local_10);
    local_7c.x = local_10.right + -1;
    local_7c.y = local_10.top + -1;
    ScreenToClient(param_2,&local_7c);
    MoveWindow(*(HWND *)(param_1 + 0x70),local_7c.x - local_84,local_7c.y - local_80,
               local_7c.x - (local_7c.x - local_84),local_7c.y - (local_7c.y - local_80),1);
    ShowWindow(*(HWND *)(param_1 + 0x70),1);
  }
  return;
}


