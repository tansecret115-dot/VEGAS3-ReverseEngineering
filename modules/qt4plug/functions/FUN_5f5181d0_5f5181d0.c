/* Module: qt4plug.dll
   Function: FUN_5f5181d0
   Address: 5f5181d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f5181d0(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -0x7d5;
  iVar2 = FUN_5f580580();
  if (iVar2 != 0) {
    iVar2 = FUN_5f5805e0();
    if (iVar2 != 0) {
      iVar3 = FUN_5f58d770();
      if (iVar3 == 0) {
        sVar1 = FUN_5f577d10();
        iVar3 = (int)sVar1;
      }
      FUN_5f580600();
    }
  }
  return iVar3;
}


