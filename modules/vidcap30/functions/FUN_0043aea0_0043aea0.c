/* Module: vidcap30.exe
   Function: FUN_0043aea0
   Address: 0043aea0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043aea0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = DAT_005bb838;
  FUN_0042ea80(DAT_005bb838);
  iVar2 = FUN_00424e80(param_1 + 0xd8,&local_8);
  if (-1 < iVar2) {
    FUN_0042e9c0(uVar1,local_8,local_4);
    FUN_0043adc0(param_1);
    _TrackbarInst_Message_16(*(undefined4 *)(param_1 + 0x13c8),0x610,1,local_8);
  }
  FUN_0043efc0(param_1);
  return iVar2;
}


