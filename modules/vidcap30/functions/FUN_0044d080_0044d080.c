/* Module: vidcap30.exe
   Function: FUN_0044d080
   Address: 0044d080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044d080(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_80 [128];
  
  iVar1 = FUN_0044c6a0(param_2);
  iVar4 = 0;
  pcVar2 = (char *)_SfPrepareName_12(param_3,local_80,0x80);
  if (iVar1 != 0) {
    iVar4 = FUN_0045f420(param_1,*(undefined4 *)(iVar1 + 4),pcVar2,0);
  }
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    if ((iVar4 != 0) && (iVar4 != iVar1)) {
      uVar3 = _SfGetString_8(DAT_005ba2a0,0xc518);
      SfMsgBox(DAT_005ba4bc,0x10,uVar3,pcVar2);
      return 0x3e3;
    }
    iVar4 = FUN_0045b320(pcVar2);
    if (iVar4 == 0) {
      pcVar2 = "\\ / : * ? < > | \"";
      uVar3 = _SfGetString_8(DAT_005ba2a0,0xc519);
      SfMsgBox(DAT_005ba4bc,0x10,uVar3,pcVar2);
      return 0x3e3;
    }
    uVar3 = FUN_0045f1b0(param_1,iVar1,pcVar2,0);
    return uVar3;
  }
  uVar3 = _SfGetString_8(DAT_005ba2a0,0xc527);
  SfMsgBox(DAT_005ba4bc,0x10,uVar3);
  return 0x3e3;
}


