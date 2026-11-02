/* Module: pngu3266.dll
   Function: FUN_6061e690
   Address: 6061e690
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6061e690(void *this,int param_1)

{
  FUN_60621eb0(this,param_1);
  *(undefined4 *)((int)this + 0x828) = 0;
  *(undefined2 *)((int)this + 0x82c) = 0;
  *(undefined2 *)((int)this + 0x82e) = 0x32;
  *(undefined4 *)((int)this + 0x830) = 0;
  *(undefined ***)this = &PTR_FUN_6062d298;
  FUN_606228a0((undefined4 *)((int)this + 0x830));
  return this;
}


