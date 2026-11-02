/* Module: rmto3260.dll
   Function: FUN_662fda20
   Address: 662fda20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_662fda20(int param_1,int param_2)

{
  if (param_1 == 0) {
    return 0;
  }
  return ((param_1 + -1) * *(int *)(param_2 + 0x10) + *(int *)(param_2 + 0x14)) /
         *(int *)(param_2 + 0xc) + 1;
}


