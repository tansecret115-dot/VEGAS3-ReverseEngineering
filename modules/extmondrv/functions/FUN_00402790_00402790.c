/* Module: extmondrv.dll
   Function: FUN_00402790
   Address: 00402790
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_00402790(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined ***)this = &PTR_LAB_0044d6ec;
  InterlockedIncrement((LONG *)&DAT_0045b00c);
  return this;
}


