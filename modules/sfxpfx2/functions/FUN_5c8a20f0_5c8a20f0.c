/* Module: sfxpfx2.dll
   Function: FUN_5c8a20f0
   Address: 5c8a20f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5c8a20f0(void *this,int param_1,undefined4 *param_2)

{
  float10 fVar1;
  int iVar2;
  double *pdVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  double local_20 [2];
  undefined4 local_10;
  undefined4 uStack_c;
  
  pdVar3 = local_20;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pdVar3 = *param_2;
    param_2 = param_2 + 1;
    pdVar3 = (double *)((int)pdVar3 + 4);
  }
  if (_DAT_5c8dd7c8 <= local_20[0]) {
    if (_DAT_5c8dd7c0 < local_20[0]) {
      local_20[0] = 0.49;
    }
  }
  else {
    local_20[0] = 0.0003;
  }
  fVar4 = FUN_5c8a1f20((int)this,(double)CONCAT44(uStack_c,local_10),local_20[0]);
  local_20[0] = (double)fVar4;
  FUN_5c8a2040(param_1,local_20);
  if (_DAT_5c8dd7c8 <= local_20[0]) {
    if (local_20[0] <= _DAT_5c8dd7c0) {
      fVar4 = (float10)local_20[0];
    }
    else {
      fVar4 = (float10)_DAT_5c8dd7c0;
    }
  }
  else {
    fVar4 = (float10)_DAT_5c8dd7c8;
  }
  fVar1 = (float10)_DAT_5c8dd838;
  fVar6 = (float10)_DAT_5c8dd7b8;
  fVar7 = (float10)1.4426950408889634 *
          -((float10)(double)(fVar4 * fVar1) / (float10)(double)CONCAT44(uStack_c,local_10));
  fVar5 = ROUND(fVar7);
  fVar7 = (float10)f2xm1(fVar7 - fVar5);
  fVar5 = (float10)fscale((float10)1 + fVar7,fVar5);
  fVar7 = (float10)fcos(fVar4 * fVar6);
  fVar5 = fVar7 * fVar5 + fVar7 * fVar5;
  *(double *)(param_1 + 0x10) = (double)fVar5;
  fVar7 = (float10)1.4426950408889634 *
          -((fVar4 * fVar6) / (float10)(double)CONCAT44(uStack_c,local_10));
  fVar6 = ROUND(fVar7);
  fVar7 = (float10)f2xm1(fVar7 - fVar6);
  fVar6 = (float10)fscale((float10)1 + fVar7,fVar6);
  *(double *)(param_1 + 0x18) = (double)fVar6;
  fVar4 = (float10)fcos((float10)(double)(fVar4 * fVar1));
  *(double *)(param_1 + 0x20) =
       (double)(fVar4 * SQRT(((float10)_DAT_5c8dc920 - (float10)(double)fVar5) + fVar6));
  return;
}


