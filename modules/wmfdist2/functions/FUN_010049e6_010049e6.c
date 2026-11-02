/* Module: wmfdist2.exe
   Function: FUN_010049e6
   Address: 010049e6
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_010049e6(void)

{
  HRSRC hResInfo;
  HGLOBAL hResData;
  
  DAT_0100ade4 = FUN_01003fe8("CABINET",(undefined4 *)0x0,0);
  hResInfo = FindResourceA((HMODULE)0x0,"CABINET",(LPCSTR)0xa);
  hResData = LoadResource((HMODULE)0x0,hResInfo);
  DAT_0100ade0 = LockResource(hResData);
  return DAT_0100ade0 != (LPVOID)0x0;
}


