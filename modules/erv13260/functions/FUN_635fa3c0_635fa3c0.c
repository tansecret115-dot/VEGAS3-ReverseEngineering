/* Module: erv13260.dll
   Function: FUN_635fa3c0
   Address: 635fa3c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_635fa3c0(int param_1,int param_2)

{
  if (param_1 == 3) {
    return (param_2 != 0) + 3;
  }
  if (param_2 != 0) {
    param_1 = 1;
  }
  return param_1;
}


