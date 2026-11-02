/* Module: vegas30k.dll
   Function: FUN_010861f0
   Address: 010861f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010861f0(uint param_1,undefined4 param_2,int param_3)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  
  puVar1 = *(uint **)(param_1 + 0x34);
  if ((puVar1 == (uint *)0x0) || (*puVar1 == 0)) {
    return 0;
  }
  piVar2 = *(int **)(param_3 + 0x114);
  param_1 = 0;
  do {
    if (piVar2 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar2;
    }
    uVar5 = param_1 & 0xffff;
    if (iVar3 <= (int)uVar5) {
      return 0;
    }
    if (piVar2 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar2;
    }
    if (iVar3 + -1 < (int)uVar5) {
      iVar3 = 0;
    }
    else {
      iVar3 = piVar2[1] * uVar5 + piVar2[2];
    }
    uVar5 = 0;
    for (uVar8 = 0; uVar6 = uVar8 & 0xffff,
        (int)uVar6 < (int)(-(uint)(puVar1 != (uint *)0x0) & *puVar1); uVar8 = uVar8 + 1) {
      if (puVar1 == (uint *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *puVar1;
      }
      if ((int)(uVar4 - 1) < (int)uVar6) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = *(int **)(puVar1[2] + uVar6 * 4);
      }
      uVar5 = uVar5 + *(int *)(*piVar7 + 8);
      if ((*(uint *)(iVar3 + 8) <= uVar5) && (*(int *)(iVar3 + 0x14) + 1U < uVar5)) break;
    }
    param_1 = param_1 + 1;
  } while( true );
}


