/* Module: pncrt.dll
   Function: FUN_780077d8
   Address: 780077d8
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_780077d8(void)

{
  DWORD *pDVar1;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + -4) = *(undefined4 *)(unaff_EBP + -0x28);
  pDVar1 = FUN_78009cc0();
  pDVar1[0x1b] = *(DWORD *)(unaff_EBP + -0x1c);
  pDVar1 = FUN_78009cc0();
  pDVar1[0x1c] = *(DWORD *)(unaff_EBP + -0x20);
  if ((((*unaff_EDI == -0x1f928c9d) && (unaff_EDI[4] == 3)) && (unaff_EDI[5] == 0x19930520)) &&
     ((*(int *)(unaff_EBP + -0x24) == 0 && (unaff_EBX != 0)))) {
    _abnormal_termination();
    FUN_78007a80((int)unaff_EDI);
  }
  return;
}


