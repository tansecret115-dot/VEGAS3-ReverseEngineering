/* Module: vegas30k.dll
   Function: _SfVideoPlugin_DestroyCacheList@4
   Address: 01026f20
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfVideoPlugin_DestroyCacheList_4(int *param_1)

{
  int iVar1;
  void *_Memory;
  int iVar2;
  
                    /* 0x26f20  1270  _SfVideoPlugin_DestroyCacheList@4 */
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        _Memory = *(void **)(param_1[2] + iVar2 * 4);
        if (_Memory != (void *)0x0) {
          _SfVideoFilterCache_UnInitView_4(_Memory);
          _SfVideoFilterCache_UnInit_4(_Memory);
          free(_Memory);
          *(undefined4 *)(param_1[2] + iVar2 * 4) = 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
    _SfList_Destroy_4(param_1);
  }
  return;
}


