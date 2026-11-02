/* Module: vegas30.exe
   Function: FUN_004554a0
   Address: 004554a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004554a0(int param_1)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  
  iVar3 = *(int *)(param_1 + 0xbc8);
  if ((*(int *)(param_1 + 0xbc8) != 0) || (iVar3 = DAT_0064b138, DAT_0064b138 != 0)) {
    uVar2 = FUN_005ba4b0(iVar3,0);
    fVar4 = (float10)FUN_005b8c00(iVar3,uVar2);
    dVar1 = (double)fVar4;
    iVar3 = FUN_004e4c90();
    if ((param_1 == iVar3) && (DAT_0064a534 != 0)) {
      dVar1 = *(double *)(param_1 + 0x28);
    }
    if ((float10)_DAT_00610fd8 < (float10)dVar1) {
      return (float10)_DAT_006105d0 / (float10)dVar1;
    }
  }
  return (float10)_DAT_006106d0;
}


