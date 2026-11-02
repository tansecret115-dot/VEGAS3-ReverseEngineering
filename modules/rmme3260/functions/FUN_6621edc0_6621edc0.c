/* Module: rmme3260.dll
   Function: FUN_6621edc0
   Address: 6621edc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x6621ee09) */

bool __cdecl FUN_6621edc0(int *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  int *piVar11;
  undefined1 *puVar12;
  
  piVar11 = param_1;
  iVar6 = param_1[5];
  iVar7 = *(int *)(param_1[8] + 4);
  iVar8 = *(int *)(param_1[8] + 0xc);
  (**(code **)(*param_1 + 8))(0,0);
  iVar9 = piVar11[5];
  param_1 = (int *)0x4;
  if ((uint)piVar11[6] < iVar9 + 4U) {
    puVar12 = (undefined1 *)(**(code **)(*piVar11 + 0x24))(&param_1);
  }
  else {
    *(int *)(piVar11[8] + 0x14) = *(int *)(piVar11[8] + 0x14) + 1;
    puVar12 = (undefined1 *)piVar11[5];
    piVar11[5] = iVar9 + 4U;
  }
  if ((puVar12 != (undefined1 *)0x0) && (param_1 == (int *)0x4)) {
    uVar2 = puVar12[1];
    uVar3 = *puVar12;
    uVar4 = puVar12[3];
    uVar5 = puVar12[2];
    puVar10 = *(undefined1 **)(piVar11[8] + 0xc);
    if ((puVar10 == puVar12) || ((puVar10 < puVar12 && (puVar12 < (undefined1 *)piVar11[6])))) {
      piVar1 = (int *)(piVar11[8] + 0x14);
      *piVar1 = *piVar1 + -1;
    }
    else {
      (**(code **)(*piVar11 + 0x28))(puVar12);
    }
    (**(code **)(*piVar11 + 8))((iVar7 - iVar8) + iVar6,0);
    return CONCAT22(CONCAT11(uVar3,uVar2),CONCAT11(uVar5,uVar4)) == 0x2e524d46;
  }
  return false;
}


