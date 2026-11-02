/* Module: vidcap30.exe
   Function: FUN_00430860
   Address: 00430860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00430860(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,int param_9
            ,int param_10)

{
  undefined4 uVar1;
  
  param_1[0x26] = 0;
  if (param_9 != 0) {
    uVar1 = _SfGetUIFont_4(param_9);
    param_1[0x26] = uVar1;
  }
  param_1[0x1e] = param_2;
  if (param_2 == 0) {
    param_1[0x1f] = DAT_005bb9a4;
    param_1[0x20] = DAT_005bb9a8;
    param_1[0x21] = DAT_005bb9ac;
    param_1[0x22] = 0;
    param_1[0x23] = DAT_005bb998;
    param_1[0x24] = DAT_005bb99c;
    param_1[0x25] = DAT_005bb9a0;
  }
  else {
    param_1[0x1f] = param_3;
    param_1[0x20] = param_4;
    param_1[0x22] = param_6;
    param_1[0x21] = param_5;
    param_1[0x23] = param_7;
    param_1[0x24] = *param_8;
    param_1[0x25] = param_8[1];
  }
  param_1[0x27] = &LAB_00430960;
  if (param_10 != 0) {
    param_1[0x27] = param_10;
  }
  if (param_1[0xb] != param_1[9] && -1 < (int)(param_1[0xb] - param_1[9])) {
    InvalidateRect((HWND)*param_1,(RECT *)(param_1 + 9),0);
  }
  return 1;
}


