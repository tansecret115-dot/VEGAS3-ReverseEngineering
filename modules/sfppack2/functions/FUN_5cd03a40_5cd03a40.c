/* Module: sfppack2.dll
   Function: FUN_5cd03a40
   Address: 5cd03a40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5cd03a40(void *this,int param_1)

{
  double dVar1;
  undefined4 uVar2;
  float10 fVar3;
  float10 fVar4;
  
  uVar2 = ftol();
  *(undefined4 *)((int)this + 0x6c) = uVar2;
  uVar2 = ftol();
  *(undefined4 *)((int)this + 0x70) = uVar2;
  if (*(int *)(param_1 + 8) == -800) {
    *(undefined4 *)((int)this + 0x78) = 0x45847726;
    *(undefined4 *)((int)this + 0x7c) = 0x3effffd8;
  }
  else {
    fVar3 = (float10)_CIpow();
    *(double *)((int)this + 0x78) = (double)fVar3;
  }
  dVar1 = *(double *)((int)this + 0x78) * _DAT_5cd52950;
  *(double *)((int)this + 0x80) = dVar1;
  if (((*(double *)((int)this + 0x78) < *(double *)((int)this + 0x108)) ||
      (*(double *)((int)this + 0x108) < dVar1)) &&
     ((*(double *)((int)this + 0x108) < *(double *)((int)this + 0x78) ||
      (dVar1 < *(double *)((int)this + 0x108))))) {
    if (*(short *)(*(int *)((int)this + 0x44) + 2) != 2) goto LAB_5cd03b85;
    if ((*(double *)((int)this + 0x78) < *(double *)((int)this + 0x108)) ||
       (*(double *)((int)this + 0x108) < dVar1)) {
      if ((*(double *)((int)this + 0x78) <= *(double *)((int)this + 0x108)) &&
         (*(double *)((int)this + 0x108) <= dVar1)) {
        *(undefined4 *)((int)this + 0x88) = 0;
      }
      goto LAB_5cd03b85;
    }
  }
  *(undefined4 *)((int)this + 0x88) = 0;
LAB_5cd03b85:
  *(undefined4 *)((int)this + 0xa8) = 0x45847726;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xac) = 0x3effffd8;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0x3ff00000;
  *(undefined4 *)((int)this + 0xe0) = 0;
  fVar3 = (float10)_CIpow();
  *(double *)((int)this + 0xd0) = (double)((float10)_DAT_5cd51510 - fVar3);
  fVar3 = (float10)_CIpow();
  *(double *)((int)this + 200) = (double)((float10)_DAT_5cd51510 - fVar3);
  fVar4 = (float10)_CIpow();
  fVar3 = (float10)_DAT_5cd51510;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0x3ff00000;
  *(double *)((int)this + 0xd8) = (double)(fVar3 - fVar4);
  *(undefined4 *)((int)this + 0xec) = 0x3ff00000;
  return;
}


