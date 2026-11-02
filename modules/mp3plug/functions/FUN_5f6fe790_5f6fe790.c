/* Module: mp3plug.dll
   Function: FUN_5f6fe790
   Address: 5f6fe790
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6fe790(int param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  uVar1 = 0;
  piVar6 = (int *)0x0;
  while( true ) {
    if (param_1 == (&DAT_5f747408)[uVar1 * 3]) {
      if (((param_2 == 0) || (param_2 == 1)) || (param_2 == 3)) {
        piVar6 = *(int **)(uVar1 * 0xc + 0x5f74740c);
      }
      else if (param_2 == 2) {
        piVar6 = *(int **)(uVar1 * 0xc + 0x5f747410);
      }
      goto LAB_5f6fe802;
    }
    uVar2 = uVar1 + 1;
    if (8 < uVar2) goto LAB_5f6fe802;
    if (param_1 == (&DAT_5f747408)[uVar2 * 3]) break;
    if (8 < uVar1 + 2) goto LAB_5f6fe802;
    if (param_1 == (&DAT_5f747414)[uVar2 * 3]) {
      if (((param_2 == 0) || (param_2 == 1)) || (param_2 == 3)) {
        piVar6 = *(int **)(uVar2 * 0xc + 0x5f747418);
      }
      else if (param_2 == 2) {
        piVar6 = *(int **)(uVar2 * 0xc + 0x5f74741c);
      }
      goto LAB_5f6fe802;
    }
    uVar1 = uVar1 + 3;
    if (8 < uVar1) goto LAB_5f6fe802;
  }
  if (((param_2 == 0) || (param_2 == 1)) || (param_2 == 3)) {
    piVar6 = *(int **)(uVar2 * 0xc + 0x5f74740c);
  }
  else if (param_2 == 2) {
    piVar6 = *(int **)(uVar2 * 0xc + 0x5f747410);
  }
LAB_5f6fe802:
  if (piVar6 == (int *)0x0) {
    return 1;
  }
  iVar4 = *piVar6;
  iVar3 = 0;
  *param_4 = iVar4;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *(int *)(param_3 + iVar3 * 4) = iVar5;
      iVar5 = iVar5 + piVar6[iVar3 + 1];
      iVar4 = *param_4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  *(int *)(param_3 + iVar4 * 4) = iVar5;
  return 0;
}


