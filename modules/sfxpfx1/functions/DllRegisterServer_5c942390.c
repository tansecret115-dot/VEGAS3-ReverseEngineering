/* Module: sfxpfx1.dll
   Function: DllRegisterServer
   Address: 5c942390
   Source: Ghidra pseudocode (Stage 10 batch) */


void DllRegisterServer(void)

{
  uint uVar1;
  
                    /* 0x2390  6  DllRegisterServer */
  uVar1 = FUN_5c975ed2(1);
  if (-1 < (int)uVar1) {
    FUN_5c97602f();
    return;
  }
  return;
}


