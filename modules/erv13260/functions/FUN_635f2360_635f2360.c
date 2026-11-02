/* Module: erv13260.dll
   Function: FUN_635f2360
   Address: 635f2360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_635f2360(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  
  uVar1 = param_1 >> 2;
  if (param_2 < 3) {
    uVar1 = uVar1 ^ 0xf;
  }
  FUN_635f20b0(param_3,*(uint *)(&DAT_636056f4 + uVar1 * 8),*(int *)(&DAT_636056f0 + uVar1 * 8));
  return *(undefined4 *)(&DAT_636056f4 + uVar1 * 8);
}


