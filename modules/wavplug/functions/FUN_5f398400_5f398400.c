/* Module: wavplug.dll
   Function: FUN_5f398400
   Address: 5f398400
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f398400(int param_1)

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
    FUN_5f3a1850(*(int **)(param_1 + 0x140),0,-1,0);
    FUN_5f3a2ac0(*(int **)(param_1 + 0x140));
    *(undefined4 *)(param_1 + 0x140) = 0;
  }
  return;
}


