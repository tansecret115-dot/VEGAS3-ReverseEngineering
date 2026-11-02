/* Module: pnrs3260.dll
   Function: FUN_606f1f00
   Address: 606f1f00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_606f1f00(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = (param_1 >> 1 & 0xf) * 0xc;
  if (*(uint *)((int)this + iVar1 + 0x14) == param_1) {
    *(undefined4 *)((int)this + 0xdc) = 1;
    *(int *)((int)this + 0xd4) = *(int *)((int)this + 0xd4) + 1;
    return *(undefined4 *)((int)this + iVar1 + 0x10);
  }
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(int *)((int)this + 0xd8) = *(int *)((int)this + 0xd8) + 1;
  return 0;
}


