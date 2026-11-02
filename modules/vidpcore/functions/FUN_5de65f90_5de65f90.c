/* Module: vidpcore.dll
   Function: FUN_5de65f90
   Address: 5de65f90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5de65f90(void)

{
  int iVar1;
  int extraout_ECX;
  
  FUN_5df157d0();
  FUN_5df090f0();
  FUN_5df090f0();
  FUN_5df090f0();
  iVar1 = FUN_5df08950();
  if (iVar1 < 0) {
    FUN_5df09140();
    FUN_5df09140();
    FUN_5df09140();
    return iVar1;
  }
  iVar1 = FUN_5df09170();
  if (((iVar1 != 0) && (iVar1 = FUN_5df09170(), iVar1 != 0)) && (iVar1 = FUN_5df09170(), iVar1 != 0)
     ) {
    if ((*(byte *)(extraout_ECX + 0x80) & 1) == 0) {
      iVar1 = FUN_5debc440();
    }
    else {
      iVar1 = FUN_5debc9b0();
    }
    if ((-1 < iVar1) && (iVar1 = FUN_5dec2830(), -1 < iVar1)) {
      FUN_5df090e0();
    }
    FUN_5df09140();
    FUN_5df09140();
    FUN_5df09140();
    return iVar1;
  }
  FUN_5df09140();
  FUN_5df09140();
  FUN_5df09140();
  return -0x7fffbffb;
}


