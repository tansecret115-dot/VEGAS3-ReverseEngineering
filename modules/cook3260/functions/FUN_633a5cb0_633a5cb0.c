/* Module: cook3260.dll
   Function: FUN_633a5cb0
   Address: 633a5cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_633a5cb0(void *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  undefined4 local_8;
  
  *(int *)((int)this + 0x47bc) = param_1;
  pvVar1 = operator_new(param_1 << 2);
  *(void **)((int)this + 0x16afc) = pvVar1;
  pvVar1 = operator_new(*(int *)((int)this + 0x47bc) / 2 << 2);
  *(void **)((int)this + 0x16b00) = pvVar1;
  pvVar1 = operator_new(*(int *)((int)this + 0x47bc) / 2 << 2);
  *(void **)((int)this + 0x16b04) = pvVar1;
  pvVar1 = operator_new((*(int *)((int)this + 0x47bc) / 2) * 4 + 4);
  *(void **)((int)this + 0x16b08) = pvVar1;
  if ((((*(int *)((int)this + 0x16afc) != 0) && (*(int *)((int)this + 0x16b00) != 0)) &&
      (*(int *)((int)this + 0x16b04) != 0)) && (pvVar1 != (void *)0x0)) {
    param_1 = *(int *)((int)this + 0x47bc);
    local_8 = 0;
    if (0 < param_1) {
      do {
        fVar3 = (float10)local_8;
        local_8 = local_8 + 1;
        fVar3 = (float10)fsin(((fVar3 - (float10)_DAT_633a95c0) * (float10)_DAT_633a95c8) /
                              ((float10)param_1 + (float10)param_1));
        *(float *)(*(int *)((int)this + 0x16afc) + -4 + local_8 * 4) = (float)fVar3;
        param_1 = *(int *)((int)this + 0x47bc);
      } while (local_8 < param_1);
    }
    param_1 = *(int *)((int)this + 0x47bc);
    local_8 = 0;
    if (0 < param_1 / 2) {
      do {
        fVar3 = (float10)local_8;
        iVar2 = local_8 * 4;
        local_8 = local_8 + 1;
        fVar5 = ((fVar3 - (float10)_DAT_633a95d8) * (float10)_DAT_633a95c8) / (float10)param_1;
        fVar3 = (float10)fcos(fVar5);
        fVar5 = (float10)fsin(fVar5);
        *(float *)(iVar2 + *(int *)((int)this + 0x16b00)) = (float)fVar3;
        *(float *)(iVar2 + *(int *)((int)this + 0x16b04)) = (float)fVar5;
        param_1 = *(int *)((int)this + 0x47bc);
      } while (local_8 < param_1 / 2);
    }
    param_1 = *(int *)((int)this + 0x47bc);
    local_8 = 0;
    fVar5 = (float10)param_1;
    fVar3 = (float10)_DAT_633a95d0;
    if (param_1 / 2 != -1 && -1 < param_1 / 2 + 1) {
      do {
        fVar4 = (float10)local_8;
        local_8 = local_8 + 1;
        fVar4 = (float10)fcos((fVar4 * (float10)_DAT_633a95c8) / (float10)param_1);
        *(float *)(*(int *)((int)this + 0x16b08) + -4 + local_8 * 4) =
             (float)(fVar4 * SQRT(fVar3 / fVar5));
        param_1 = *(int *)((int)this + 0x47bc);
      } while (local_8 < param_1 / 2 + 1);
    }
    iVar2 = FUN_633a4a20(this,*(int *)((int)this + 0x47bc) / 2);
    return -(uint)(iVar2 != 0);
  }
  return -1;
}


