/* Module: vegas30k.dll
   Function: _SfVideoPlugin_CreateCacheList@4
   Address: 01026e70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * _SfVideoPlugin_CreateCacheList_4(int param_1)

{
  undefined1 *puVar1;
  
                    /* 0x26e70  1267  _SfVideoPlugin_CreateCacheList@4 */
  if (param_1 == 0) {
    return &DAT_80070057;
  }
  puVar1 = (undefined1 *)_SfList_CreateExZ_32(param_1,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
  return puVar1;
}


