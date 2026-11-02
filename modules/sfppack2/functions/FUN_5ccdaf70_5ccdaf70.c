/* Module: sfppack2.dll
   Function: FUN_5ccdaf70
   Address: 5ccdaf70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_5ccdaf70(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_EBP;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int unaff_retaddr;
  uint uVar11;
  int local_224;
  int iStack_220;
  int iStack_21c;
  int aiStack_218 [4];
  int local_208 [128];
  int iStack_8;
  int iStack_4;
  
  local_208[0] = param_1;
  (**(code **)(**(int **)(param_1 + 0x2c) + 0xdc))
            (*(int **)(param_1 + 0x2c),local_208 + 2,&local_224);
  FUN_5ccdaf20(aiStack_218 + 3,unaff_EBP);
  iVar9 = 0;
  iStack_21c = 0;
  iStack_220 = iStack_8 * 500;
  aiStack_218[0] = iStack_220 - unaff_retaddr;
  aiStack_218[2] = iStack_220 + unaff_retaddr;
  local_224 = unaff_retaddr * 2 + iStack_220;
  iStack_220 = iStack_220 + unaff_retaddr * -2;
  iVar2 = 0;
  uVar8 = unaff_EBP - 1;
  if (0 < unaff_EBP) {
    piVar10 = aiStack_218 + 3;
    do {
      if (*piVar10 < iStack_220) {
        iVar9 = iVar2;
      }
      if (*piVar10 == iStack_220 - unaff_retaddr) {
        iStack_21c = iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar10 = piVar10 + 2;
    } while (iVar2 < unaff_EBP);
  }
  uVar11 = 0;
  uVar7 = uVar8;
  if (-1 < (int)uVar8) {
    piVar10 = aiStack_218 + uVar8 * 2 + 3;
    uVar3 = uVar8;
    do {
      if (local_224 < *piVar10) {
        uVar7 = uVar3;
      }
      if (*piVar10 == local_224 + unaff_retaddr) {
        uVar11 = uVar3;
      }
      uVar3 = uVar3 - 1;
      piVar10 = piVar10 + -2;
    } while (-1 < (int)uVar3);
  }
  bVar1 = iStack_21c < 1;
  iVar4 = ftol();
  iVar9 = aiStack_218[iVar9 * 2 + 4];
  iVar2 = aiStack_218[uVar7 * 2 + 2];
  iVar5 = ftol();
  if (0 < (int)uVar8) {
    piVar10 = aiStack_218 + uVar8 * 2 + 3;
    do {
      if ((iStack_220 <= *piVar10) && (*piVar10 <= local_224)) {
        FUN_5ccdace0((int)(aiStack_218 + 3),uVar8,(int *)&stack0xfffffdd0);
      }
      uVar8 = uVar8 - 1;
      piVar10 = piVar10 + -2;
    } while (0 < (int)uVar8);
  }
  iVar6 = FUN_5ccdad90(iStack_4);
  if (iStack_8 != 0) {
    FUN_5ccdad20(aiStack_218 + 3,aiStack_218[0],iVar6,(uint *)&stack0xfffffdd0);
  }
  if (iStack_8 != 0x13) {
    FUN_5ccdad20(aiStack_218 + 3,aiStack_218[2],iVar6,(uint *)&stack0xfffffdd0);
  }
  if ((bVar1) && (iStack_8 != 0)) {
    FUN_5ccdad20(aiStack_218 + 3,iStack_220,iVar4 + iVar9,(uint *)&stack0xfffffdd0);
  }
  if (((int)uVar11 < 1) && (iStack_8 != 0x13)) {
    FUN_5ccdad20(aiStack_218 + 3,local_224,iVar5 + iVar2,(uint *)&stack0xfffffdd0);
  }
  if ((iStack_8 == 0) || ((unaff_retaddr == 0xfa && (iStack_8 == 1)))) {
    local_208[0] = local_208[2];
  }
  else if (iStack_8 == 0x13) {
    aiStack_218[unaff_EBP * 2 + 2] = aiStack_218[unaff_EBP * 2];
  }
  FUN_5ccdae50(aiStack_218 + 3,(uint *)&stack0xfffffdd0);
  (**(code **)(**(int **)(aiStack_218[1] + 0x2c) + 0xd8))
            (*(int **)(aiStack_218[1] + 0x2c),aiStack_218 + 3,unaff_EBP);
  return;
}


