/* Module: vidcap30.exe
   Function: Unwind@00584bc8
   Address: 00584bc8
   Source: Ghidra pseudocode (Stage 10 batch) */


void Unwind_00584bc8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  else {
    *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -0x10) + 0x48;
  }
  thunk_FUN_0057d600();
  return;
}


