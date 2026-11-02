/* Module: vidcap30.exe
   Function: _SfZipEnum_Destroy@4
   Address: 0052d8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfZipEnum_Destroy_4(undefined4 *param_1)

{
  undefined4 uVar1;
  HGLOBAL pvVar2;
  
                    /* 0x12d8b0  689  _SfZipEnum_Destroy@4 */
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = FUN_0052d7b0(*param_1);
    pvVar2 = GlobalHandle(param_1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(param_1);
    GlobalFree(pvVar2);
    return uVar1;
  }
  return 0x80070057;
}


