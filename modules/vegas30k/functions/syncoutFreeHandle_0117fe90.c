/* Module: vegas30k.dll
   Function: syncoutFreeHandle
   Address: 0117fe90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall syncoutFreeHandle,4 */

void syncoutFreeHandle(int *param_1)

{
  HGLOBAL pvVar1;
  
                    /* 0x17fe90  1443  _syncoutFreeHandle@4 */
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      FUN_01001130(*param_1);
      return;
    }
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
  }
  return;
}


