/* Module: sftrkfx1.dll
   Function: DllUnregisterServer
   Address: 5cba1570
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall DllUnregisterServer(int *param_1)

{
  int iVar1;
  
                    /* 0x1570  7  DllUnregisterServer */
  iVar1 = FUN_5cbefc28(param_1);
  if (-1 < iVar1) {
    FUN_5cbef9a2(0);
  }
  return;
}


