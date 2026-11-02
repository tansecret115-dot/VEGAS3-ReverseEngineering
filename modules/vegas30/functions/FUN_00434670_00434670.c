/* Module: vegas30.exe
   Function: FUN_00434670
   Address: 00434670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00434670(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    if ((DAT_0064762c != 0) && (*(int *)(DAT_0064762c + 0xa0) != 0)) {
      FUN_0044c6f0(*(int *)(DAT_0064762c + 0xa0));
    }
    _SfVideoPlugin_DestroyCacheList_4(*param_1);
    *param_1 = 0;
    uVar1 = 1;
  }
  return uVar1;
}


