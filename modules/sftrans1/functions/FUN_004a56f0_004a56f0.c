/* Module: sftrans1.dll
   Function: FUN_004a56f0
   Address: 004a56f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004a56f0(undefined1 *param_1,undefined4 *param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  int iVar17;
  int iVar18;
  
  pbVar13 = (byte *)param_2[1];
  pbVar14 = (byte *)param_2[2];
  iVar18 = 0x100 - param_4;
  pbVar15 = (byte *)param_2[3];
  pbVar16 = (byte *)*param_2;
  bVar1 = pbVar16[1];
  bVar2 = pbVar13[1];
  iVar17 = 0x100 - param_3;
  bVar3 = pbVar14[1];
  bVar4 = pbVar15[1];
  bVar5 = *pbVar15;
  bVar6 = *pbVar14;
  bVar7 = *pbVar13;
  bVar8 = *pbVar16;
  bVar9 = pbVar16[3];
  bVar10 = pbVar13[3];
  bVar11 = pbVar14[3];
  bVar12 = pbVar15[3];
  param_1[2] = (char)(((uint)pbVar16[2] * param_3 + (uint)pbVar13[2] * iVar17) * param_4 +
                      ((uint)pbVar14[2] * param_3 + (uint)pbVar15[2] * iVar17) * iVar18 >> 0x10);
  param_1[1] = (char)(((uint)bVar1 * param_3 + (uint)bVar2 * iVar17) * param_4 +
                      ((uint)bVar3 * param_3 + (uint)bVar4 * iVar17) * iVar18 >> 0x10);
  *param_1 = (char)(((uint)bVar5 * iVar17 + (uint)bVar6 * param_3) * iVar18 +
                    ((uint)bVar7 * iVar17 + (uint)bVar8 * param_3) * param_4 >> 0x10);
  param_1[3] = (char)(((uint)bVar9 * param_3 + (uint)bVar10 * iVar17) * param_4 +
                      ((uint)bVar11 * param_3 + (uint)bVar12 * iVar17) * iVar18 >> 0x10);
  return;
}


