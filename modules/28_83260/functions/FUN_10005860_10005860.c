/* Module: 28_83260.dll
   Function: FUN_10005860
   Address: 10005860
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_10005860(void)

{
  int iVar1;
  
  iVar1 = 10;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = ftol();
  return (float10)*(float *)(&DAT_1000a480 + iVar1 * -4);
}


