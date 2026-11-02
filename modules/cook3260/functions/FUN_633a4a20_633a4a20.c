/* Module: cook3260.dll
   Function: FUN_633a4a20
   Address: 633a4a20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_633a4a20(void *this,int param_1)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  
  iVar5 = 0;
  *(int *)((int)this + 0x47ac) = param_1;
  *(undefined4 *)((int)this + 0x47b0) = 0;
  iVar3 = param_1;
  while (iVar3 = iVar3 >> 1, iVar3 != 0) {
    *(int *)((int)this + 0x47b0) = *(int *)((int)this + 0x47b0) + 1;
  }
  if (1 << ((byte)*(undefined4 *)((int)this + 0x47b0) & 0x1f) == param_1) {
    pvVar1 = operator_new(param_1 * 4);
    *(void **)((int)this + 0x47b8) = pvVar1;
    pvVar1 = operator_new(*(int *)((int)this + 0x47ac) << 2);
    *(void **)((int)this + 0x47b4) = pvVar1;
    if ((*(int *)((int)this + 0x47b8) != 0) && (pvVar1 != (void *)0x0)) {
      if (0 < *(int *)((int)this + 0x47ac)) {
        do {
          uVar2 = 0;
          iVar3 = 0;
          if (0 < *(int *)((int)this + 0x47b0)) {
            do {
              uVar2 = uVar2 * 2 | iVar5 >> ((byte)iVar3 & 0x1f) & 1U;
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)((int)this + 0x47b0));
          }
          iVar5 = iVar5 + 1;
          *(uint *)(*(int *)((int)this + 0x47b8) + -4 + iVar5 * 4) = uVar2;
        } while (iVar5 < *(int *)((int)this + 0x47ac));
      }
      param_1 = *(int *)((int)this + 0x47ac);
      iVar3 = 0;
      pfVar4 = *(float **)((int)this + 0x47b4);
      if (0 < param_1 / 2) {
        do {
          iVar5 = iVar3 * 8;
          iVar3 = iVar3 + 1;
          fVar6 = (float10)*(int *)(*(int *)((int)this + 0x47b8) + iVar5) * (float10)_DAT_633a8f90;
          fVar7 = (float10)fcos(fVar6 / (float10)param_1);
          *pfVar4 = (float)fVar7;
          fVar6 = (float10)fsin(fVar6 / (float10)*(int *)((int)this + 0x47ac));
          pfVar4[1] = (float)fVar6;
          param_1 = *(int *)((int)this + 0x47ac);
          pfVar4 = pfVar4 + 2;
        } while (iVar3 < param_1 / 2);
      }
      return 0;
    }
  }
  return 0xffffffff;
}


