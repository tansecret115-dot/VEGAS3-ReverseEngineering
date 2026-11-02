/* Module: sfcdi.dll
   Function: FUN_5bf4e020
   Address: 5bf4e020
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf4e020(int param_1,byte *param_2,int *param_3)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  char *pcVar11;
  uint local_8;
  byte *local_4;
  
  pbVar4 = param_2;
  iVar10 = 0;
  iVar8 = 0;
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    iVar8 = **(int **)(param_1 + 4);
  }
  iVar8 = iVar8 * 8 + 8;
  param_2 = (byte *)0x0;
  pbVar3 = pbVar4;
  while( true ) {
    pbVar9 = pbVar3 + 8;
    piVar2 = *(int **)(param_1 + 4);
    if (piVar2 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar2;
    }
    if (iVar7 <= (int)param_2) break;
    if (piVar2 == (int *)0x0) {
      iVar10 = 0;
    }
    else {
      iVar10 = *piVar2;
    }
    if (((int)param_2 < 0) || (iVar10 + -1 < (int)param_2)) {
      pcVar11 = (char *)0x0;
    }
    else {
      pcVar11 = *(char **)(piVar2[2] + (int)param_2 * 4);
    }
    bVar5 = *pbVar9 & 0x7f | *pcVar11 << 7;
    bVar1 = pbVar3[9];
    *pbVar9 = bVar5;
    *pbVar9 = (pcVar11[4] ^ bVar5) & 0xf ^ bVar5;
    bVar5 = (pcVar11[5] & 3U) << 4;
    local_4 = pbVar4 + iVar8;
    pbVar3[9] = bVar5 | bVar1 & 0xcf;
    pbVar3[9] = pcVar11[6] << 6 | bVar5 | bVar1 & 0xf;
    *(undefined2 *)(pbVar3 + 10) = *(undefined2 *)(pcVar11 + 8);
    *(int *)(pbVar3 + 0xc) = iVar8;
    FUN_5bf52810(*(int *)(pcVar11 + 0xc),(int *)&local_8);
    iVar10 = FUN_5bf528d0(*(uint *)(pcVar11 + 0xc),(int *)&local_4,&local_8);
    if (iVar10 < 0) break;
    FUN_5bf4cc90((int)pbVar9);
    iVar8 = iVar8 + local_8;
    param_2 = param_2 + 1;
    pbVar3 = pbVar9;
  }
  uVar6 = 0;
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    uVar6 = (undefined2)**(undefined4 **)(param_1 + 4);
  }
  *(undefined2 *)pbVar4 = uVar6;
  *(int *)(pbVar4 + 4) = iVar8 + -1;
  FUN_5bf4cc70(pbVar4);
  *param_3 = iVar8;
  return iVar10;
}


