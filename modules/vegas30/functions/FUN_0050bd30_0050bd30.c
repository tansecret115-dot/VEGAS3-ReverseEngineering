/* Module: vegas30.exe
   Function: FUN_0050bd30
   Address: 0050bd30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0050bd30(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*param_1 == 1) {
    iVar1 = param_1[1];
    if ((*(byte *)(iVar1 + 0x148) & 1) == 0) {
      uVar2 = FUN_00522030(iVar1 + 0x144,iVar1,1);
    }
  }
  else {
    if (*param_1 != 2) {
      return 0x80070057;
    }
    iVar1 = param_1[1];
    if ((*(byte *)(iVar1 + 0x84) & 1) == 0) {
      uVar2 = FUN_00522010(iVar1 + 0x80,iVar1,1);
      return uVar2;
    }
  }
  return uVar2;
}


