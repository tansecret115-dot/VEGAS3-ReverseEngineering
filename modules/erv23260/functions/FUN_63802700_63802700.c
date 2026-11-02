/* Module: erv23260.dll
   Function: FUN_63802700
   Address: 63802700
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_63802700(void *this,int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (param_1 + 0xfU & 0xfffffff0) * (param_2 + 0xfU & 0xfffffff0);
  if ((*(int *)((int)this + 8) == 0x15) || (*(int *)((int)this + 8) == 0x16)) {
    return (uVar1 >> 1) + 0xfff;
  }
  if (uVar1 < 0x6304) {
    return 0x2000;
  }
  if (uVar1 < 0x18c04) {
    return 0x8000;
  }
  return (-(uint)(uVar1 < 0x63004) & 0xffff0000) + 0x20000;
}


