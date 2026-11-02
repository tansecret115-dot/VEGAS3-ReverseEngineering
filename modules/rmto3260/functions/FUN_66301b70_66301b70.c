/* Module: rmto3260.dll
   Function: FUN_66301b70
   Address: 66301b70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66301b70(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    assert(s_pNode_66311af4,s_cralist_cpp_66311ad8,0x1ec);
  }
  *param_1 = *piVar1;
  return (int)(piVar1 + 2);
}


