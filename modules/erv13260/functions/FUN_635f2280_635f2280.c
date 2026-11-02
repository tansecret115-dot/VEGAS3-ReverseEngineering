/* Module: erv13260.dll
   Function: FUN_635f2280
   Address: 635f2280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_635f2280(uint param_1,uint param_2,int *param_3)

{
  uint uVar1;
  
  uVar1 = param_2 & 7 | (param_1 & 3) << 3;
  FUN_635f20b0(param_3,*(uint *)(&DAT_6360560c + uVar1 * 8),*(int *)(&DAT_63605608 + uVar1 * 8));
  return *(undefined4 *)(&DAT_6360560c + uVar1 * 8);
}


