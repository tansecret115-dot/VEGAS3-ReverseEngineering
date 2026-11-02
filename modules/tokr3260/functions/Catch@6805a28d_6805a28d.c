/* Module: tokr3260.dll
   Function: Catch@6805a28d
   Address: 6805a28d
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 Catch_6805a28d(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  return 0x6805a273;
}


