/* Module: vegas30.exe
   Function: FUN_005631c0
   Address: 005631c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_005631c0(int param_1)

{
  LPCSTR lpString;
  HWND pHVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 local_60;
  undefined2 local_5e;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined2 local_4e;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  int *local_c;
  int *local_8;
  
  _SfWndCenter_16(*(undefined4 *)(param_1 + 4),0,0,0x8001);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0xc5eb);
  SendMessageA(pHVar1,0xf1,DAT_0064a7a4,0);
  GetWindowRect(*(HWND *)(param_1 + 4),(LPRECT)(param_1 + 0x28));
  CopyRect((LPRECT)(param_1 + 0x38),(LPRECT)(param_1 + 0x28));
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0xc5ea);
  *(HWND *)(param_1 + 0x1c) = pHVar1;
  local_10 = (undefined4 *)(param_1 + 0x20);
  *local_10 = 0;
  if (&stack0x00000000 == &DAT_00000008) {
    iVar3 = -0x7fffbffd;
  }
  else {
    local_8 = (int *)SendMessageA(*(HWND *)(param_1 + 0x1c),DAT_0064b58c,0,0);
    iVar3 = (-(uint)(local_8 != (int *)0x0) & 0x7fffbffb) + 0x80004005;
    if (-1 < iVar3) {
      iVar3 = (**(code **)*local_8)(local_8,&DAT_006335a8,local_10);
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
    }
  }
  if (-1 < iVar3) {
    local_8 = (int *)0x0;
    if (&stack0x00000000 != (undefined1 *)0xc) {
      local_c = (int *)SendMessageA(*(HWND *)(param_1 + 0x1c),DAT_0064b590,0,0);
      iVar3 = (-(uint)(local_c != (int *)0x0) & 0x7fffbffb) + 0x80004005;
      if (-1 < iVar3) {
        iVar3 = (**(code **)*local_c)(local_c,&DAT_0060f940,&local_8);
      }
      if (local_c != (int *)0x0) {
        (**(code **)(*local_c + 8))(local_c);
      }
      if (-1 < iVar3) {
        (**(code **)(*local_8 + 0x74))(local_8,0);
        (**(code **)(*local_8 + 8))(local_8);
        local_8 = (int *)0x0;
      }
    }
    lpString = *(LPCSTR *)(param_1 + 0x24);
    local_1c = 0;
    local_5c = 0;
    local_18 = 0;
    local_58 = 0;
    local_14 = 0;
    local_54 = 0;
    local_4c = 0;
    local_3c = 0;
    local_2c = 0;
    local_48 = 0;
    local_38 = 0;
    local_28 = 0;
    local_20 = 8;
    local_1e = 0;
    local_60 = 0;
    local_5e = 0;
    local_50 = 0;
    local_4e = 0;
    local_44 = 0;
    local_40 = 0;
    local_3e = 0;
    local_34 = 0;
    local_30 = 0;
    local_2e = 0;
    local_24 = 0;
    iVar3 = lstrlenA(lpString);
    FUN_0060ac30();
    local_c = (int *)&stack0xffffff94;
    MultiByteToWideChar(0,1,lpString,-1,(LPWSTR)&stack0xffffff94,iVar3 + 1);
    uVar2 = Ordinal_2(local_c);
    local_18 = uVar2;
    iVar3 = (**(code **)(*(int *)*local_10 + 0xd0))
                      ((int *)*local_10,&local_20,&local_60,&local_50,&local_40,&local_30);
    Ordinal_6(uVar2);
  }
  return (-1 < iVar3) - 1;
}


