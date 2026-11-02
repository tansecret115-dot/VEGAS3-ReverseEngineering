/* Module: sfppack2.dll
   Function: DllRegisterServer
   Address: 5ccd19b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void DllRegisterServer(void)

{
  uint uVar1;
  
                    /* 0x19b0  6  DllRegisterServer */
  uVar1 = FUN_5cd3b402(1);
  if (-1 < (int)uVar1) {
    FUN_5cd3b55f();
    return;
  }
  return;
}


