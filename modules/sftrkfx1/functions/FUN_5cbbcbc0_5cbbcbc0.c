/* Module: sftrkfx1.dll
   Function: FUN_5cbbcbc0
   Address: 5cbbcbc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cbbcbc0(void *this,int param_1,int param_2)

{
  undefined4 uVar1;
  unkbyte10 Var2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 8) == -800) {
    *(undefined4 *)((int)this + 0x68) = 0x45847726;
    *(undefined4 *)((int)this + 0x6c) = 0x3effffd8;
  }
  else {
    fVar3 = (float10)_CIpow();
    *(double *)((int)this + 0x68) = (double)fVar3;
  }
  *(double *)((int)this + 0x70) = *(double *)((int)this + 0x68) * _DAT_5cc05060;
  uVar1 = ftol();
  *(undefined4 *)((int)this + 0x58) = uVar1;
  uVar1 = ftol();
  *(undefined4 *)((int)this + 0x5c) = uVar1;
  *(uint *)((int)this + 0x9c) = (uint)(*(int *)(param_1 + 8) < -799);
  if (param_2 == 0) {
    Var2 = _CIpow();
    log2(Var2);
    fVar3 = (float10)_CIpow();
    *(double *)((int)this + 0x80) = (double)((float10)_DAT_5cc040b8 / fVar3);
  }
  *(undefined4 *)((int)this + 0xb8) = 0xc1295a8b;
  *(undefined4 *)((int)this + 0xc0) = 0xd1f6b52c;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0xa5f61e2b;
  *(undefined4 *)((int)this + 0xa8) = 0x4bec3caf;
  *(undefined4 *)((int)this + 0xbc) = 0x3f8cc565;
  *(undefined4 *)((int)this + 0xc4) = 0x3fef19d4;
  *(undefined4 *)((int)this + 0xcc) = 0x3fe00000;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0xbfefee87;
  *(undefined4 *)((int)this + 0xac) = 0x3fefdd0f;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
  }
  *(undefined4 *)((int)this + 0x2c) = 1;
  return 0;
}


