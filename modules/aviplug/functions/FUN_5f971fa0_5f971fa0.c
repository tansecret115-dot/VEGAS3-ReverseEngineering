/* Module: aviplug.dll
   Function: FUN_5f971fa0
   Address: 5f971fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f971fa0(uint *param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  
  iVar3 = param_3;
  iVar2 = param_2;
  puVar8 = param_1 + 2;
  iVar9 = 0;
  param_3 = 0;
  param_2 = 0;
  iVar1 = (*param_1 >> 2 & 1) * 0x218;
  uVar5 = *puVar8;
  iVar6 = 0;
  if (uVar5 == 0x1556) {
    *param_5 = 0;
    *param_4 = 0;
    return;
  }
  do {
    iVar6 = iVar6 + 1 + uVar5;
    iVar9 = iVar9 + uVar5;
    iVar10 = *(int *)(*(int *)(&DAT_5f9f52cc + iVar1) +
                     *(int *)(*(int *)(&DAT_5f9f52c8 + iVar1) + iVar6 * 4) * 4);
    iVar4 = (int)puVar8[1] / *(int *)(&DAT_5f9dae78 + iVar10 * 4 + (iVar3 + iVar2 * 4) * 0x10);
    uVar5 = puVar8[1] - *(int *)(&DAT_5f9dae78 + iVar10 * 4 + (iVar3 + iVar2 * 4) * 0x10) * iVar4;
    uVar7 = (int)uVar5 >> 0x1f;
    param_3 = param_3 + ((uVar5 ^ uVar7) - uVar7) * (4 - iVar10);
    if (iVar4 == 0) {
      iVar9 = iVar9 + 1;
    }
    else {
      iVar10 = iVar9 * 0x10;
      puVar11 = &DAT_5f9e5288 + iVar10;
      if ((iVar4 < *(int *)(&DAT_5f9e528c + iVar10)) || (*(int *)(&DAT_5f9e5290 + iVar10) < iVar4))
      {
        if ((puVar11 == &DAT_5f9e5288) ||
           ((iVar10 == 0x10 && ((iVar4 < _DAT_5f9e528c || (_DAT_5f9e5290 < iVar4)))))) {
          *param_4 = 0x7fffffff;
          *param_5 = 0x3f4;
          return;
        }
        puVar11 = &DAT_5f9e5288;
        param_2 = param_2 + *(int *)(&DAT_5f9e2744 + (&DAT_5f9e5284)[iVar9 * 4] * 0x10);
      }
      param_2 = param_2 + *(int *)(&DAT_5f9e2744 + (*(int *)(puVar11 + 0xc) + iVar4) * 0x10);
      iVar9 = 0;
    }
    puVar8 = puVar8 + 2;
    uVar5 = *puVar8;
    if (uVar5 == 0x1556) {
      *param_4 = param_3;
      *param_5 = param_2;
      return;
    }
  } while( true );
}


