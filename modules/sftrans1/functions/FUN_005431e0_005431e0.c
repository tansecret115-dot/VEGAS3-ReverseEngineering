/* Module: sftrans1.dll
   Function: FUN_005431e0
   Address: 005431e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_005431e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar1 = getc(*(FILE **)(param_1 + 0x10));
    return iVar1;
  }
  iVar1 = -1;
  if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 8)) {
    iVar2 = *(int *)(param_1 + 0xc) + 1;
    iVar1 = (int)*(char *)(*(int *)(param_1 + 4) + -1 + iVar2);
    *(int *)(param_1 + 0xc) = iVar2;
  }
  return iVar1;
}


