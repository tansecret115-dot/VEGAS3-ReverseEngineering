/* Module: aviplug.dll
   Function: DllRegisterServer
   Address: 5f931560
   Source: Ghidra pseudocode (Stage 10 batch) */


void DllRegisterServer(void)

{
  uint uVar1;
  
                    /* 0x1560  5  DllRegisterServer */
  uVar1 = FUN_5f982e10(DAT_5f9f40f0);
  if (-1 < (int)uVar1) {
    FUN_5f931340();
    return;
  }
  return;
}


