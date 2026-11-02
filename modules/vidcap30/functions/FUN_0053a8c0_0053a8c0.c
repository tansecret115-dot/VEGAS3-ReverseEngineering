/* Module: vidcap30.exe
   Function: FUN_0053a8c0
   Address: 0053a8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0053a8c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_10 [16];
  
  iVar2 = 0;
  param_1[0xa2] = param_1[0x50];
  param_1[0xa3] = param_1[0x51];
  puVar3 = param_1;
  if (0 < (int)param_1[0x50]) {
    do {
      puVar1 = (undefined4 *)FUN_0053aa20(local_10,*puVar3,puVar3[1],puVar3[2],puVar3[3]);
      iVar2 = iVar2 + 1;
      puVar3[0x52] = *puVar1;
      puVar3[0x53] = puVar1[1];
      puVar3[0x54] = puVar1[2];
      puVar3[0x55] = puVar1[3];
      puVar3 = puVar3 + 4;
    } while (iVar2 < (int)param_1[0xa2]);
  }
  iVar2 = 0;
  if (0 < (int)param_1[0xa3]) {
    puVar3 = param_1 + 0x7a;
    do {
      puVar1 = (undefined4 *)
               FUN_0053aa20(local_10,puVar3[-0x52],puVar3[-0x51],puVar3[-0x50],puVar3[-0x4f]);
      iVar2 = iVar2 + 1;
      *puVar3 = *puVar1;
      puVar3[1] = puVar1[1];
      puVar3[2] = puVar1[2];
      puVar3[3] = puVar1[3];
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


