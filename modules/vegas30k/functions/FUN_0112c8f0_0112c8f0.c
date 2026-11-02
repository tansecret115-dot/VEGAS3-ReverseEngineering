/* Module: vegas30k.dll
   Function: FUN_0112c8f0
   Address: 0112c8f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0112c8f0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar1 = *(int *)*param_1;
  if ((param_1[4] == 0) && (iVar3 = FUN_010128d0(param_1,0,0,0x96,0,0,0x20,0), iVar3 < 0)) {
    return;
  }
  iVar3 = 0;
  while( true ) {
    piVar2 = *(int **)(iVar1 + 0x214);
    if (piVar2 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar2;
    }
    if (iVar5 <= iVar3) break;
    if (piVar2 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar2;
    }
    if ((iVar3 < 0) || (iVar5 + -1 < iVar3)) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(piVar2[2] + iVar3 * 4);
    }
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    *(uint *)(*(int *)(iVar5 + 0x34c) + 0x18) =
         (-(uint)(*(uint *)(*(int *)(iVar5 + 0x34c) + 8) < 0x80000) & 0xfffffffe) + 4;
    *(uint *)(*(int *)(iVar5 + 0x34c) + 0x1c) = *(uint *)(*(int *)(iVar5 + 0x34c) + 0x1c) | 2;
    uVar4 = __aulldiv(*(undefined4 *)(iVar5 + 0x330),*(undefined4 *)(iVar5 + 0x334),0x930,0);
    iVar5 = FUN_010128d0(param_1,0x11,iVar5,uVar4,uVar6,uVar7,uVar8,uVar9);
    if (iVar5 < 0) break;
    iVar3 = iVar3 + 1;
  }
  param_1[0xd] = &LAB_0112c800;
  return;
}


