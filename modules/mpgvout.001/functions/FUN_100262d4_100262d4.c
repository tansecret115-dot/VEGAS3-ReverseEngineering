/* Module: mpgvout.001
   Function: FUN_100262d4
   Address: 100262d4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100262d4(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double local_1c;
  double local_14 [2];
  
  iVar2 = *(int *)(param_1 + 0x368);
  iVar1 = *(int *)(param_1 + 0x36c);
  if (*(int *)(param_1 + 0x590) != 3) {
    iVar1 = iVar1 >> 1;
  }
  iVar3 = 0;
  if (*(int *)(param_1 + 0x590) == 2) {
    iVar3 = *(int *)(param_1 + 0x550);
  }
  FUN_10026bf4(iVar3 + *param_2,iVar3 + *param_3,*(int *)(param_1 + 0x568),iVar2,iVar1,&local_1c,
               local_14);
  dVar4 = log10(local_1c / local_14[0]);
  dVar4 = dVar4 * _DAT_100262c4;
  dVar5 = log10(_DAT_100262cc / local_14[0]);
  fprintf(DAT_10035734,"Y: variance=%4.4g, MSE=%3.3g (%3.3g dB), SNR=%3.3g dB\n",local_1c,
          local_14[0],dVar5 * _DAT_100262c4,dVar4);
  if (*(int *)(param_1 + 0x9c) != 3) {
    iVar2 = iVar2 >> 1;
    iVar3 = iVar3 >> 1;
  }
  if (*(int *)(param_1 + 0x9c) == 1) {
    iVar1 = iVar1 >> 1;
  }
  FUN_10026bf4(iVar3 + param_2[1],iVar3 + param_3[1],*(int *)(param_1 + 0x574),iVar2,iVar1,&local_1c
               ,local_14);
  dVar4 = log10(local_1c / local_14[0]);
  dVar4 = dVar4 * _DAT_100262c4;
  dVar5 = log10(_DAT_100262cc / local_14[0]);
  fprintf(DAT_10035734,"U: variance=%4.4g, MSE=%3.3g (%3.3g dB), SNR=%3.3g dB\n",local_1c,
          local_14[0],dVar5 * _DAT_100262c4,dVar4);
  FUN_10026bf4(iVar3 + param_2[2],iVar3 + param_3[2],*(int *)(param_1 + 0x574),iVar2,iVar1,&local_1c
               ,local_14);
  dVar4 = log10(local_1c / local_14[0]);
  dVar4 = dVar4 * _DAT_100262c4;
  dVar5 = log10(_DAT_100262cc / local_14[0]);
  fprintf(DAT_10035734,"V: variance=%4.4g, MSE=%3.3g (%3.3g dB), SNR=%3.3g dB\n",local_1c,
          local_14[0],dVar5 * _DAT_100262c4,dVar4);
  return;
}


