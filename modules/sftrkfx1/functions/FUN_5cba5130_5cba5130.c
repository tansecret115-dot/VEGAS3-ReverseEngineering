/* Module: sftrkfx1.dll
   Function: FUN_5cba5130
   Address: 5cba5130
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cba5130(void *this,float *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if (*param_1 <= (float)_DAT_5cc040b0) {
    *(undefined4 *)((int)this + 0xf0) = 0;
    *(undefined4 *)((int)this + 0xf4) = 0;
  }
  else {
    fVar3 = (float10)_CIpow();
    *(double *)((int)this + 0xf0) = (double)fVar3;
  }
  if (param_1[1] <= (float)_DAT_5cc040b0) {
    *(undefined4 *)((int)this + 0xf8) = 0;
    *(undefined4 *)((int)this + 0xfc) = 0;
  }
  else {
    fVar3 = (float10)_CIpow();
    *(double *)((int)this + 0xf8) = (double)fVar3;
  }
  fVar3 = (float10)_CIpow();
  *(double *)((int)this + 0xb8) = (double)fVar3;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  if ((float)_DAT_5cc04250 < param_1[2]) {
    fVar3 = (float10)_CIpow();
    *(double *)((int)this + 0xf0) = (double)(fVar3 * (float10)*(double *)((int)this + 0xf0));
    *(double *)((int)this + 0xb8) = (double)(fVar3 * (float10)*(double *)((int)this + 0xb8));
    *(double *)((int)this + 0xf8) = (double)((float10)*(double *)((int)this + 0xf8) / fVar3);
  }
  _CIpow();
  iVar1 = ftol();
  if ((float)iVar1 <= param_1[3]) {
    *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)((int)this + 0xb8);
    *(undefined4 *)((int)this + 200) = 0;
    *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)((int)this + 0xbc);
    *(undefined4 *)((int)this + 0xcc) = 0x3ff00000;
  }
  else {
    fVar3 = (float10)_CIpow();
    *(double *)((int)this + 0xc0) = (double)fVar3;
    *(double *)((int)this + 200) =
         (double)(((float10)_DAT_5cc040b8 - fVar3) /
                 ((float10)_DAT_5cc040b8 - (float10)*(double *)((int)this + 0xb8)));
  }
  if (((param_1[3] == (float)_DAT_5cc040b8) && (*param_1 == (float)_DAT_5cc04098)) &&
     (param_1[1] == (float)_DAT_5cc04098)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  *(undefined4 *)((int)this + 0x108) = uVar2;
  if (param_1[6] != 0.0) {
    log2((float10)*(double *)((int)this + 0xc0));
    fVar3 = (float10)_CIpow();
    *(double *)((int)this + 0xf8) =
         (double)(((float10)_DAT_5cc040b8 / fVar3) * (float10)*(double *)((int)this + 0xf8));
  }
  iVar1 = ftol();
  if ((double)iVar1 <= _DAT_5cc04098) {
    *(undefined4 *)((int)this + 0xd0) = 0;
    *(undefined4 *)((int)this + 0xd4) = 0;
  }
  else {
    fVar3 = (float10)_CIpow();
    *(double *)((int)this + 0xd0) = (double)fVar3;
  }
  iVar1 = ftol();
  if ((double)iVar1 <= _DAT_5cc04098) {
    *(undefined4 *)((int)this + 0xd8) = 0;
    *(undefined4 *)((int)this + 0xdc) = 0;
  }
  else {
    fVar3 = (float10)_CIpow();
    *(double *)((int)this + 0xd8) = (double)fVar3;
  }
  if (param_2 == 0) {
    *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)((int)this + 0xf8);
    *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)((int)this + 0xfc);
  }
  if (*(double *)((int)this + 0xf0) == _DAT_5cc04098) {
    *(undefined4 *)((int)this + 0xf0) = 0xe826d695;
    *(undefined4 *)((int)this + 0xf8) = 0;
    *(undefined4 *)((int)this + 0xf4) = 0x3e112e0b;
    *(undefined4 *)((int)this + 0xfc) = 0;
  }
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x150) = 0xc1295a8b;
  *(undefined4 *)((int)this + 0x158) = 0xd1f6b52c;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x134) = 0x3ff00000;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x154) = 0x3f8cc565;
  *(undefined4 *)((int)this + 0x15c) = 0x3fef19d4;
  *(undefined4 *)((int)this + 0x164) = 0x3fe00000;
  *(double *)((int)this + 0x110) =
       *(double *)((int)this + 0xb8) * *(double *)((int)this + 0xf8) * *(double *)((int)this + 200);
  *(double *)((int)this + 0x118) =
       (_DAT_5cc040b8 - *(double *)((int)this + 200)) * *(double *)((int)this + 0xf8) *
       *(double *)((int)this + 0xf0);
  fVar3 = (float10)*(double *)((int)this + 0xb8) / (float10)*(double *)((int)this + 0xf0);
  *(double *)((int)this + 0x120) = (double)fVar3;
  *(double *)((int)this + 0x128) = *(double *)((int)this + 0xf8) * *(double *)((int)this + 0xf0);
  *(double *)((int)this + 0x168) = _DAT_5cc040b8 - *(double *)((int)this + 0xd0);
  *(double *)((int)this + 0x170) = _DAT_5cc040b8 - *(double *)((int)this + 0xd8);
  *(float *)((int)this + 0x17c) = (float)fVar3;
  *(float *)((int)this + 0x10c) = param_1[7];
  if (param_1[7] == 0.0) {
    if (param_1[4] == _DAT_5cc03f24) {
      ftol();
      fVar3 = (float10)_CIpow();
      *(double *)((int)this + 0xd0) = (double)fVar3;
      *(double *)((int)this + 0x168) = (double)((float10)_DAT_5cc040b8 - fVar3);
    }
  }
  else {
    iVar1 = ftol();
    if ((double)iVar1 <= _DAT_5cc04098) {
      *(undefined4 *)((int)this + 0xd0) = 0;
      *(undefined4 *)((int)this + 0xd4) = 0;
    }
    else {
      fVar3 = (float10)_CIpow();
      *(double *)((int)this + 0xd0) = (double)fVar3;
    }
    iVar1 = ftol();
    if ((double)iVar1 <= _DAT_5cc04098) {
      *(undefined4 *)((int)this + 0xd8) = 0;
      *(undefined4 *)((int)this + 0xdc) = 0;
    }
    else {
      fVar3 = (float10)_CIpow();
      *(double *)((int)this + 0xd8) = (double)fVar3;
    }
    *(double *)((int)this + 0x168) = _DAT_5cc040b8 - *(double *)((int)this + 0xd0);
    *(double *)((int)this + 0x170) = _DAT_5cc040b8 - *(double *)((int)this + 0xd8);
  }
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x138) = 0xa48c0a0c;
  *(undefined4 *)((int)this + 0x140) = 0x49181472;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0xbfefe2ec;
  *(undefined4 *)((int)this + 0x144) = 0x3fefc5d9;
  *(undefined4 *)((int)this + 0x180) = *(undefined4 *)((int)this + 0x28);
  *(undefined4 *)((int)this + 0x2c) = 1;
  return 0;
}


