/* Module: sftrans1.dll
   Function: FUN_00543220
   Address: 00543220
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00543220(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar1 = ungetc(param_2,*(FILE **)(param_1 + 0x10));
    return iVar1;
  }
  if (0 < *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_2;
}


