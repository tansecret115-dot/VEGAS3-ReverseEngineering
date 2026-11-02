/* Module: pncrt.dll
   Function: FUN_7801f960
   Address: 7801f960
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_7801f960(void)

{
  DAT_78040940 = CreateFileA("CONIN$",0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}


