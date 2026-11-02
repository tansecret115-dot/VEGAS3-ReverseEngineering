/* Module: sfs4rw.dll
   Function: FUN_00405f30
   Address: 00405f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00405f30(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_004a52c0;
  do {
    if (param_1 == *piVar1) {
      return *(undefined4 *)(&DAT_004a52c4 + iVar2 * 8);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x4a5318);
  return 0;
}


