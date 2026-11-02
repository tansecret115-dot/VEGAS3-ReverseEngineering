/* Module: pngu3266.dll
   Function: FUN_6061ed30
   Address: 6061ed30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6061ed30(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 100;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  return;
}


