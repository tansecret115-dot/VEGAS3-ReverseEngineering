/* Module: aviplug.dll
   Function: FUN_5f9d2590
   Address: 5f9d2590
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5f9d2590(int param_1)

{
  bool bVar1;
  double *pdVar2;
  undefined4 *puVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  int local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  undefined4 local_198 [4];
  double local_188 [2];
  double local_178 [2];
  double local_168 [22];
  double local_b8 [22];
  
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x28c) = 2;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x288) = 2;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0xbff00000;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  FUN_5f9d2350((double *)(param_1 + 0x1e8),2,local_b8);
  fVar4 = (float10)*(double *)(param_1 + 0x298) * (float10)_DAT_5f9ee7f0;
  fVar6 = (float10)1.4426950408889634 *
          -(fVar4 / ((float10)*(double *)(param_1 + 0x2f8) + (float10)*(double *)(param_1 + 0x2f8)))
  ;
  fVar5 = ROUND(fVar6);
  fVar6 = (float10)f2xm1(fVar6 - fVar5);
  fVar5 = (float10)fscale((float10)1 + fVar6,fVar5);
  local_1b0 = (double)fVar5;
  local_1e0 = (double)fVar4;
  fVar5 = (float10)_DAT_5f9d7c98 / (float10)*(double *)(param_1 + 0x2f8);
  local_1d8 = (double)(fVar4 - fVar5);
  fVar5 = fVar5 + fVar4;
  local_1d0 = (double)fVar5;
  if (local_1d8 < _DAT_5f9d78f0) {
    local_1d8 = 0.0;
  }
  if ((float10)_DAT_5f9ec338 < fVar5) {
    local_1d0 = 3.141592653589793;
  }
  bVar1 = false;
  local_1c4 = 0;
  do {
    if (bVar1) {
      return 0;
    }
    pdVar2 = (double *)FUN_5f9cfe10(local_178,local_1e0);
    FUN_5f9d1d10((double *)&local_1c0,local_1b0,*pdVar2,pdVar2[1]);
    *(undefined4 *)(param_1 + 0x148) = local_1c0;
    *(undefined4 *)(param_1 + 0x14c) = local_1bc;
    *(undefined4 *)(param_1 + 0x150) = local_1b8;
    *(undefined4 *)(param_1 + 0x154) = local_1b4;
    puVar3 = (undefined4 *)
             FUN_5f9d12b0(local_198,local_1c0,local_1bc,(double)CONCAT44(local_1b4,local_1b8));
    *(undefined4 *)(param_1 + 0x158) = *puVar3;
    *(undefined4 *)(param_1 + 0x15c) = puVar3[1];
    *(undefined4 *)(param_1 + 0x160) = puVar3[2];
    *(undefined4 *)(param_1 + 0x164) = puVar3[3];
    FUN_5f9d2350((double *)(param_1 + 0x148),*(int *)(param_1 + 0x288),local_168);
    puVar3 = (undefined4 *)FUN_5f9cfe10(local_188,(double)fVar4);
    FUN_5f9d2170(&local_1a8,(int)local_b8,*(int *)(param_1 + 0x28c),(int)local_168,
                 *(int *)(param_1 + 0x288),*puVar3,puVar3[1],puVar3[2],puVar3[3]);
    if (local_1a0 / local_1a8 <= _DAT_5f9d78f0) {
      local_1d8 = local_1e0;
    }
    else {
      local_1d0 = local_1e0;
    }
    if (ABS(local_1a0 / local_1a8) < _DAT_5f9ee800) {
      bVar1 = true;
    }
    local_1c4 = local_1c4 + 1;
    local_1e0 = (local_1d0 + local_1d8) * _DAT_5f9d7ca0;
  } while (local_1c4 < 0x32);
  if (bVar1) {
    return 0;
  }
  return 0xfffffffe;
}


