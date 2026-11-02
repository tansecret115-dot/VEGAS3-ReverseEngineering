/* Module: vidcap30.exe
   Function: FUN_0057b1e0
   Address: 0057b1e0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPVOID FUN_0057b1e0(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = CoTaskMemAlloc(0x48);
  if (pvVar1 == (LPVOID)0x0) {
    return (LPVOID)0x0;
  }
  FUN_0057b210(pvVar1,param_1);
  return pvVar1;
}


