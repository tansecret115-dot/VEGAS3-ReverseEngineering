/* Module: pngu3266.dll
   Function: FUN_60619f00
   Address: 60619f00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_60619f00(void *this,undefined4 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 >> 1 & 0xf;
  *(uint *)((int)this + uVar1 * 0xc + 0x14) = param_2;
  *(undefined4 *)((int)this + uVar1 * 0xc + 0x10) = param_1;
  return;
}


