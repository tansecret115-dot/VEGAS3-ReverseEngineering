/* Module: cook3260.dll
   Function: FUN_633a47a0
   Address: 633a47a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_633a47a0(void *this,float *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)((int)this + 0x20)) {
    do {
      iVar3 = 0x14;
      fVar2 = _DAT_633a8f78;
      do {
        fVar1 = *param_1;
        param_1 = param_1 + 1;
        iVar3 = iVar3 + -1;
        fVar2 = fVar1 * fVar1 + fVar2;
      } while (iVar3 != 0);
      fVar1 = _DAT_633a8f88;
      if (_DAT_633a8f80 < fVar2 * _DAT_633a8f7c) {
        fVar1 = _DAT_633a8f84;
      }
      iVar3 = ((int)(fVar2 * _DAT_633a8f7c * fVar1) >> 0x17) + -0x7f;
      iVar3 = iVar3 - (iVar3 >> 0x1f);
      if (iVar3 < -0x1f) {
        iVar3 = -0x1f;
      }
      if (0x3f < iVar3) {
        iVar3 = 0x3f;
      }
      *param_2 = iVar3;
      iVar4 = iVar4 + 1;
      param_2 = param_2 + 1;
    } while (iVar4 < *(int *)((int)this + 0x20));
  }
  return;
}


