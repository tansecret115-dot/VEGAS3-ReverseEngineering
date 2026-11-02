/* Module: rmme3260.dll
   Function: FUN_66244c00
   Address: 66244c00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66244c00(void)

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


