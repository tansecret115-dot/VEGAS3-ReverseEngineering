/* Module: sfxpfx2.dll
   Function: DllRegisterServer
   Address: 5c8923a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void DllRegisterServer(void)

{
  uint uVar1;
  
                    /* 0x23a0  6  DllRegisterServer */
  uVar1 = FUN_5c8c7802(1);
  if (-1 < (int)uVar1) {
    FUN_5c8c795f();
    return;
  }
  return;
}


