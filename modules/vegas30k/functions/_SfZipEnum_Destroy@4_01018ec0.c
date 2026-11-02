/* Module: vegas30k.dll
   Function: _SfZipEnum_Destroy@4
   Address: 01018ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * _SfZipEnum_Destroy_4(undefined4 *param_1)

{
  undefined1 *puVar1;
  HGLOBAL pvVar2;
  
                    /* 0x18ec0  1307  _SfZipEnum_Destroy@4 */
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined1 *)FUN_01018dc0(*param_1);
    pvVar2 = GlobalHandle(param_1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(param_1);
    GlobalFree(pvVar2);
    return puVar1;
  }
  return &DAT_80070057;
}


