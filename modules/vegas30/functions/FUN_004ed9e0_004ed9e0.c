/* Module: vegas30.exe
   Function: FUN_004ed9e0
   Address: 004ed9e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ed9e0(HMENU param_1,UINT param_2)

{
  undefined4 uVar1;
  CHAR local_104 [260];
  
  if (DAT_00647c18 != 0) {
    if (DAT_00647c18 == 1) {
      uVar1 = 0x146c;
    }
    else if (DAT_00647c18 == 2) {
      uVar1 = 0x146d;
    }
    else {
      uVar1 = 0x146e;
    }
    _SfLoadString_16(DAT_00647204,uVar1,local_104,0x104);
    _SfStringReplaceChars_12(local_104,9,8);
    _SfStringReplaceChars_12(local_104,8,8);
    ModifyMenuA(param_1,param_2,0,param_2,local_104);
  }
  return;
}


