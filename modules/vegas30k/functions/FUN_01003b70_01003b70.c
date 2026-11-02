/* Module: vegas30k.dll
   Function: FUN_01003b70
   Address: 01003b70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01003b70(void)

{
  HLOCAL unaff_EBX;
  int unaff_EBP;
  HLOCAL unaff_ESI;
  
  if (unaff_EBX != (HLOCAL)0x0) {
    LocalFree(unaff_EBX);
  }
  if (unaff_ESI != (HLOCAL)0x0) {
    LocalFree(unaff_ESI);
  }
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    (*DAT_0120915c)(*(int *)(unaff_EBP + -0x34));
  }
  return;
}


