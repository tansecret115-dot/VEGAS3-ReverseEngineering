/* Module: vegas30.exe
   Function: FUN_004eb2d0
   Address: 004eb2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004eb2d0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_0064b138;
  FUN_00422f00();
  iVar2 = FUN_005b85d0(iVar1);
  if (iVar2 == 0) {
    return 1;
  }
  do {
    uVar4 = 0x24;
    if (param_1 != 0) {
      uVar4 = 0x23;
    }
    iVar2 = iVar1 + 0xb8;
    uVar3 = _SfGetString_8(DAT_00647204,0x9f);
    iVar2 = SfMsgBox(DAT_00647624,uVar4,uVar3,iVar2);
    if (iVar2 != 6) {
      if (iVar2 == 7) {
        return 1;
      }
      return 0;
    }
    iVar2 = FUN_00532360(iVar1,0,0,0,0,0);
    if (iVar2 < 0) {
      return 0;
    }
    FUN_004e7610();
    iVar2 = FUN_004e7770();
  } while (iVar2 != 0);
  return 1;
}


