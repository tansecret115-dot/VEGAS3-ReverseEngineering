/* Module: erv23260.dll
   Function: FUN_63800450
   Address: 63800450
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_63800450(void *this,int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(&DAT_6382aa08 + (param_2 >> 4 & 3U) * 4) | param_1 << 2;
  FUN_637fd360(this,*(int *)(&DAT_6382aa18 + uVar1 * 8),*(int *)(&DAT_6382aa1c + uVar1 * 8));
  return;
}


