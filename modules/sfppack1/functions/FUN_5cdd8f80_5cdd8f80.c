/* Module: sfppack1.dll
   Function: FUN_5cdd8f80
   Address: 5cdd8f80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5cdd8f80(void *this,double *param_1,double *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  float10 fVar6;
  double local_1c;
  double local_14;
  double local_c;
  
  if (param_3 == 0) {
    local_1c = *param_1 * *(double *)((int)this + 0x78);
    local_14 = *param_2 * *(double *)((int)this + 0x78);
  }
  else {
    local_1c = *param_1;
    local_14 = *param_2;
  }
  fVar6 = (float10)fsin((float10)*(int *)((int)this + param_3 * 4 + 0x1f0) *
                        (float10)*(double *)((int)this + param_3 * 8 + 0x248));
  fVar6 = fVar6 * (float10)*(double *)((int)this + 0x1a0) +
          (float10)*(double *)((int)this + param_3 * 8 + 0x200);
  local_c = (double)fVar6;
  if (fVar6 < (float10)_DAT_5ce14f18) {
    if (fVar6 < (float10)_DAT_5ce12bf0) {
      local_c = (double)(fVar6 + (float10)_DAT_5ce14f18);
    }
  }
  else {
    local_c = (double)(fVar6 - (float10)_DAT_5ce14f18);
  }
  iVar1 = (int)ROUND(local_c);
  iVar5 = iVar1 + 1;
  if (iVar5 == 0x1964) {
    iVar5 = 0;
  }
  iVar2 = *(int *)((int)this + param_3 * 4 + 0x1bc);
  dVar3 = *(double *)((int)this + 0x188) * *(double *)((int)this + param_3 * 8 + 0x1d8) +
          ((local_c - (double)iVar1) *
           (*(double *)(iVar2 + iVar5 * 8) - *(double *)(iVar2 + iVar1 * 8)) +
          *(double *)(iVar2 + iVar1 * 8)) * *(double *)((int)this + 400);
  if (ABS(dVar3) < _DAT_5ce14f10) {
    dVar3 = _DAT_5ce12bf0;
  }
  *(double *)((int)this + param_3 * 8 + 0x1d8) = dVar3;
  dVar4 = *(double *)((int)this + param_3 * 8 + 0x200) - _DAT_5ce12e70;
  *(double *)((int)this + param_3 * 8 + 0x200) = dVar4;
  if (dVar4 < _DAT_5ce12bf0) {
    *(undefined4 *)((int)this + param_3 * 8 + 0x200) = 0;
    *(undefined4 *)((int)this + param_3 * 8 + 0x204) = 0x40b96300;
  }
  iVar5 = *(int *)((int)this + param_3 * 4 + 0x1f0) + 1;
  *(int *)((int)this + param_3 * 4 + 0x1f0) = iVar5;
  if (*(double *)((int)this + param_3 * 8 + 0x230) <= (double)iVar5) {
    *(undefined4 *)((int)this + param_3 * 4 + 0x1f0) = 0;
  }
  dVar4 = dVar3 * *(double *)((int)this + 0xe8);
  if (param_3 == 0) {
    *param_1 = local_1c * *(double *)((int)this + 0x80) + dVar4 * *(double *)((int)this + 0x218);
    dVar4 = local_14 * *(double *)((int)this + 0x80) +
            dVar3 * *(double *)((int)this + 0x138) * *(double *)((int)this + 0x218);
  }
  else {
    *param_1 = dVar4 + local_1c;
    dVar4 = dVar3 * *(double *)((int)this + 0x138) + local_14;
  }
  *param_2 = dVar4;
  *(double *)
   (*(int *)((int)this + param_3 * 4 + 0x1bc) + *(int *)((int)this + param_3 * 4 + 0x1c8) * 8) =
       dVar3 * *(double *)((int)this + 0x88) + (local_14 + local_1c) * _DAT_5ce12df8;
  iVar5 = *(int *)((int)this + param_3 * 4 + 0x1c8) + -1;
  *(int *)((int)this + param_3 * 4 + 0x1c8) = iVar5;
  if (iVar5 < 0) {
    *(undefined4 *)((int)this + param_3 * 4 + 0x1c8) = 0x1963;
  }
  return;
}


