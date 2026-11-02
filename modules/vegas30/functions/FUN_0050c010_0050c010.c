/* Module: vegas30.exe
   Function: FUN_0050c010
   Address: 0050c010
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0050c010(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar2 = DAT_0064b138;
  if (param_1 == 0) {
    return 0x80004005;
  }
  if ((*(byte *)(param_1 + 0xa8) & 4) == 0) {
    return 0;
  }
  if (param_2 == 0) {
    FUN_004eb2b0(DAT_0064b138);
    iVar1 = *(int *)(param_1 + 0x98);
    if (iVar1 != 0) {
      uVar4 = *(int *)(iVar1 + 0xa0) + 1;
      if (uVar4 < 2) {
        uVar4 = 1;
      }
      *(uint *)(iVar1 + 0xa0) = uVar4;
    }
  }
  if ((*(uint *)(*(int *)(param_1 + 0x98) + 4) & 0x1000) == 0) {
    uVar3 = FUN_004ea040(uVar2,0);
    uVar5 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x98) + 0x90) + 8);
  }
  else {
    uVar3 = FUN_004ea040(uVar2,0);
    uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x90);
  }
  FUN_005410b0(uVar2,uVar5,0);
  *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) & 0xfffffffb;
  return uVar3;
}


