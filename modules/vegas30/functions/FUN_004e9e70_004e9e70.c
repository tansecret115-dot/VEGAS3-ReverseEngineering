/* Module: vegas30.exe
   Function: FUN_004e9e70
   Address: 004e9e70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004e9e70(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_005b8630(param_1);
  iVar1 = FUN_005b4740();
  if (iVar1 == 0) {
    uVar2 = _SfGetString_8(DAT_00647204,0x10b);
    SfMsgBox(DAT_00647624,0x40,uVar2);
  }
  else {
    uVar2 = _SfGetString_8(DAT_00647204,0x10a);
    iVar1 = SfMsgBox(DAT_00647624,0x124,uVar2);
    if (iVar1 == 6) {
      uVar2 = FUN_005b3e60();
      return uVar2;
    }
  }
  return 0;
}


