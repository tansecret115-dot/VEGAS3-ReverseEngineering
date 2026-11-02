/* Module: ednt3260.dll
   Function: FUN_630faa80
   Address: 630faa80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_630faa80(void *this,short param_1,short param_2)

{
  double *pdVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_2c = 0x6665983e;
  local_28 = 0x3fe6a09e;
  local_24 = 0;
  local_20 = 0x3ff00000;
  local_1c = 0x6665983e;
  local_18 = 0x3fe6a09e;
  local_14 = 0;
  local_10 = 0x3fe00000;
  local_c = 0;
  local_8 = 0x3fe00000;
  if (param_2 == 0) {
    puVar3 = (undefined4 *)((int)this + 0x1ac6);
    for (iVar2 = 0x200; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
  }
  iVar2 = (int)param_2;
  _param_2 = 0x100;
  pdVar1 = (double *)((int)this + 0x1ac6);
  do {
    _param_2 = _param_2 + -1;
    *pdVar1 = *pdVar1 - *(double *)
                         (&local_2c +
                         *(short *)(&DAT_630ff8c8 + (iVar2 + *(short *)((int)this + 0x630a) * 6) * 2
                                   ) * 2) *
                        *(double *)
                         ((*(int *)((int)this + 0x868) - (int)this) + -0x1ace + (int)(pdVar1 + 1)) *
                        _DAT_63102c28;
    pdVar1 = pdVar1 + 1;
  } while (_param_2 != 0);
  if (iVar2 == *(short *)((int)this + 0x6344) + -1) {
    pdVar1 = (double *)((int)this + 0x1ac6);
    FUN_630f4910(pdVar1,1,pdVar1,1,(double *)((int)this + 0x1ab6),
                 (double *)(&DAT_631015a8 + *(short *)((int)this + 0x6304) * 0x18),0x100);
    fVar4 = (float10)FUN_630f9770(pdVar1,1,0x100);
    *(double *)((int)this + param_1 * 8 + 0x22c6) = (double)fVar4;
  }
  return;
}


