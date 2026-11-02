/* Module: vegas30.exe
   Function: FUN_004b40d0
   Address: 004b40d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004b40d0(HWND param_1,undefined4 param_2,uint param_3,int param_4)

{
  LONG LVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  LVar1 = GetWindowLongA(param_1,8);
  switch(param_2) {
  case 0x4e:
    FUN_004b4020(param_1,param_4,LVar1);
    return 0;
  case 0x53:
    if (LVar1 != 0) {
      _SfHelp_ContextPopupHelp_24(0,param_1,0,*(undefined4 *)(param_4 + 8),&DAT_0063e6a8,0);
    }
    uVar2 = 1;
    break;
  case 0x110:
    LVar1 = *(LONG *)(param_4 + 0x1c);
    SetWindowLongA(param_1,8,LVar1);
    _SfSetEditCtrlFont_8(param_1,0);
    FUN_004b3640(param_1,LVar1);
    return 1;
  case 0x111:
    FUN_004b3700(param_1,param_3 & 0xffff,param_4,param_3 >> 0x10,LVar1);
    return 0;
  case 0x115:
    FUN_004b3ef0(param_1,param_3,param_4,LVar1);
    return 0;
  }
  return uVar2;
}


