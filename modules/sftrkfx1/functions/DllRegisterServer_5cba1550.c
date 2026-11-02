/* Module: sftrkfx1.dll
   Function: DllRegisterServer
   Address: 5cba1550
   Source: Ghidra pseudocode (Stage 10 batch) */


void DllRegisterServer(void)

{
  uint uVar1;
  
                    /* 0x1550  6  DllRegisterServer */
  uVar1 = FUN_5cbef9a2(1);
  if (-1 < (int)uVar1) {
    FUN_5cbefaff();
    return;
  }
  return;
}


