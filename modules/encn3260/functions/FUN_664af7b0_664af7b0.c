/* Module: encn3260.dll
   Function: FUN_664af7b0
   Address: 664af7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664af7b0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = ftol();
  iVar2 = ftol();
  if (iVar2 == iVar1) {
    iVar1 = ftol();
    iVar2 = ftol();
    if (iVar2 == iVar1) {
      iVar1 = ftol();
      iVar2 = ftol();
      if (iVar2 == iVar1) {
        iVar1 = ftol();
        iVar2 = ftol();
        if (iVar2 == iVar1) {
          return 0;
        }
      }
    }
  }
  return 1;
}


