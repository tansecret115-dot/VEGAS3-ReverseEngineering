/* Module: aviplug.dll
   Function: FUN_5f971bd0
   Address: 5f971bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f971bd0(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  undefined8 uVar10;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar8 = (int *)(param_1 + 8);
  iVar5 = 4;
  do {
    puVar6 = (uint *)*piVar8;
    uVar2 = *puVar6;
    puVar9 = puVar6 + 2;
    *param_2 = (int)(puVar6[1] << 0x17) >> 0x11;
    uVar3 = puVar6[3];
    if (*puVar9 != 0x1556) {
      puVar6 = (uint *)(&DAT_5f9dbc7c + *puVar9 * 4 + (uVar2 & 4) * 0x100);
      do {
        uVar10 = pmaddwd((ulonglong)*puVar6,(ulonglong)uVar3);
        uVar4 = puVar9[2];
        uVar3 = puVar9[3];
        if (puVar6[0x80] == 0) break;
        param_2[puVar6[0x80]] =
             (int)uVar10 >>
             (ulonglong)
             *(uint *)(&DAT_5f9db878 + puVar6[0x40] * 4 + (uVar2 & 3) * 0x10 + iVar1 * 0x40);
        puVar6 = puVar6 + uVar4 + 1;
        puVar9 = puVar9 + 2;
      } while (uVar4 != 0x1556);
    }
    piVar8 = piVar8 + 1;
    param_2 = param_2 + 0x40;
    iVar5 = iVar5 + -1;
    iVar7 = 0;
  } while (iVar5 != 0);
  do {
    puVar6 = (uint *)*piVar8;
    uVar2 = *puVar6;
    puVar9 = puVar6 + 2;
    *param_2 = (int)(puVar6[1] << 0x17) >> 0x11;
    uVar3 = puVar6[3];
    if (*puVar9 != 0x1556) {
      puVar6 = (uint *)(&DAT_5f9dbc7c + *puVar9 * 4 + (uVar2 & 4) * 0x100);
      do {
        uVar10 = pmaddwd((ulonglong)*puVar6,(ulonglong)uVar3);
        uVar4 = puVar9[2];
        uVar3 = puVar9[3];
        if (puVar6[0x80] == 0) break;
        param_2[puVar6[0x80] * 2] =
             (int)uVar10 >>
             (ulonglong)
             *(uint *)(&DAT_5f9db878 + puVar6[0x40] * 4 + (uVar2 & 3) * 0x10 + iVar1 * 0x40);
        puVar6 = puVar6 + uVar4 + 1;
        puVar9 = puVar9 + 2;
      } while (uVar4 != 0x1556);
    }
    iVar7 = iVar7 + 1;
    piVar8 = piVar8 + 1;
    param_2 = param_2 + 1;
    if (1 < iVar7) {
      return;
    }
  } while( true );
}


