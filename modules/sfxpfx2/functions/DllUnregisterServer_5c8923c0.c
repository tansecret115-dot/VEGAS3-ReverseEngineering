/* Module: sfxpfx2.dll
   Function: DllUnregisterServer
   Address: 5c8923c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall DllUnregisterServer(int *param_1)

{
  int iVar1;
  
                    /* 0x23c0  7  DllUnregisterServer */
  iVar1 = FUN_5c8c7a88(param_1);
  if (-1 < iVar1) {
    FUN_5c8c7802(0);
  }
  return;
}


