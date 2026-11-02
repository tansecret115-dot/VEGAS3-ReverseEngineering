/* Module: stl2plg.dll
   Function: FUN_00419af0
   Address: 00419af0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00419af0(int param_1,int param_2,uint param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    return *(uint *)(param_2 + 8) & param_3;
  }
  return 0;
}


