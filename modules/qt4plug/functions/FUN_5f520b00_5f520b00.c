/* Module: qt4plug.dll
   Function: FUN_5f520b00
   Address: 5f520b00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f520b00(void)

{
  short sVar1;
  int iVar2;
  
  iVar2 = FUN_5f5782f0();
  if ((iVar2 == 0) && (sVar1 = FUN_5f578250(), sVar1 != 0)) {
    return 0x80004005;
  }
  iVar2 = FUN_5f5782f0();
  if (iVar2 == 0) {
    FUN_5f578250();
  }
  FUN_5f5782f0();
  if (iVar2 == 0) {
    FUN_5f578250();
  }
  return 0;
}


