/* Module: vidcap30.exe
   Function: FUN_0042e1e0
   Address: 0042e1e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042e1e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_005bb838;
  iVar1 = FUN_0042e530(DAT_005bb838);
  if (iVar1 != 0) {
    if ((DAT_005bb7b0 == 0) && (iVar1 = FUN_0042f230(iVar3), iVar1 != 0)) {
      return 1;
    }
    iVar4 = 6;
    iVar1 = FUN_0042f230(iVar3);
    if (iVar1 != 0) {
      iVar1 = iVar3 + 0xbc;
      uVar2 = _SfGetString_8(DAT_005ba2a0,0x105);
      iVar4 = SfMsgBox(DAT_005ba4bc,0x24 - (uint)(param_1 != 0),uVar2,iVar1);
    }
    if (iVar4 == 6) {
      iVar3 = FUN_004514b0(iVar3,0,0,0,0,0);
      if (iVar3 < 0) {
        return 0;
      }
      FUN_00416c90();
    }
    else if (iVar4 != 7) {
      return 0;
    }
  }
  return 1;
}


