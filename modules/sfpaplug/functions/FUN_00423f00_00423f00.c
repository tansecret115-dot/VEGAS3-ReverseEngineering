/* Module: sfpaplug.dll
   Function: FUN_00423f00
   Address: 00423f00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00423f00(int param_1,int param_2,int param_3,float param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  double *pdVar4;
  
  if (param_4 == (float)_DAT_0044e700) {
    iVar2 = param_3 + -1;
    if (-1 < iVar2) {
      puVar3 = (undefined2 *)(param_2 + iVar2 * 2);
      pdVar4 = (double *)(param_1 + iVar2 * 8);
      do {
        uVar1 = *puVar3;
        puVar3 = puVar3 + -1;
        param_3 = param_3 + -1;
        *pdVar4 = (double)(int)CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8)) * _DAT_004536b0;
        pdVar4 = pdVar4 + -1;
      } while (param_3 != 0);
      return;
    }
  }
  else {
    iVar2 = param_3 + -1;
    if (-1 < iVar2) {
      puVar3 = (undefined2 *)(param_2 + iVar2 * 2);
      pdVar4 = (double *)(param_1 + iVar2 * 8);
      do {
        uVar1 = *puVar3;
        puVar3 = puVar3 + -1;
        param_3 = param_3 + -1;
        *pdVar4 = (double)(int)CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8)) * _DAT_004536b0 *
                  (double)param_4;
        pdVar4 = pdVar4 + -1;
      } while (param_3 != 0);
    }
  }
  return;
}


