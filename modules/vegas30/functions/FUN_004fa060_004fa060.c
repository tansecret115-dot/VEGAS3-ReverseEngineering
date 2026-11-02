/* Module: vegas30.exe
   Function: FUN_004fa060
   Address: 004fa060
   Source: Ghidra pseudocode (Stage 10 batch) */


void * FUN_004fa060(undefined4 param_1,undefined4 param_2,uint param_3,uint *param_4)

{
  void *_Memory;
  int iVar1;
  int *local_10c;
  undefined4 local_108;
  undefined1 local_104 [260];
  
  _Memory = calloc(1,0x80);
  if (_Memory != (void *)0x0) {
    iVar1 = _SfVideoFilterCache_Init_24(_Memory,param_1,param_2,0,0,1);
    if (iVar1 < 0) {
      free(_Memory);
      return (void *)0x0;
    }
    _SfVideoPlugin_GetInterface_12(&DAT_006335c8,&local_10c,*(undefined4 *)((int)_Memory + 0x10));
    if (local_10c != (int *)0x0) {
      param_3 = ((int)param_3 < 0) - 1 & param_3;
      local_108 = 0x104;
      iVar1 = FUN_00449b50(*(undefined4 *)((int)_Memory + 0x10),local_10c,param_3,local_104,
                           &local_108);
      if (-1 < iVar1) {
        FUN_00449cd0(*(undefined4 *)((int)_Memory + 0x10),local_10c,local_104);
        *param_4 = param_3;
      }
      (**(code **)(*local_10c + 8))(local_10c);
      return _Memory;
    }
  }
  return _Memory;
}


