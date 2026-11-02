/* Module: vegas30k.dll
   Function: _SfVideoPlugin_DestroyCacheElem@8
   Address: 01026ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfVideoPlugin_DestroyCacheElem_8(int *param_1,int *param_2)

{
  int *_Memory;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  
                    /* 0x26ea0  1269  _SfVideoPlugin_DestroyCacheElem@8 */
  if (param_1 != (int *)0x0) {
    iVar3 = 0;
    if (0 < *param_1) {
      puVar1 = (undefined4 *)param_1[2];
      do {
        _Memory = (int *)*puVar1;
        if (_Memory != (int *)0x0) {
          iVar2 = 4;
          bVar6 = true;
          piVar4 = _Memory;
          piVar5 = param_2;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar6 = *piVar4 == *piVar5;
            piVar4 = piVar4 + 1;
            piVar5 = piVar5 + 1;
          } while (bVar6);
          if (bVar6) {
            _SfVideoFilterCache_UnInit_4(_Memory);
            free(_Memory);
            *(undefined4 *)(param_1[2] + iVar3 * 4) = 0;
            _SfList_DeleteList_16(param_1,iVar3,1,1);
            return 0;
          }
        }
        iVar3 = iVar3 + 1;
        puVar1 = puVar1 + 1;
      } while (iVar3 < *param_1);
    }
  }
  return 1;
}


