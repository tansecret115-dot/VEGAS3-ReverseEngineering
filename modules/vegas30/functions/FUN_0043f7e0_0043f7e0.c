/* Module: vegas30.exe
   Function: FUN_0043f7e0
   Address: 0043f7e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043f7e0(HWND param_1,undefined4 *param_2,int param_3)

{
  HWND pHVar1;
  LRESULT LVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  CHAR local_78 [20];
  undefined4 local_64 [15];
  uint local_28;
  
  switch(param_3) {
  case 0x3fe:
    GetDlgItemTextA(param_1,param_3,local_78,0x14);
    uVar5 = _SfTextToDWordToken_8(local_78,0);
    param_2[0x1e] = uVar5;
    if (uVar5 == 0) {
      uVar5 = 1;
    }
    else if (10000 < uVar5) {
      uVar5 = 10000;
    }
    param_2[0x1e] = uVar5;
    FUN_0043f4f0(param_1,param_2,param_3);
    return 1;
  default:
    return 0;
  case 0x400:
  case 0x401:
  case 0x402:
    break;
  case 0x403:
    pHVar1 = GetDlgItem(param_1,param_3);
    LVar2 = SendMessageA(pHVar1,0xf0,0,0);
    param_2[0x22] = LVar2;
    return 1;
  case 0x408:
    pHVar1 = GetDlgItem(param_1,param_3);
    LVar2 = SendMessageA(pHVar1,0x147,0,0);
    if (LVar2 == -1) {
      LVar2 = 0;
    }
    uVar3 = FUN_0043f2f0(pHVar1,LVar2);
    param_2[0x1f] = uVar3;
    return 1;
  }
  local_64[0] = 100;
  cdr_GetDeviceCaps((HSFCD__ *)*param_2,(cdrcaps_tag *)local_64);
  if (((local_28 & 0x400000) == 0) ||
     (iVar4 = _SfDlgWhichRadioButton_16(param_1,0x400,0x402,0x402), iVar4 == 0x400)) {
    param_2[0x20] = 0;
  }
  else {
    param_2[0x20] = 1;
    if (iVar4 == 0x401) {
      param_2[0x21] = 1;
      return 1;
    }
  }
  param_2[0x21] = 0;
  return 1;
}


