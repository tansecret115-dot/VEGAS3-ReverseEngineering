/* Module: encn3260.dll
   Function: FUN_664b7680
   Address: 664b7680
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_664b7680(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = ftol();
  uVar2 = ftol();
  if (uVar1 == uVar2) {
    uVar1 = ftol();
    uVar2 = ftol();
    if (uVar1 == uVar2) {
      uVar1 = ftol();
      uVar2 = ftol();
      if (uVar1 == uVar2) {
        uVar1 = ftol();
        uVar2 = ftol();
        if (uVar1 == uVar2) {
          return uVar2 & 0xffff0000;
        }
      }
    }
  }
  return CONCAT22((short)(uVar2 >> 0x10),1);
}


