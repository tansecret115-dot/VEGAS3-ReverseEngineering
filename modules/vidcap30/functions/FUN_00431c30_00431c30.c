/* Module: vidcap30.exe
   Function: FUN_00431c30
   Address: 00431c30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00431c30(HWND param_1,HWND param_2,undefined4 *param_3,HWND param_4,undefined4 param_5)

{
  LRESULT LVar1;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  HWND local_24;
  HWND local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((param_1 == (HWND)0x0) || (param_2 == (HWND)0x0)) {
    return 0;
  }
  local_2c = 0x2c;
  local_4 = 0;
  if (param_3 == (undefined4 *)0x0) {
    local_24 = GetParent(param_2);
    local_28 = 0x111;
    local_20 = param_2;
    param_3 = &local_3c;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
  }
  else {
    local_24 = param_2;
    local_28 = 0x100;
    local_20 = param_4;
  }
  LVar1 = SendMessageA(param_1,0x408,0,(LPARAM)&local_2c);
  local_1c = *param_3;
  local_14 = param_3[2];
  local_18 = param_3[1];
  local_10 = param_3[3];
  local_c = DAT_005ba298;
  local_8 = param_5;
  if (LVar1 != 0) {
    SendMessageA(param_1,0x409,0,(LPARAM)&local_2c);
    return 1;
  }
  SendMessageA(param_1,0x404,0,(LPARAM)&local_2c);
  return 1;
}


