/* Module: sfppack1.dll
   Function: DllUnregisterServer
   Address: 5cdb1b40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall DllUnregisterServer(int *param_1)

{
  int iVar1;
  
                    /* 0x1b40  7  DllUnregisterServer */
  iVar1 = FUN_5cdfc808(param_1);
  if (-1 < iVar1) {
    FUN_5cdfc582(0);
  }
  return;
}


