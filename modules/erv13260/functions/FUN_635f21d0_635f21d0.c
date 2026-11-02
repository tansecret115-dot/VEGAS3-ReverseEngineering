/* Module: erv13260.dll
   Function: FUN_635f21d0
   Address: 635f21d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_635f21d0(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_1;
  if (0x1f < param_1) {
    iVar1 = 0x40 - param_1;
  }
  FUN_635f20b0(param_2,*(uint *)(&DAT_6360548c + iVar1 * 8),*(int *)(&DAT_63605488 + iVar1 * 8));
  if (param_1 == 0) {
    return *(int *)(&DAT_6360548c + iVar1 * 8);
  }
  FUN_635f20b0(param_2,1,(uint)(0x1f < param_1));
  return *(int *)(&DAT_6360548c + iVar1 * 8) + 1;
}


