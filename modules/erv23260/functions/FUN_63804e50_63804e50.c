/* Module: erv23260.dll
   Function: FUN_63804e50
   Address: 63804e50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_63804e50(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *(undefined ***)this = &PTR_FUN_6382d870;
  *(undefined4 *)((int)this + 0x34) = 1;
  *(undefined4 *)((int)this + 0x38) = 1;
  *(undefined4 *)((int)this + 0x30) = param_3;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x44) = 2;
  *(undefined4 *)((int)this + 0x48) = 2;
  *(undefined4 *)((int)this + 0x4c) = 2;
  uVar1 = FUN_638050c0();
  *(undefined4 *)((int)this + 0x40) = uVar1;
  uVar1 = RGB3toYUV420Free();
  *(undefined4 *)((int)this + 0x2c) = uVar1;
  FUN_638050d0((undefined4 *)((int)this + 4));
  FUN_63805120((int)this);
  *(undefined4 *)((int)this + 0x3c) = param_1;
  *(undefined1 *)((int)this + 0xbf) = 0x7f;
  *(undefined1 *)((int)this + 0xbe) = 0x7f;
  *(undefined1 *)((int)this + 0xbd) = 0x7f;
  *(undefined1 *)((int)this + 0xbc) = 0x7f;
  *(undefined1 *)((int)this + 0xbb) = 0x7f;
  *(undefined1 *)((int)this + 0xba) = 0x7f;
  *(undefined1 *)((int)this + 0xb9) = 0x7f;
  *(undefined1 *)((int)this + 0xb8) = 0x7f;
  *(undefined1 *)((int)this + 0xcf) = 0x50;
  *(undefined1 *)((int)this + 0xce) = 0x50;
  *(undefined1 *)((int)this + 0xcd) = 0x50;
  *(undefined1 *)((int)this + 0xcc) = 0x50;
  *(undefined1 *)((int)this + 0xcb) = 0x50;
  *(undefined1 *)((int)this + 0xca) = 0x50;
  *(undefined1 *)((int)this + 0xc9) = 0x50;
  *(undefined1 *)((int)this + 200) = 0x50;
  *(undefined1 *)((int)this + 0xd7) = 0x30;
  *(undefined1 *)((int)this + 0xd6) = 0x30;
  *(undefined1 *)((int)this + 0xd5) = 0x30;
  *(undefined1 *)((int)this + 0xd4) = 0x30;
  *(undefined1 *)((int)this + 0xd3) = 0x30;
  *(undefined1 *)((int)this + 0xd2) = 0x30;
  *(undefined1 *)((int)this + 0xd1) = 0x30;
  *(undefined1 *)((int)this + 0xd0) = 0x30;
  *(undefined1 *)((int)this + 0xdf) = 0x40;
  *(undefined1 *)((int)this + 0xde) = 0x40;
  *(undefined1 *)((int)this + 0xdd) = 0x40;
  *(undefined1 *)((int)this + 0xdc) = 0x40;
  *(undefined1 *)((int)this + 0xdb) = 0x40;
  *(undefined1 *)((int)this + 0xda) = 0x40;
  *(undefined1 *)((int)this + 0xd9) = 0x40;
  *(undefined1 *)((int)this + 0xd8) = 0x40;
  return this;
}


