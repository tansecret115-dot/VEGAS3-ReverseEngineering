/* Module: sfcdi.dll
   Function: FUN_5bf51e30
   Address: 5bf51e30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf51e30(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  
  iVar1 = *(int *)*param_1;
  if ((param_1[4] == 0) && (iVar3 = FUN_5bf47a60((int)param_1,0,0,0x96,0,0,0x20,0), iVar3 < 0)) {
    return;
  }
  iVar3 = 0;
  while( true ) {
    piVar2 = *(int **)(iVar1 + 0x214);
    if (piVar2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar2;
    }
    if (iVar4 <= iVar3) break;
    if (piVar2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar2;
    }
    if ((iVar3 < 0) || (iVar4 + -1 < iVar3)) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(piVar2[2] + iVar3 * 4);
    }
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    *(uint *)(*(int *)(iVar4 + 0x34c) + 0x18) =
         (-(uint)(*(uint *)(*(int *)(iVar4 + 0x34c) + 8) < 0x80000) & 0xfffffffe) + 4;
    *(uint *)(*(int *)(iVar4 + 0x34c) + 0x1c) = *(uint *)(*(int *)(iVar4 + 0x34c) + 0x1c) | 2;
    uVar5 = __aulldiv(*(uint *)(iVar4 + 0x330),*(uint *)(iVar4 + 0x334),0x930,0);
    iVar4 = FUN_5bf47a60((int)param_1,0x11,iVar4,(int)uVar5,uVar6,uVar7,uVar8,uVar9);
    if (iVar4 < 0) break;
    iVar3 = iVar3 + 1;
  }
  param_1[0xd] = &LAB_5bf51d40;
  return;
}


