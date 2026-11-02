/* Module: aviplug.dll
   Function: FUN_5f9d1d50
   Address: 5f9d1d50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f9d1d50(undefined4 *param_1)

{
  double *pdVar1;
  int iVar2;
  undefined4 *puVar3;
  double local_10 [2];
  
  iVar2 = 0;
  param_1[0xa2] = param_1[0x50];
  param_1[0xa3] = param_1[0x51];
  puVar3 = param_1;
  if (0 < (int)param_1[0x50]) {
    do {
      pdVar1 = FUN_5f9d1eb0(local_10,*puVar3,puVar3[1],puVar3[2],puVar3[3]);
      iVar2 = iVar2 + 1;
      puVar3[0x52] = *(undefined4 *)pdVar1;
      puVar3[0x53] = *(undefined4 *)((int)pdVar1 + 4);
      puVar3[0x54] = *(undefined4 *)(pdVar1 + 1);
      puVar3[0x55] = *(undefined4 *)((int)pdVar1 + 0xc);
      puVar3 = puVar3 + 4;
    } while (iVar2 < (int)param_1[0xa2]);
  }
  iVar2 = 0;
  if (0 < (int)param_1[0xa3]) {
    puVar3 = param_1 + 0x7a;
    do {
      pdVar1 = FUN_5f9d1eb0(local_10,puVar3[-0x52],puVar3[-0x51],puVar3[-0x50],puVar3[-0x4f]);
      iVar2 = iVar2 + 1;
      *puVar3 = *(undefined4 *)pdVar1;
      puVar3[1] = *(undefined4 *)((int)pdVar1 + 4);
      puVar3[2] = *(undefined4 *)(pdVar1 + 1);
      puVar3[3] = *(undefined4 *)((int)pdVar1 + 0xc);
      puVar3 = puVar3 + 4;
    } while (iVar2 < (int)param_1[0xa3]);
  }
  if ((int)param_1[0xa3] < (int)param_1[0xa2]) {
    do {
      puVar3 = param_1 + param_1[0xa3] * 4 + 0x7a;
      *puVar3 = 0;
      puVar3[1] = 0xbff00000;
      puVar3[2] = 0;
      puVar3[3] = 0;
      iVar2 = param_1[0xa3];
      param_1[0xa3] = iVar2 + 1;
    } while (iVar2 + 1 < (int)param_1[0xa2]);
  }
  return;
}


