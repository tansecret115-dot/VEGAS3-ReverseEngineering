/* Module: pncrt.dll
   Function: FUN_7801f980
   Address: 7801f980
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_7801f980(void)

{
  DAT_78040944 = CreateFileA("CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}


