/* Module: erv23260.dll
   Function: FUN_638002e0
   Address: 638002e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_638002e0(void *this,int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_2 << 2 | param_1 >> 4 & 3U;
  FUN_637fd360(this,*(int *)(&DAT_6382a7d4 + uVar1 * 8),*(int *)(&DAT_6382a7d0 + uVar1 * 8));
  return;
}


