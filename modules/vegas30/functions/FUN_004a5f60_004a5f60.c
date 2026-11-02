/* Module: vegas30.exe
   Function: FUN_004a5f60
   Address: 004a5f60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004a5f60(HMENU param_1,UINT param_2,UINT param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CHAR local_104 [260];
  
  if (DAT_00647c18 != 0) {
    if (DAT_00647c18 == 1) {
      uVar1 = 0x4f32;
      uVar2 = 0x6e12;
    }
    else if (DAT_00647c18 == 2) {
      uVar1 = 0x4f33;
      uVar2 = 0x6e13;
    }
    else {
      uVar1 = 0x4f34;
      uVar2 = 0x6e14;
    }
    _SfLoadString_16(DAT_00647204,uVar1,local_104,0x104);
    _SfStringReplaceChars_12(local_104,9,8);
    _SfStringReplaceChars_12(local_104,8,8);
    ModifyMenuA(param_1,param_2,0,param_2,local_104);
    if (param_3 != 0) {
      _SfLoadString_16(DAT_00647204,uVar2,local_104,0x104);
      _SfStringReplaceChars_12(local_104,9,8);
      _SfStringReplaceChars_12(local_104,8,8);
      ModifyMenuA(param_1,param_3,0,param_3,local_104);
    }
  }
  return;
}


