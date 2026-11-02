/* Module: sfpagepeel.dll
   Function: FUN_0040c790
   Address: 0040c790
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0040c790(void *this,undefined4 param_1,undefined4 param_2)

{
  float10 fVar1;
  double dVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar3 = (float10)_DAT_0046fdc8;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x17) = 0;
  *(undefined ***)this = &PTR_LAB_00470b40;
  *(undefined4 *)((int)this + 0x10) = 4;
  *(undefined1 *)((int)this + 0x56) = 0xff;
  *(undefined1 *)((int)this + 0x59) = 0xff;
  *(undefined1 *)((int)this + 0x58) = 0xff;
  *(undefined1 *)((int)this + 0x57) = 0xff;
  *(undefined1 *)((int)this + 0x5a) = 0xff;
  *(undefined1 *)((int)this + 0x50) = 0xff;
  *(undefined1 *)((int)this + 0x15) = 0xff;
  *(undefined4 *)((int)this + 0x20) = 0x9999999a;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined1 *)((int)this + 0x16) = 0;
  *(undefined1 *)((int)this + 0x19) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x3fc99999;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0x3ff00000;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined1 *)((int)this + 0x55) = 0;
  *(undefined1 *)((int)this + 0x54) = 0;
  *(undefined1 *)((int)this + 0x53) = 0;
  *(undefined1 *)((int)this + 0x51) = 0xc0;
  *(undefined1 *)((int)this + 0x52) = 200;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  dVar2 = _DAT_0046fdc8;
  fVar4 = (float10)fpatan((float10)_DAT_0046fdc8,(float10)_DAT_0046fdc8);
  fVar4 = (float10)fcos(-fVar4);
  *(double *)((int)this + 0x70) = _DAT_0046fdc8;
  if (dVar2 < _DAT_0046fdc8) {
    *(undefined4 *)((int)this + 0x70) = 0;
    *(undefined4 *)((int)this + 0x74) = 0;
  }
  fVar1 = (float10)_DAT_00470820;
  *(undefined4 *)((int)this + 0x98) = 0x1e900000;
  *(undefined4 *)((int)this + 0xa0) = 0x1e900000;
  *(undefined4 *)((int)this + 0x9c) = 0x42d6bcc4;
  *(undefined4 *)((int)this + 0xa4) = 0x42d6bcc4;
  *(undefined4 *)((int)this + 0xb0) = 0xab8b494d;
  *(undefined1 *)((int)this + 0xb8) = 0x3f;
  fVar3 = (fVar4 * SQRT(fVar3) * fVar1 - fVar4 * SQRT(fVar3) * (float10)*(double *)((int)this + 8))
          - (float10)*(double *)((int)this + 0x70);
  *(undefined4 *)((int)this + 0xb4) = 0x406fd4bb;
  *(double *)((int)this + 0x80) = (double)fVar3;
  *(double *)((int)this + 0x88) = (double)(fVar3 + fVar3);
  *(double *)((int)this + 0x90) = (double)fVar3;
  *(double *)((int)this + 0xa8) = (double)fVar3;
  return this;
}


