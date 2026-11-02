/* Module: Setup.exe
   Function: FUN_004033d0
   Address: 004033d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004033d0(void)

{
  FARPROC pFVar1;
  int iVar2;
  undefined1 local_104 [260];
  
  if (((DAT_00446d80 != 0) &&
      (pFVar1 = GetProcAddress(DAT_00446d84,"MsiEnumRelatedProductsA"), pFVar1 != (FARPROC)0x0)) &&
     (iVar2 = (*pFVar1)(&DAT_00447bf0,0,0,local_104), iVar2 == 0)) {
    return 1;
  }
  return 0;
}


