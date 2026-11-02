/* Module: vegas30.exe
   Function: FUN_004eb380
   Address: 004eb380
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004eb380(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar1 = _SfSelfRegister_IsSupported_4(param_2);
  if (iVar1 == -0x7fffbfff) {
    uVar6 = _SfGetString_8(DAT_00647204,0x30);
    SfMsgBox(param_1,0x40,uVar6,param_2);
  }
  else {
    if (iVar1 != 0) {
      return 1;
    }
    uVar2 = FUN_0043cf70(0);
    uVar6 = param_2;
    uVar3 = _SfGetString_8(DAT_00647204,0x2b);
    iVar4 = SfMsgBox(param_1,0x23,uVar3,uVar6,uVar2);
    if (iVar4 != 2) {
      iVar5 = _SfSelfRegister_Register_8(param_2,iVar4 == 7);
      iVar1 = 0;
      if (iVar5 != 0) {
        uVar6 = _SfGetString_8(DAT_00647204,(iVar4 == 7) + '.');
        SfMsgBox(param_1,0x40,uVar6,param_2,iVar5);
        return 0;
      }
    }
  }
  return iVar1;
}


