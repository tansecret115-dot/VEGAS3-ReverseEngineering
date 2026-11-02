/* Module: vidcap30.exe
   Function: FUN_0042d890
   Address: 0042d890
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0042d890(int param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  
  FUN_0042db80();
  pMem = *(LPCVOID *)(param_1 + 0x2c);
  if (pMem != (LPCVOID)0x0) {
    FUN_0057b680();
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
  }
  return;
}


