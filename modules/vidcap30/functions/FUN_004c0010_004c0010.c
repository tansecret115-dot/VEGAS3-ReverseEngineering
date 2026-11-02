/* Module: vidcap30.exe
   Function: FUN_004c0010
   Address: 004c0010
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004c0010(void)

{
  int iVar1;
  
  iVar1 = ftol();
  if (iVar1 < -0x800000) {
    return -0x800000;
  }
  if (0x7fffff < iVar1) {
    iVar1 = 0x7fffff;
  }
  return iVar1;
}


