/* Module: sfppack3.dll
   Function: DllUnregisterServer
   Address: 5cc319d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall DllUnregisterServer(int *param_1)

{
  int iVar1;
  
                    /* 0x19d0  7  DllUnregisterServer */
  iVar1 = FUN_5cc72198(param_1);
  if (-1 < iVar1) {
    FUN_5cc71f12(0);
  }
  return;
}


