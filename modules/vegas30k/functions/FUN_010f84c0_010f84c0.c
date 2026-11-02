/* Module: vegas30k.dll
   Function: FUN_010f84c0
   Address: 010f84c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010f84c0(int param_1)

{
  double dVar1;
  undefined4 *puVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  int iVar6;
  double local_188 [2];
  undefined1 local_178 [16];
  double local_168 [22];
  double local_b8 [22];
  
  FUN_010f88a0(param_1 + 0x1e8,*(undefined4 *)(param_1 + 0x28c),local_b8);
  FUN_010f88a0(param_1 + 0x148,*(undefined4 *)(param_1 + 0x288),local_168);
  iVar6 = 0;
  puVar2 = (undefined4 *)
           FUN_010f86c0(local_188,local_b8,*(undefined4 *)(param_1 + 0x28c),local_168,
                        *(undefined4 *)(param_1 + 0x288),0,0x3ff00000,0,0);
  *(undefined4 *)(param_1 + 0x2a8) = *puVar2;
  local_188[0] = (*(double *)(param_1 + 0x2a0) + *(double *)(param_1 + 0x298)) * _DAT_011dbdb8;
  *(undefined4 *)(param_1 + 0x2ac) = puVar2[1];
  *(undefined4 *)(param_1 + 0x2b0) = puVar2[2];
  *(undefined4 *)(param_1 + 0x2b4) = puVar2[3];
  puVar2 = (undefined4 *)FUN_010f6360(local_188,local_188[0]);
  puVar2 = (undefined4 *)
           FUN_010f86c0(local_178,local_b8,*(undefined4 *)(param_1 + 0x28c),local_168,
                        *(undefined4 *)(param_1 + 0x288),*puVar2,puVar2[1],puVar2[2],puVar2[3]);
  *(undefined4 *)(param_1 + 0x2b8) = *puVar2;
  *(undefined4 *)(param_1 + 700) = puVar2[1];
  *(undefined4 *)(param_1 + 0x2c0) = puVar2[2];
  *(undefined4 *)(param_1 + 0x2c4) = puVar2[3];
  puVar2 = (undefined4 *)
           FUN_010f86c0(local_178,local_b8,*(undefined4 *)(param_1 + 0x28c),local_168,
                        *(undefined4 *)(param_1 + 0x288),0,0xbff00000,0,0);
  *(undefined4 *)(param_1 + 0x2c8) = *puVar2;
  *(undefined4 *)(param_1 + 0x2cc) = puVar2[1];
  *(undefined4 *)(param_1 + 0x2d0) = puVar2[2];
  *(undefined4 *)(param_1 + 0x2d4) = puVar2[3];
  iVar3 = 0;
  if (-1 < *(int *)(param_1 + 0x28c)) {
    pdVar5 = local_b8;
    pdVar4 = (double *)(param_1 + 0x308);
    do {
      dVar1 = *pdVar5;
      iVar3 = iVar3 + 1;
      pdVar5 = pdVar5 + 2;
      *pdVar4 = dVar1 / local_168[*(int *)(param_1 + 0x288) * 2];
      pdVar4 = pdVar4 + 1;
    } while (iVar3 <= *(int *)(param_1 + 0x28c));
  }
  iVar3 = *(int *)(param_1 + 0x288);
  if (-1 < iVar3) {
    pdVar5 = local_168;
    pdVar4 = (double *)(param_1 + 0x360);
    do {
      dVar1 = *pdVar5;
      iVar6 = iVar6 + 1;
      pdVar5 = pdVar5 + 2;
      *pdVar4 = -(dVar1 / local_168[iVar3 * 2]);
      iVar3 = *(int *)(param_1 + 0x288);
      pdVar4 = pdVar4 + 1;
    } while (iVar6 <= iVar3);
  }
  return;
}


