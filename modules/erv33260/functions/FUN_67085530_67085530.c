/* Module: erv33260.dll
   Function: FUN_67085530
   Address: 67085530
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_67085530(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  
  iVar9 = param_1;
  iVar2 = *(int *)(param_1 + 0x94);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  iVar4 = *(int *)(param_1 + 100);
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  uVar6 = *(undefined4 *)(param_1 + 0x40);
  piVar1 = (int *)(param_1 + 0x48);
  iVar7 = *(int *)(param_1 + 0x5c);
  uVar8 = *(undefined4 *)(param_1 + 0x60);
  cVar12 = *(char *)(*(int *)(param_1 + 0x18) + param_2 * 2);
  cVar13 = *(char *)(*(int *)(param_1 + 0x18) + param_2 * 2 + 1);
  cVar10 = (char)(iVar7 * cVar12 + 0x2000 >> 0xe);
  cVar12 = cVar10 - cVar12;
  cVar11 = (char)(iVar7 * cVar13 + 0x2000 >> 0xe);
  cVar13 = cVar11 - cVar13;
  iVar15 = (*(int *)(param_1 + 0x44) * 0x10 - *(int *)(param_1 + 0x74)) * 3 + -7;
  param_1._0_1_ = cVar12;
  if (iVar15 < cVar12) {
    param_1._0_1_ = (char)iVar15;
  }
  iVar15 = *(int *)(iVar9 + 0x74) * -3 + -0x2c;
  cVar12 = (char)param_1;
  if ((char)param_1 < iVar15) {
    param_1._0_1_ = (char)iVar15;
    cVar12 = (char)param_1;
  }
  iVar15 = (*piVar1 * 0x10 - *(int *)(iVar9 + 0x78)) * 3 + -7;
  param_1._0_1_ = cVar13;
  if (iVar15 < cVar13) {
    param_1._0_1_ = (char)iVar15;
  }
  iVar15 = *(int *)(iVar9 + 0x78) * -3 + -0x2c;
  cVar13 = (char)param_1;
  if ((char)param_1 < iVar15) {
    param_1._0_1_ = (char)iVar15;
    cVar13 = (char)param_1;
  }
  param_1 = (int)cVar10 % 3;
  if (param_1 < 0) {
    param_1 = param_1 + 3;
  }
  iVar15 = (int)cVar11 % 3;
  if (iVar15 < 0) {
    iVar15 = iVar15 + 3;
  }
  (**(code **)(iVar2 + (param_1 + iVar15 * 4) * 4))(uVar6,0x10);
  iVar15 = (int)cVar12 % 3;
  if (iVar15 < 0) {
    iVar15 = iVar15 + 3;
  }
  iVar14 = (int)cVar13 % 3;
  if (iVar14 < 0) {
    iVar14 = iVar14 + 3;
  }
  (**(code **)(iVar2 + (iVar15 + iVar14 * 4) * 4))(uVar6,0x10);
  (**(code **)(iVar9 + 0x9c))(uVar5,uVar3,iVar4 + 0x100,0x10,0,iVar7,uVar8);
  return;
}


