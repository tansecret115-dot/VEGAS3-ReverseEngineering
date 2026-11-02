/* Module: ednt3260.dll
   Function: FUN_630fadd0
   Address: 630fadd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_630fadd0(void *this,double *param_1,double *param_2,double *param_3,short *param_4)

{
  double dVar1;
  double *pdVar2;
  int iVar3;
  float10 fVar4;
  
  iVar3 = 5;
  dVar1 = *param_1;
  do {
    param_1 = param_1 + 1;
    if (dVar1 < *param_1) {
      dVar1 = *param_1;
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pdVar2 = (double *)((int)this + 0x22c6);
  iVar3 = 6;
  do {
    if (dVar1 < *pdVar2) {
      dVar1 = *pdVar2;
    }
    pdVar2 = pdVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  dVar1 = dVar1 * _DAT_63102c70;
  if (dVar1 <= _DAT_63102bf0) {
    fVar4 = FUN_630f96e0(SUB84(dVar1 * _DAT_63102c50,0),
                         (int)((ulonglong)(dVar1 * _DAT_63102c50) >> 0x20),0x30);
    fVar4 = fVar4 * (float10)_DAT_63102c80;
  }
  else {
    fVar4 = FUN_630f96e0(SUB84(_DAT_63102bf0 / dVar1,0),
                         (int)((ulonglong)(_DAT_63102bf0 / dVar1) >> 0x20),0x30);
    fVar4 = fVar4 * (float10)_DAT_63102c78;
  }
  if ((float10)(*param_3 - _DAT_63102c88) <= fVar4 - (float10)_DAT_63102c60) {
    if (*param_4 == 0) {
      *param_3 = *param_3 - _DAT_63102c88;
    }
    else {
      *param_4 = *param_4 + -1;
    }
  }
  else {
    *param_3 = (double)(fVar4 - (float10)_DAT_63102c60);
    *param_4 = 5;
  }
  if (*param_3 < *param_2) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)((int)param_3 + 4);
  }
  return;
}


