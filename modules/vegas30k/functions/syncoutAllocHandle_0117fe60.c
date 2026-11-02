/* Module: vegas30k.dll
   Function: syncoutAllocHandle
   Address: 0117fe60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall syncoutAllocHandle,0 */

void syncoutAllocHandle(void)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  
                    /* 0x17fe60  1441  _syncoutAllocHandle@0 */
  if (DAT_012b0b38 != 0) {
    FUN_01001120();
    return;
  }
  hMem = GlobalAlloc(0x40,0xfc);
  puVar1 = GlobalLock(hMem);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  *puVar1 = 0;
  return;
}


