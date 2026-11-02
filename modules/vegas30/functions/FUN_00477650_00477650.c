/* Module: vegas30.exe
   Function: FUN_00477650
   Address: 00477650
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00477650(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x218) + 0x2c);
  iVar2 = iVar1 - *(int *)(*(int *)(param_1 + 0x218) + 0x24);
  if (iVar2 == 0) {
    return (float10)_DAT_00610fd8;
  }
  fVar3 = (float10)((iVar1 - param_2) + -2) * ((float10)_DAT_006106d0 / (float10)(iVar2 + -2));
  if (fVar3 < (float10)_DAT_00610fd8) {
    return (float10)_DAT_00610fd8;
  }
  if ((float10)_DAT_006106d0 < fVar3) {
    fVar3 = (float10)_DAT_006106d0;
  }
  return fVar3;
}


