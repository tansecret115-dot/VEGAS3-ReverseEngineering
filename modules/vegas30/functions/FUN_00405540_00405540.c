/* Module: vegas30.exe
   Function: FUN_00405540
   Address: 00405540
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00405540(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_200 [512];
  
  if (param_1 == 0) {
    param_1 = 0x6e0c;
  }
  uVar1 = _SfGetString_8(DAT_00647204,param_1);
  uVar2 = _SfGetString_8(DAT_00647204,0x6e11);
  SfPrintF(local_200,uVar2,uVar1);
  uVar2 = 0x24;
  uVar1 = _SfGetString_8(DAT_00647204,0x6e0d);
  iVar3 = _SfMessageBox_16(DAT_00647624,local_200,uVar1,uVar2);
  if (iVar3 == 6) {
    if (DAT_0064b578 != 0) {
      FUN_0057a990(DAT_00647624,0x15);
    }
    return 1;
  }
  return 0;
}


