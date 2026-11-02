/* Module: vegas30k.dll
   Function: FUN_010f8ae0
   Address: 010f8ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_010f8ae0(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  undefined8 local_1e0;
  double local_1d8;
  double local_1d0;
  int local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined8 local_1b0;
  double local_1a8;
  double local_1a0;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [176];
  undefined1 local_b8 [180];
  
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
  FUN_010f88a0((undefined4 *)(param_1 + 0x1e8),2,local_b8);
  fVar3 = (float10)*(double *)(param_1 + 0x298) * (float10)_DAT_011e3300;
  fVar5 = (float10)1.4426950408889634 *
          -(fVar3 / ((float10)*(double *)(param_1 + 0x2f8) + (float10)*(double *)(param_1 + 0x2f8)))
  ;
  fVar4 = ROUND(fVar5);
  fVar5 = (float10)f2xm1(fVar5 - fVar4);
  fVar4 = (float10)fscale((float10)1 + fVar5,fVar4);
  local_1b0 = (double)fVar4;
  local_1e0 = (double)fVar3;
  fVar4 = (float10)_DAT_011dad58 / (float10)*(double *)(param_1 + 0x2f8);
  local_1d8 = (double)(fVar3 - fVar4);
  fVar4 = fVar4 + fVar3;
  local_1d0 = (double)fVar4;
  if (local_1d8 < _DAT_011db3f0) {
    local_1d8 = 0.0;
  }
  if ((float10)_DAT_011dbdb8 < fVar4) {
    local_1d0 = 3.141592653589793;
  }
  bVar1 = false;
  local_1c4 = 0;
  do {
    if (bVar1) {
      return 0;
    }
    puVar2 = (undefined4 *)FUN_010f6360(local_178,(undefined4)local_1e0,local_1e0._4_4_);
    FUN_010f8260(&local_1c0,(undefined4)local_1b0,local_1b0._4_4_,*puVar2,puVar2[1],puVar2[2],
                 puVar2[3]);
    *(undefined4 *)(param_1 + 0x148) = local_1c0;
    *(undefined4 *)(param_1 + 0x14c) = local_1bc;
    *(undefined4 *)(param_1 + 0x150) = local_1b8;
    *(undefined4 *)(param_1 + 0x154) = local_1b4;
    puVar2 = (undefined4 *)FUN_010f7800(local_198,local_1c0,local_1bc,local_1b8,local_1b4);
    *(undefined4 *)(param_1 + 0x158) = *puVar2;
    *(undefined4 *)(param_1 + 0x15c) = puVar2[1];
    *(undefined4 *)(param_1 + 0x160) = puVar2[2];
    *(undefined4 *)(param_1 + 0x164) = puVar2[3];
    FUN_010f88a0((undefined4 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x288),local_168);
    puVar2 = (undefined4 *)FUN_010f6360(local_188,(double)fVar3);
    FUN_010f86c0(&local_1a8,local_b8,*(undefined4 *)(param_1 + 0x28c),local_168,
                 *(undefined4 *)(param_1 + 0x288),*puVar2,puVar2[1],puVar2[2],puVar2[3]);
    if (local_1a0 / local_1a8 <= _DAT_011db3f0) {
      local_1d8 = local_1e0;
    }
    else {
      local_1d0 = local_1e0;
    }
    if (ABS(local_1a0 / local_1a8) < _DAT_011e3310) {
      bVar1 = true;
    }
    local_1c4 = local_1c4 + 1;
    local_1e0 = (local_1d0 + local_1d8) * _DAT_011db6e8;
  } while (local_1c4 < 0x32);
  if (bVar1) {
    return 0;
  }
  return 0xfffffffe;
}


