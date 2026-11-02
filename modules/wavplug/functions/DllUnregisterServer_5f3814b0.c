/* Module: wavplug.dll
   Function: DllUnregisterServer
   Address: 5f3814b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int DllUnregisterServer(void)

{
  int iVar1;
  int iVar2;
  
                    /* 0x14b0  6  DllUnregisterServer */
  iVar1 = FUN_5f399690();
  iVar2 = FUN_5f399690();
  if (-1 < iVar1) {
    iVar1 = iVar2;
  }
  iVar2 = FUN_5f399690();
  if (iVar1 < 0) {
    iVar2 = iVar1;
  }
  return iVar2;
}


