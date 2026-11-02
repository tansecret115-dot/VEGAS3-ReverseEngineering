/* Module: vidcap30.exe
   Function: FUN_004441a0
   Address: 004441a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004441a0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0042f4b0(param_1,1);
  if (((double)CONCAT44(param_4,param_3) != *(double *)(param_2 + 0x48)) &&
     (_DAT_00589f10 != (double)CONCAT44(param_4,param_3))) {
    *(undefined4 *)(param_2 + 0x48) = param_3;
    *(undefined4 *)(param_2 + 0x4c) = param_4;
    **(uint **)(param_1 + 4) = **(uint **)(param_1 + 4) | 0x80;
  }
  FUN_0042f5d0(param_1,1);
  return;
}


