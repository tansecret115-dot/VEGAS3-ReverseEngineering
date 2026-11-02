/* Module: sfpaplug.dll
   Function: FUN_00424130
   Address: 00424130
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00424130(int param_1,int param_2,int param_3,float param_4)

{
  int iVar1;
  undefined2 *puVar2;
  double *pdVar3;
  int local_14;
  undefined1 uStack_f;
  
  if (param_4 == (float)_DAT_0044e700) {
    iVar1 = param_3 + -1;
    if (-1 < iVar1) {
      puVar2 = (undefined2 *)(param_2 + iVar1 * 3);
      pdVar3 = (double *)(param_1 + iVar1 * 8);
      do {
        uStack_f = (undefined1)((ushort)*puVar2 >> 8);
        param_3 = param_3 + -1;
        local_14 = (uint)CONCAT21(CONCAT11(*(undefined1 *)puVar2,uStack_f),
                                  *(undefined1 *)(puVar2 + 1)) << 8;
        *pdVar3 = (double)local_14 * _DAT_004536a8;
        puVar2 = (undefined2 *)((int)puVar2 + -3);
        pdVar3 = pdVar3 + -1;
      } while (param_3 != 0);
      return;
    }
  }
  else {
    iVar1 = param_3 + -1;
    if (-1 < iVar1) {
      puVar2 = (undefined2 *)(param_2 + iVar1 * 3);
      pdVar3 = (double *)(param_1 + iVar1 * 8);
      do {
        uStack_f = (undefined1)((ushort)*puVar2 >> 8);
        param_3 = param_3 + -1;
        local_14 = (uint)CONCAT21(CONCAT11(*(undefined1 *)puVar2,uStack_f),
                                  *(undefined1 *)(puVar2 + 1)) << 8;
        *pdVar3 = (double)local_14 * _DAT_004536a8 * (double)param_4;
        puVar2 = (undefined2 *)((int)puVar2 + -3);
        pdVar3 = pdVar3 + -1;
      } while (param_3 != 0);
    }
  }
  return;
}


