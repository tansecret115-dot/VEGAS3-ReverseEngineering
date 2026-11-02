/* Module: erv23260.dll
   Function: FUN_638003f0
   Address: 638003f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_638003f0(void *this,int param_1)

{
  FUN_637fd360(this,*(int *)(&DAT_6382a9e8 + *(int *)(&DAT_6382aa08 + (param_1 >> 4 & 3U) * 4) * 8),
               *(int *)(&DAT_6382a9ec + *(int *)(&DAT_6382aa08 + (param_1 >> 4 & 3U) * 4) * 8));
  return;
}


