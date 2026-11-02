/* Module: encn3260.dll
   Function: FUN_6648d310
   Address: 6648d310
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6648d310(void *this,undefined4 param_1)

{
  DWORD DVar1;
  
  *(undefined ***)this = &PTR_LAB_664de280;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  FUN_664bb2c0((undefined4 *)((int)this + 0x20));
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = param_1;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined ***)this = &PTR_LAB_664de208;
  DVar1 = GetTickCount();
  *(DWORD *)((int)this + 0x44) = DVar1;
  return this;
}


