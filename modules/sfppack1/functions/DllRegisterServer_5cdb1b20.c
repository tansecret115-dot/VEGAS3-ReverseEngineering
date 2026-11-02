/* Module: sfppack1.dll
   Function: DllRegisterServer
   Address: 5cdb1b20
   Source: Ghidra pseudocode (Stage 10 batch) */


void DllRegisterServer(void)

{
  uint uVar1;
  
                    /* 0x1b20  6  DllRegisterServer */
  uVar1 = FUN_5cdfc582(1);
  if (-1 < (int)uVar1) {
    FUN_5cdfc6df();
    return;
  }
  return;
}


