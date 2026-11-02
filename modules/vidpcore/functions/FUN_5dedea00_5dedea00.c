/* Module: vidpcore.dll
   Function: FUN_5dedea00
   Address: 5dedea00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5dedea00(int param_1,int param_2,int param_3)

{
  float *pfVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  int iVar4;
  
  pfVar1 = *(float **)(param_1 + 0xc);
  if (*(int *)(*(int *)(param_1 + 4) + 0xb0) == 0x1c) {
    if (param_3 != 0) {
      puVar2 = (undefined1 *)(param_2 + 2);
      iVar4 = param_3;
      do {
        *(undefined1 *)pfVar1 = puVar2[-2];
        *(undefined1 *)((int)pfVar1 + 1) = puVar2[-1];
        *(undefined1 *)((int)pfVar1 + 2) = *puVar2;
        *(undefined1 *)((int)pfVar1 + 3) = puVar2[1];
        pfVar1 = pfVar1 + 1;
        iVar4 = iVar4 + -1;
        puVar2 = puVar2 + 4;
      } while (iVar4 != 0);
    }
  }
  else if (param_3 != 0) {
    pbVar3 = (byte *)(param_2 + 2);
    iVar4 = param_3;
    do {
      *pfVar1 = (float)pbVar3[-2] * _DAT_5df2bd28;
      pfVar1[1] = (float)pbVar3[-1] * _DAT_5df2bd28;
      iVar4 = iVar4 + -1;
      pfVar1[2] = (float)*pbVar3 * _DAT_5df2bd28;
      pfVar1[3] = (float)pbVar3[1] * _DAT_5df2bd28;
      pfVar1 = pfVar1 + 4;
      pbVar3 = pbVar3 + 4;
    } while (iVar4 != 0);
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_3;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x28) * param_3;
  return;
}


