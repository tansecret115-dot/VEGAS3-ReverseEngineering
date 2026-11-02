/* Module: sfpagepeel.dll
   Function: FUN_0040a850
   Address: 0040a850
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0040a850(void *this,undefined4 param_1,undefined4 param_2)

{
  float10 fVar1;
  double dVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar3 = (float10)_DAT_0046fdc8;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined1 *)((int)this + 0x50) = 0xff;
  *(undefined1 *)((int)this + 0x15) = 0xff;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x20) = 0x9999999a;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x17) = 0;
  *(undefined1 *)((int)this + 0x16) = 0;
  *(undefined1 *)((int)this + 0x19) = 0;
  *(undefined ***)this = &PTR_LAB_00470838;
  *(undefined4 *)((int)this + 0x24) = 0x3fc99999;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0x3ff00000;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined1 *)((int)this + 0x51) = 0xc0;
  *(undefined1 *)((int)this + 0x52) = 200;
  *(undefined4 *)((int)this + 0x10) = 2;
  *(undefined4 *)((int)this + 0x5c) = 0;
  dVar2 = _DAT_0046fdc8;
  fVar4 = (float10)fpatan((float10)_DAT_0046fdc8,(float10)_DAT_0046fdc8);
  fVar4 = (float10)fcos(-fVar4);
  *(double *)((int)this + 0x60) = _DAT_0046fdc8;
  if (dVar2 < _DAT_0046fdc8) {
    *(undefined4 *)((int)this + 0x60) = 0;
    *(undefined4 *)((int)this + 100) = 0;
  }
  fVar1 = (float10)_DAT_00470820;
  *(undefined4 *)((int)this + 0x88) = 0x1e900000;
  *(undefined4 *)((int)this + 0x98) = 0xab8b494d;
  *(undefined4 *)((int)this + 0x8c) = 0x42d6bcc4;
  *(undefined1 *)((int)this + 0xa0) = 0x3f;
  *(undefined4 *)((int)this + 0x9c) = 0x406fd4bb;
  fVar3 = (fVar4 * SQRT(fVar3) * fVar1 -
          fVar4 * SQRT(fVar3) * (float10)(double)CONCAT44(param_2,param_1)) -
          (float10)*(double *)((int)this + 0x60);
  *(double *)((int)this + 0x70) = (double)fVar3;
  *(double *)((int)this + 0x78) = (double)(fVar3 + fVar3);
  *(double *)((int)this + 0x80) = (double)fVar3;
  *(double *)((int)this + 0x90) = (double)fVar3;
  return this;
}


