/* Module: vidpcore.dll
   Function: FUN_5de83d30
   Address: 5de83d30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5de83d30(int param_1,double *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int local_6c;
  code *local_64;
  int local_60;
  
  iVar1 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x3c);
  iVar16 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0x38);
  iVar4 = *(int *)(param_1 + 0x1c);
  iVar5 = *(int *)(param_1 + 0x34);
  local_64 = (code *)&LAB_5debae60;
  if (param_3 == 0x10) {
    local_64 = FUN_5debafb0;
  }
  local_6c = 0;
  dVar8 = param_2[4];
  dVar9 = param_2[5];
  dVar6 = *param_2 * _DAT_5df29f78;
  dVar7 = param_2[1] * _DAT_5df29f78;
  if (0 < iVar3) {
    do {
      fsin(((float10)local_6c / (float10)iVar3) * (float10)dVar6 + (float10)dVar8);
      uVar10 = ftol();
      local_60 = 0;
      iVar15 = iVar16;
      if (0 < iVar5) {
        do {
          fsin(((float10)local_60 / (float10)iVar5) * (float10)dVar7 + (float10)dVar9);
          uVar11 = ftol();
          if ((int)uVar10 < 0) {
            uVar12 = 0;
          }
          else {
            uVar13 = (iVar5 + -2) * 0x4000;
            uVar12 = uVar10;
            if ((int)uVar13 < (int)uVar10) {
              uVar12 = uVar13;
            }
          }
          if ((int)uVar11 < 0) {
            uVar11 = 0;
          }
          else {
            uVar13 = (iVar3 + -2) * 0x4000;
            if ((int)uVar13 < (int)uVar11) {
              uVar11 = uVar13;
            }
          }
          uVar13 = uVar11 & 0x80003fff;
          if ((int)uVar13 < 0) {
            uVar13 = (uVar13 - 1 | 0xffffc000) + 1;
          }
          uVar14 = uVar12 & 0x80003fff;
          if ((int)uVar14 < 0) {
            uVar14 = (uVar14 - 1 | 0xffffc000) + 1;
          }
          (*local_64)(iVar15,((int)(uVar12 + ((int)uVar12 >> 0x1f & 0x3fffU)) >> 0xe) * param_3 +
                             iVar1 + ((int)(((int)uVar11 >> 0x1f & 0x3fffU) + uVar11) >> 0xe) *
                                     iVar2,iVar2,uVar14,uVar13);
          uVar10 = uVar10 + 0x4000;
          local_60 = local_60 + 1;
          iVar15 = iVar15 + param_3;
        } while (local_60 < iVar5);
      }
      iVar16 = iVar16 + iVar4;
      local_6c = local_6c + 1;
    } while (local_6c < iVar3);
  }
  return 0;
}


