/* Module: sfxpfx1.dll
   Function: DllUnregisterServer
   Address: 5c9423b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall DllUnregisterServer(int *param_1)

{
  int iVar1;
  
                    /* 0x23b0  7  DllUnregisterServer */
  iVar1 = FUN_5c976158(param_1);
  if (-1 < iVar1) {
    FUN_5c975ed2(0);
  }
  return;
}


