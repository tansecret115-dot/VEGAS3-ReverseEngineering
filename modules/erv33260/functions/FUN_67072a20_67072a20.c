/* Module: erv33260.dll
   Function: FUN_67072a20
   Address: 67072a20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_67072a20(int param_1,int param_2)

{
  return (param_1 + 0xfU & 0xfffffff0) * (param_2 + 0xfU & 0xfffffff0) + 0xfff;
}


