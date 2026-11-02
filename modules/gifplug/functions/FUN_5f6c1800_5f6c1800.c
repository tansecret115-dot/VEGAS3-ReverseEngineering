/* Module: gifplug.dll
   Function: FUN_5f6c1800
   Address: 5f6c1800
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f6c1800(void *this,undefined4 param_1)

{
  *(undefined ***)this = &PTR_LAB_5f702328;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  FUN_5f6c2ef0((undefined4 *)((int)this + 0x218));
  *(undefined4 *)((int)this + 0x6a3) = 0;
  *(undefined4 *)((int)this + 0x6a7) = 0;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x69f) = 0xffffffff;
  *(undefined ***)this = &PTR_LAB_5f7022c8;
  return this;
}


