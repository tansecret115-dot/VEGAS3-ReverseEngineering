/* Module: erv13260.dll
   Function: FUN_635f2240
   Address: 635f2240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_635f2240(uint param_1,int param_2,int *param_3)

{
  uint uVar1;
  
  uVar1 = (param_1 & 3) << 2 | param_2 >> 1 & 1U;
  FUN_635f20b0(param_3,*(uint *)(&DAT_63605594 + uVar1 * 8),*(int *)(&DAT_63605590 + uVar1 * 8));
  return *(undefined4 *)(&DAT_63605594 + uVar1 * 8);
}


