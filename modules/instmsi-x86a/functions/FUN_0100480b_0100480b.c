/* Module: InstMsi-x86a.exe
   Function: FUN_0100480b
   Address: 0100480b
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0100480b(void)

{
  HRSRC hResInfo;
  HGLOBAL hResData;
  
  DAT_0100ade4 = FUN_01003e0b("CABINET",(undefined4 *)0x0,0);
  hResInfo = FindResourceA((HMODULE)0x0,"CABINET",(LPCSTR)0xa);
  hResData = LoadResource((HMODULE)0x0,hResInfo);
  DAT_0100ade0 = LockResource(hResData);
  return DAT_0100ade0 != (LPVOID)0x0;
}


