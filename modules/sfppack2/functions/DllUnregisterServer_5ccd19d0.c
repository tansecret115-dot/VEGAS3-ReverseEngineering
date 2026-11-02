/* Module: sfppack2.dll
   Function: DllUnregisterServer
   Address: 5ccd19d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall DllUnregisterServer(int *param_1)

{
  int iVar1;
  
                    /* 0x19d0  7  DllUnregisterServer */
  iVar1 = FUN_5cd3b688(param_1);
  if (-1 < iVar1) {
    FUN_5cd3b402(0);
  }
  return;
}


