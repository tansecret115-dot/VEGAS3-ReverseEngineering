/* Module: vegas30k.dll
   Function: _SfLang_DestroyStringTables@4
   Address: 010c56d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfLang_DestroyStringTables_4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *_Memory;
  HGLOBAL pvVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  
                    /* 0xc56d0  1045  _SfLang_DestroyStringTables@4 */
  if ((param_1 != 0) && (*(int **)(param_1 + 0x140) != (int *)0x0)) {
    iVar1 = **(int **)(param_1 + 0x140);
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(*(int *)(param_1 + 0x140) + 8);
        iVar6 = *(int *)(*(int *)(param_1 + 0x140) + 4) * iVar5;
        iVar3 = *(int *)(iVar6 + 4 + iVar2);
        piVar7 = (int *)(iVar6 + iVar2);
        if ((iVar3 != 0) && (iVar3 != *piVar7)) {
          uVar8 = 0;
          if (piVar7[2] != 0) {
            do {
              _Memory = *(void **)(piVar7[1] + uVar8 * 4);
              if (_Memory != (void *)0x0) {
                free(_Memory);
                *(undefined4 *)(piVar7[1] + uVar8 * 4) = 0;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < (uint)piVar7[2]);
          }
          pvVar4 = GlobalHandle((LPCVOID)piVar7[1]);
          GlobalUnlock(pvVar4);
          pvVar4 = GlobalHandle((LPCVOID)piVar7[1]);
          GlobalFree(pvVar4);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
    _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x140),0,0xffffffff,0);
    _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x140));
    *(undefined4 *)(param_1 + 0x140) = 0;
  }
  return;
}


