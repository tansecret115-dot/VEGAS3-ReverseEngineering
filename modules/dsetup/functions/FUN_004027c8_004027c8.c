/* Module: dsetup.dll
   Function: FUN_004027c8
   Address: 004027c8
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_004027c8(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = GetKeyboardType(0);
  if (iVar1 != 7) {
    return false;
  }
  uVar2 = GetKeyboardType(1);
  return (bool)('\x01' - ((uVar2 & 0xd00) != 0xd00));
}


