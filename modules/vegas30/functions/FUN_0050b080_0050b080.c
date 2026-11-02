/* Module: vegas30.exe
   Function: FUN_0050b080
   Address: 0050b080
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0050b080(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 *param_4,int param_5
                 ,undefined4 param_6,undefined4 param_7,double param_8)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_3 == 0) {
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      puVar3 = param_4;
      puVar4 = param_1;
      for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      param_1[1] = param_6;
      param_1[2] = param_7;
      FUN_005a69e0(param_1 + 6,0,0,0,&LAB_0050af90,&LAB_0050afa0,&LAB_0050afe0,param_2,param_6,
                   param_7);
      param_1[0x1d] =
           (*(float *)(param_5 + 0x74) - (float)param_4[0x1d]) * (float)param_8 +
           (float)param_4[0x1d];
      param_1[0x1e] =
           (*(float *)(param_5 + 0x78) - (float)param_4[0x1e]) * (float)param_8 +
           (float)param_4[0x1e];
    }
  }
  else if (param_3 == 1) {
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      fVar1 = (float)param_8;
      puVar3 = param_4;
      puVar4 = param_1;
      for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      param_1[1] = param_6;
      param_1[2] = param_7;
      param_1[0x13] =
           (*(float *)(param_5 + 0x4c) - (float)param_4[0x13]) * fVar1 + (float)param_4[0x13];
      param_1[0x14] =
           (*(float *)(param_5 + 0x50) - (float)param_4[0x14]) * fVar1 + (float)param_4[0x14];
      param_1[0x15] =
           (*(float *)(param_5 + 0x54) - (float)param_4[0x15]) * fVar1 + (float)param_4[0x15];
      param_1[0x16] =
           (*(float *)(param_5 + 0x58) - (float)param_4[0x16]) * fVar1 + (float)param_4[0x16];
      param_1[0x17] =
           (*(float *)(param_5 + 0x5c) - (float)param_4[0x17]) * fVar1 + (float)param_4[0x17];
      param_1[0x1a] =
           (*(float *)(param_5 + 0x68) - (float)param_4[0x1a]) * fVar1 + (float)param_4[0x1a];
      param_1[0x19] =
           (*(float *)(param_5 + 100) - (float)param_4[0x19]) * fVar1 + (float)param_4[0x19];
      param_1[0x18] =
           (*(float *)(param_5 + 0x60) - (float)param_4[0x18]) * fVar1 + (float)param_4[0x18];
      param_1[0x1b] =
           (*(float *)(param_5 + 0x6c) - (float)param_4[0x1b]) * fVar1 + (float)param_4[0x1b];
      param_1[0x1d] =
           (*(float *)(param_5 + 0x74) - (float)param_4[0x1d]) * fVar1 + (float)param_4[0x1d];
      param_1[0x1c] =
           (*(float *)(param_5 + 0x70) - (float)param_4[0x1c]) * fVar1 + (float)param_4[0x1c];
      return;
    }
  }
  else if (((param_3 == 2) && (param_4 != (undefined4 *)0x0)) && (param_5 != 0)) {
    fVar1 = (float)param_8;
    puVar3 = param_4;
    puVar4 = param_1;
    for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    param_1[1] = param_6;
    param_1[2] = param_7;
    param_1[6] = (*(float *)(param_5 + 0x18) - (float)param_4[6]) * fVar1 + (float)param_4[6];
    param_1[7] = (*(float *)(param_5 + 0x1c) - (float)param_4[7]) * fVar1 + (float)param_4[7];
    param_1[8] = (*(float *)(param_5 + 0x20) - (float)param_4[8]) * fVar1 + (float)param_4[8];
    param_1[9] = (*(float *)(param_5 + 0x24) - (float)param_4[9]) * fVar1 + (float)param_4[9];
    param_1[10] = (*(float *)(param_5 + 0x28) - (float)param_4[10]) * fVar1 + (float)param_4[10];
    param_1[0xd] = (*(float *)(param_5 + 0x34) - (float)param_4[0xd]) * fVar1 + (float)param_4[0xd];
    param_1[0xc] = (*(float *)(param_5 + 0x30) - (float)param_4[0xc]) * fVar1 + (float)param_4[0xc];
    param_1[0xb] = (*(float *)(param_5 + 0x2c) - (float)param_4[0xb]) * fVar1 + (float)param_4[0xb];
    param_1[0xe] = (*(float *)(param_5 + 0x38) - (float)param_4[0xe]) * fVar1 + (float)param_4[0xe];
    param_1[0x10] =
         (*(float *)(param_5 + 0x40) - (float)param_4[0x10]) * fVar1 + (float)param_4[0x10];
    param_1[0xf] = (*(float *)(param_5 + 0x3c) - (float)param_4[0xf]) * fVar1 + (float)param_4[0xf];
    return;
  }
  return;
}


