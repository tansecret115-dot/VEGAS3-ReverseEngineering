/* Module: mp3plug.dll
   Function: FUN_5f6c3d70
   Address: 5f6c3d70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f6c3d70(int param_1)

{
  double dVar1;
  double *pdVar2;
  undefined4 *puVar3;
  int iVar4;
  double *pdVar5;
  int iVar6;
  double local_188 [2];
  double local_178 [2];
  double local_168 [22];
  double local_b8 [22];
  
  FUN_5f6c4150((double *)(param_1 + 0x1e8),*(int *)(param_1 + 0x28c),local_b8);
  FUN_5f6c4150((double *)(param_1 + 0x148),*(int *)(param_1 + 0x288),local_168);
  iVar6 = 0;
  pdVar2 = FUN_5f6c3f70(local_188,(int)local_b8,*(int *)(param_1 + 0x28c),(int)local_168,
                        *(int *)(param_1 + 0x288),0,0x3ff00000,0,0);
  *(undefined4 *)(param_1 + 0x2a8) = *(undefined4 *)pdVar2;
  local_188[0] = (*(double *)(param_1 + 0x2a0) + *(double *)(param_1 + 0x298)) * _DAT_5f734a88;
  *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)((int)pdVar2 + 4);
  *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(pdVar2 + 1);
  *(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)((int)pdVar2 + 0xc);
  puVar3 = (undefined4 *)FUN_5f6c1c10(local_188,local_188[0]);
  pdVar2 = FUN_5f6c3f70(local_178,(int)local_b8,*(int *)(param_1 + 0x28c),(int)local_168,
                        *(int *)(param_1 + 0x288),*puVar3,puVar3[1],puVar3[2],puVar3[3]);
  *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)pdVar2;
  *(undefined4 *)(param_1 + 700) = *(undefined4 *)((int)pdVar2 + 4);
  *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(pdVar2 + 1);
  *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)((int)pdVar2 + 0xc);
  pdVar2 = FUN_5f6c3f70(local_178,(int)local_b8,*(int *)(param_1 + 0x28c),(int)local_168,
                        *(int *)(param_1 + 0x288),0,0xbff00000,0,0);
  *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)pdVar2;
  *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)((int)pdVar2 + 4);
  *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(pdVar2 + 1);
  *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)((int)pdVar2 + 0xc);
  iVar4 = 0;
  if (-1 < *(int *)(param_1 + 0x28c)) {
    pdVar2 = local_b8;
    pdVar5 = (double *)(param_1 + 0x308);
    do {
      dVar1 = *pdVar2;
      iVar4 = iVar4 + 1;
      pdVar2 = pdVar2 + 2;
      *pdVar5 = dVar1 / local_168[*(int *)(param_1 + 0x288) * 2];
      pdVar5 = pdVar5 + 1;
    } while (iVar4 <= *(int *)(param_1 + 0x28c));
  }
  iVar4 = *(int *)(param_1 + 0x288);
  if (-1 < iVar4) {
    pdVar2 = local_168;
    pdVar5 = (double *)(param_1 + 0x360);
    do {
      dVar1 = *pdVar2;
      iVar6 = iVar6 + 1;
      pdVar2 = pdVar2 + 2;
      *pdVar5 = -(dVar1 / local_168[iVar4 * 2]);
      iVar4 = *(int *)(param_1 + 0x288);
      pdVar5 = pdVar5 + 1;
    } while (iVar6 <= iVar4);
  }
  return;
}


