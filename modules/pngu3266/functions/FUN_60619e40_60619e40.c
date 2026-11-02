/* Module: pngu3266.dll
   Function: FUN_60619e40
   Address: 60619e40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_60619e40(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 >> 1 & 0xf;
  if (*(uint *)((int)this + uVar1 * 0xc + 0x14) == param_1) {
    *(undefined4 *)((int)this + uVar1 * 0xc + 0x14) = 0;
    *(undefined4 *)((int)this + uVar1 * 0xc + 0x10) = 0;
  }
  return;
}


