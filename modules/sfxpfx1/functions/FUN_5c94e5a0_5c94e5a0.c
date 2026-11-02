/* Module: sfxpfx1.dll
   Function: FUN_5c94e5a0
   Address: 5c94e5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5c94e5a0(void *this,int *param_1)

{
  int iVar1;
  float10 fVar2;
  double dVar3;
  
  dVar3 = (double)param_1[3] * _DAT_5c98b940;
  *(double *)((int)this + 0x88) = dVar3;
  *(double *)((int)this + 0x90) = _DAT_5c98b988 - dVar3;
  if (*param_1 == 1000) {
    *(undefined4 *)((int)this + 0x58) = 0xd916872b;
    *(undefined4 *)((int)this + 0x5c) = 0x3feff7ce;
  }
  else {
    *(double *)((int)this + 0x58) = (double)*param_1 * _DAT_5c98b940;
  }
  *(int *)((int)this + 0x1fe0) = *param_1 / 2;
  iVar1 = param_1[2];
  *(int *)((int)this + 0x80) = iVar1;
  if (iVar1 != 0) {
    dVar3 = _DAT_5c98b988 - (double)param_1[1] * _DAT_5c98c2b8;
    *(double *)((int)this + 0x60) = dVar3;
    if (_DAT_5c98b970 == dVar3) {
      *(undefined4 *)((int)this + 0x68) = 0;
      *(undefined4 *)((int)this + 0x6c) = 0x3fe00000;
    }
    else {
      *(double *)((int)this + 0x68) = dVar3 * _DAT_5c98b960 + _DAT_5c98b960;
    }
    *(undefined4 *)((int)this + 0x1fe8) = 0;
    *(undefined4 *)((int)this + 0x1fec) = 0x3ff00000;
    return 0;
  }
  if (param_1[1] == 0) {
    *(undefined4 *)((int)this + 0x60) = 0;
    *(undefined4 *)((int)this + 100) = 0;
  }
  else {
    fVar2 = (float10)log2((float10)param_1[1]);
    *(double *)((int)this + 0x60) =
         (double)((float10)0.3010299956639812 * fVar2 * (float10)_DAT_5c98c2b0);
  }
  dVar3 = _DAT_5c98b988 - *(double *)((int)this + 0x60) * _DAT_5c98c2a8;
  *(double *)((int)this + 0x60) = dVar3;
  *(double *)((int)this + 0x68) = dVar3;
  *(double *)((int)this + 0x1fe8) = _DAT_5c98b988 / ((_DAT_5c98b988 - dVar3) * dVar3 + dVar3);
  return 0;
}


