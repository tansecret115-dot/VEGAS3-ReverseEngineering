/* Module: mp3rw.dll
   Function: FUN_00406450
   Address: 00406450
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00406450(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  if (DAT_004a8134 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *DAT_004a8134;
  }
  if (0 < iVar3) {
    piVar2 = (int *)DAT_004a8134[2];
    do {
      if (*(int *)(*piVar2 + 0x398) != 0) {
        iVar1 = iVar1 + 1;
      }
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}


