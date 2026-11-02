/* Module: vidcap30.exe
   Function: Unwind@00584858
   Address: 00584858
   Source: Ghidra pseudocode (Stage 10 batch) */


void Unwind_00584858(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  else {
    *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -0x10) + 0x10;
  }
  FUN_0057f2d0();
  return;
}


