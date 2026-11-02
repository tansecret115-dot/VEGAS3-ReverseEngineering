/* Module: rmbe3260.dll
   Function: FUN_66058ad0
   Address: 66058ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66058ad0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    assert(s_pNode_6606f474,s_cralist_cpp_6606f458,0x1ec);
  }
  *param_1 = *piVar1;
  return (int)(piVar1 + 2);
}


