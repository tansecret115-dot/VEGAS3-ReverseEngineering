/* Module: extmondrv.dll
   Function: FUN_00406cb0
   Address: 00406cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00406cb0(void *this,uint param_1)

{
  FUN_004015f0(this,param_1);
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_0044e334;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_0044e2f8;
  *(undefined4 *)((int)this + 0x18) = 1;
  *(undefined2 *)((int)this + 0x28) = 1;
  *(undefined4 *)((int)this + 0x6c) = 0x6e76645f;
  *(undefined4 *)((int)this + 0x68) = 0x6e76645f;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x70) = 0xd1745d17;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined ***)this = &PTR_FUN_0044e2cc;
  *(undefined ***)((int)this + 8) = &PTR_LAB_0044e2c0;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_0044e274;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_0044e238;
  *(undefined4 *)((int)this + 0x1c) = 0x28;
  *(undefined4 *)((int)this + 0x20) = 0x2d0;
  *(undefined4 *)((int)this + 0x24) = 0x1e0;
  *(undefined2 *)((int)this + 0x2a) = 0x18;
  *(undefined4 *)((int)this + 0x2c) = 0x64737664;
  *(undefined4 *)((int)this + 0x30) = 120000;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x7c) = 4;
  *(undefined4 *)((int)this + 0x74) = 0x3fed1745;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0x10c9;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x80));
  InterlockedIncrement((LONG *)&DAT_0045b00c);
  return this;
}


