/* Module: 14_43260.dll
   Function: FUN_10003ee0
   Address: 10003ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 __thiscall FUN_10003ee0(int param_1,float param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  
  pfVar5 = (float *)(*(int *)(param_1 + 0xa1a + param_3 * 4) + -4);
  iVar2 = *(int *)(param_1 + 0xa1e + param_3 * 4) - (int)pfVar5;
  iVar2 = (iVar2 >> 2) - (iVar2 >> 0x1f);
  iVar3 = iVar2 >> 1;
  pfVar1 = pfVar5 + iVar3;
  iVar2 = iVar3 - (iVar2 >> 0x1f) >> 1;
  uVar4 = (int)pfVar1 - (int)pfVar5;
  pfVar6 = pfVar5;
  while ((uVar4 & 0xfffffffc) != 4) {
    if (*pfVar1 <= param_2) {
      pfVar6 = pfVar1;
    }
    pfVar1 = pfVar6 + iVar2;
    iVar2 = iVar2 / 2;
    uVar4 = (int)pfVar1 - (int)pfVar6;
  }
  **(uint **)(param_1 + 0x9a2) =
       ((int)pfVar1 - (int)pfVar5 >> 2) - ((int)pfVar1 - (int)pfVar5 >> 0x1f) >> 1 & 0xff;
  *(int *)(param_1 + 0x9a2) = *(int *)(param_1 + 0x9a2) + 4;
  return (float10)*pfVar1;
}


