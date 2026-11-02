/* Module: wmfplug2.dll
   Function: DllRegisterServer
   Address: 00401100
   Source: Ghidra pseudocode (Stage 10 batch) */


void DllRegisterServer(void)

{
  uint uVar1;
  
                    /* 0x1100  44  DllRegisterServer */
  uVar1 = FUN_00421bb0(DAT_00489d50);
  if (-1 < (int)uVar1) {
    FUN_00421bb0(DAT_00489d50);
  }
  return;
}


