/* Module: vidcap30.exe
   Function: FUN_00416e80
   Address: 00416e80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00416e80(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  
  iVar1 = _SfSelfRegister_IsSupported_4(param_2);
  if (iVar1 == -0x7fffbfff) {
    uVar5 = _SfGetString_8(DAT_005ba2a0,0xb9);
    SfMsgBox(param_1,0x40,uVar5,param_2);
  }
  else {
    if (iVar1 != 0) {
      return 1;
    }
    pcVar6 = "Sonic Foundry Video Capture";
    uVar5 = param_2;
    uVar2 = _SfGetString_8(DAT_005ba2a0,0xb6);
    iVar3 = SfMsgBox(param_1,0x23,uVar2,uVar5,pcVar6);
    if (iVar3 != 2) {
      iVar4 = _SfSelfRegister_Register_8(param_2,iVar3 == 7);
      iVar1 = 0;
      if (iVar4 != 0) {
        uVar5 = _SfGetString_8(DAT_005ba2a0,(iVar3 == 7) + 0xb7);
        SfMsgBox(param_1,0x40,uVar5,param_2,iVar4);
        return 0;
      }
    }
  }
  return iVar1;
}


