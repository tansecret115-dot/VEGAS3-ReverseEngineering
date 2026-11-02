/* Module: mcplugrw.dll
   Function: FUN_00406500
   Address: 00406500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_00406500(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (DAT_004a8134 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *DAT_004a8134;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    piVar1 = (int *)DAT_004a8134[2];
    do {
      if (*(int *)(*piVar1 + 0x398) != 0) {
        if (param_1 == iVar4) {
          return (undefined *)(*piVar1 + 4);
        }
        iVar4 = iVar4 + 1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < iVar3);
  }
  return PTR_DAT_004a5318;
}


