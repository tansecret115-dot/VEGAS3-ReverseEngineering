/* Module: vegas30.exe
   Function: FUN_0043f250
   Address: 0043f250
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0043f250(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_005b89b0(DAT_0064b138);
  if (piVar1 == (int *)0x0) {
    return false;
  }
  return 0 < *piVar1;
}


