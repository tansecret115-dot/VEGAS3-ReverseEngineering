/* Module: sftrans1.dll
   Function: FUN_004e7250
   Address: 004e7250
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004e76e3) */
/* WARNING: Removing unreachable block (ram,0x004e7479) */
/* WARNING: Removing unreachable block (ram,0x004e7339) */
/* WARNING: Removing unreachable block (ram,0x004e73bb) */
/* WARNING: Removing unreachable block (ram,0x004e749d) */
/* WARNING: Removing unreachable block (ram,0x004e7312) */
/* WARNING: Removing unreachable block (ram,0x004e74e8) */
/* WARNING: Removing unreachable block (ram,0x004e7655) */

void __thiscall FUN_004e7250(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  byte bVar9;
  int *piVar10;
  
  piVar10 = (int *)(param_1 + 0x18);
  piVar8 = (int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x18)) {
    piVar8 = piVar10;
    piVar10 = (int *)(param_1 + 0x10);
  }
  iVar1 = *piVar10;
  if (iVar1 < *param_2) {
    bVar9 = 0;
  }
  else {
    bVar9 = ((param_2[1] <= iVar1) - 1U & 0xfe) + 4;
  }
  iVar2 = *piVar8;
  if (*param_2 <= iVar2) {
    if (iVar2 < param_2[1]) {
      bVar9 = bVar9 | 0x10;
    }
    else {
      bVar9 = bVar9 | 0x20;
    }
  }
  iVar3 = param_2[1];
  iVar6 = (iVar1 - iVar3) + 0x4000;
  iVar4 = piVar10[1];
  iVar7 = (iVar4 - param_2[6]) + 0x4000;
  iVar5 = piVar8[1];
  if (((bVar9 & 4) == 0) || ((bVar9 & 0x20) == 0)) {
    if (((bVar9 & 2) != 0) && ((bVar9 & 0x20) != 0)) {
      param_2[7] = iVar6;
      param_2[8] = iVar7;
      param_2[0xf] = 0x4000;
      param_2[0x10] =
           ((int)(((longlong)(iVar5 - iVar4) * (longlong)(iVar3 - iVar1)) /
                 (longlong)(iVar2 - iVar1)) - param_2[6]) + 0x4000 + iVar4;
      param_2[0x17] = 1;
      return;
    }
    if (((bVar9 & 2) != 0) && ((bVar9 & 0x10) != 0)) {
      param_2[7] = iVar6;
      param_2[8] = iVar7;
      param_2[0xf] = (iVar2 - iVar3) + 0x4000;
      param_2[0x10] = (iVar5 - param_2[6]) + 0x4000;
      param_2[0x17] = 1;
      return;
    }
  }
  param_2[0x17] = 0;
  return;
}


