/* Module: sfppack3.dll
   Function: DllRegisterServer
   Address: 5cc319b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void DllRegisterServer(void)

{
  uint uVar1;
  
                    /* 0x19b0  6  DllRegisterServer */
  uVar1 = FUN_5cc71f12(1);
  if (-1 < (int)uVar1) {
    FUN_5cc7206f();
    return;
  }
  return;
}


