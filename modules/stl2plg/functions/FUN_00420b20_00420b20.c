/* Module: stl2plg.dll
   Function: FUN_00420b20
   Address: 00420b20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00420b20(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_0046bb28;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(&UNK_0046bb2c + iVar2 * 8);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x46c138);
  return 0x80004005;
}


