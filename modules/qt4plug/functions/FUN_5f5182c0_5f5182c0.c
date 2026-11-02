/* Module: qt4plug.dll
   Function: FUN_5f5182c0
   Address: 5f5182c0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5f5182c0(void)

{
  short sVar1;
  int iVar2;
  
  iVar2 = FUN_5f5782f0();
  if (iVar2 != 0) {
    iVar2 = FUN_5f5782f0();
    if (iVar2 != 0) {
      sVar1 = FUN_5f578190();
      return (bool)('\x01' - (sVar1 != 0));
    }
  }
  return false;
}


