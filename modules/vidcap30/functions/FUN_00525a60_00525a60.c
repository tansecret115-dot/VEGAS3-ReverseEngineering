/* Module: vidcap30.exe
   Function: FUN_00525a60
   Address: 00525a60
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00525a60(int param_1,int param_2,uint param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    return *(uint *)(param_2 + 8) & param_3;
  }
  return 0;
}


