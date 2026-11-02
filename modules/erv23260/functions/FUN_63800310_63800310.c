/* Module: erv23260.dll
   Function: FUN_63800310
   Address: 63800310
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_63800310(void *this,int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_2 << 2 | param_1 >> 4 & 3U;
  FUN_637fd360(this,*(int *)(&DAT_6382a78c + uVar1 * 8),*(int *)(&DAT_6382a788 + uVar1 * 8));
  return;
}


