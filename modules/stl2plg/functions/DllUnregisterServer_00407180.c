/* Module: stl2plg.dll
   Function: DllUnregisterServer
   Address: 00407180
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int DllUnregisterServer(void)

{
  int iVar1;
  int iVar2;
  
                    /* 0x7180  5  DllUnregisterServer */
  iVar1 = FUN_004206b0();
  iVar2 = FUN_004206b0();
  if (-1 < iVar1) {
    iVar1 = iVar2;
  }
  iVar2 = FUN_004206b0();
  if (-1 < iVar1) {
    iVar1 = iVar2;
  }
  iVar2 = FUN_004206b0();
  if (-1 < iVar1) {
    iVar1 = iVar2;
  }
  iVar2 = FUN_004206b0();
  if (iVar1 < 0) {
    iVar2 = iVar1;
  }
  return iVar2;
}


