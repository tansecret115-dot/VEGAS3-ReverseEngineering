/* Module: mp3plug.dll
   Function: FUN_5f6c12f0
   Address: 5f6c12f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f6c12f0(double *param_1,double *param_2)

{
  undefined4 *puVar1;
  double *pdVar2;
  double *pdVar3;
  float10 fVar4;
  float10 fVar5;
  undefined4 in_stack_fffffe60;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 in_stack_fffffe70;
  undefined4 in_stack_fffffe74;
  double dVar8;
  undefined4 in_stack_fffffe78;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 in_stack_fffffe7c;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  double dVar19;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  double adStack_130 [2];
  double adStack_120 [2];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_e8;
  double dStack_c8;
  double dStack_c0;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  double adStack_58 [2];
  double adStack_48 [2];
  double adStack_38 [2];
  double adStack_28 [2];
  double adStack_18 [2];
  
  fVar4 = (float10)_CIpow();
  dStack_c8 = (double)((float10)param_1[2] / SQRT(fVar4));
  fVar4 = SQRT(fVar4) * (float10)param_1[2];
  dStack_c0 = (double)fVar4;
  if ((float10)_DAT_5f735f80 < fVar4) {
    dStack_c0 = 0.49;
  }
  fVar4 = (float10)fptan((float10)dStack_c8 * (float10)_DAT_5f734a88);
  fVar5 = (float10)fptan((float10)dStack_c0 * (float10)_DAT_5f734a88);
  dVar19 = (double)SQRT((fVar5 + fVar5) * (fVar4 + fVar4));
  uStack_e8._4_4_ = (undefined4)((ulonglong)dVar19 >> 0x20);
  uVar10 = uStack_e8._4_4_;
  dVar8 = (double)(((fVar5 + fVar5) - (fVar4 + fVar4)) * (float10)_DAT_5f735f78);
  dVar18 = 0.0;
  uStack_e8._0_4_ = SUB84(dVar19,0);
  uVar13 = (undefined4)uStack_e8;
  uStack_e8 = dVar19;
  dVar19 = dVar8;
  FUN_5f6c4c40(&stack0xfffffe70,uVar13,uVar10);
  puVar1 = (undefined4 *)
           FUN_5f6c1c60(adStack_58,(double)CONCAT44(in_stack_fffffe74,in_stack_fffffe70),
                        (double)CONCAT44(in_stack_fffffe7c,in_stack_fffffe78),dVar19,dVar18);
  pdVar3 = adStack_120;
  uVar9 = 0x5f6c1406;
  pdVar2 = FUN_5f6c1dc0(pdVar3,*puVar1,puVar1[1],puVar1[2],puVar1[3]);
  uVar10 = *(undefined4 *)pdVar2;
  uVar13 = *(undefined4 *)((int)pdVar2 + 4);
  dVar19 = pdVar2[1];
  FUN_5f6c4c40(&stack0xfffffe70,0,0x3ff00000);
  puVar1 = (undefined4 *)
           FUN_5f6c1d10(adStack_130,(double)CONCAT44(in_stack_fffffe74,in_stack_fffffe70),
                        (double)CONCAT44(pdVar3,uVar9),(double)CONCAT44(uVar13,uVar10),dVar19);
  pdVar3 = (double *)&uStack_140;
  uVar9 = 0x5f6c1461;
  FUN_5f6c1b30(pdVar3,*puVar1,puVar1[1],puVar1[2],puVar1[3]);
  dVar19 = (double)CONCAT44(uStack_134,uStack_138);
  uVar10 = uStack_140;
  uVar13 = uStack_13c;
  FUN_5f6c4c40(&stack0xfffffe70,0,0x3ff00000);
  pdVar3 = (double *)
           FUN_5f6c1cd0(adStack_130,(double)CONCAT44(in_stack_fffffe74,in_stack_fffffe70),
                        (double)CONCAT44(pdVar3,uVar9),(double)CONCAT44(uVar13,uVar10),dVar19);
  uVar10 = 0;
  uVar13 = 0;
  dVar19 = dVar8;
  puVar1 = (undefined4 *)FUN_5f6c1c30(adStack_120,dVar8,0.0,*pdVar3,pdVar3[1]);
  uStack_98 = *puVar1;
  uStack_94 = puVar1[1];
  uStack_90 = puVar1[2];
  uStack_8c = puVar1[3];
  dVar18 = (double)CONCAT44(uStack_134,uStack_138);
  FUN_5f6c4c40(&stack0xfffffe70,0,0x3ff00000);
  pdVar3 = (double *)
           FUN_5f6c1d10(adStack_130,dVar19,(double)CONCAT44(uVar13,uVar10),
                        (double)CONCAT44(uStack_13c,uStack_140),dVar18);
  uVar11 = 0;
  uVar14 = 0;
  puVar1 = (undefined4 *)FUN_5f6c1c30(adStack_120,dVar8,0.0,*pdVar3,pdVar3[1]);
  uVar10 = *puVar1;
  uVar13 = puVar1[1];
  uVar9 = puVar1[2];
  uStack_7c = puVar1[3];
  dVar19 = (double)CONCAT44(uStack_8c,uStack_90);
  uVar6 = 0x5f6c15bf;
  uVar16 = uStack_98;
  uVar17 = uStack_94;
  FUN_5f6c4c40(&stack0xfffffe70,0,0x40000000);
  pdVar3 = adStack_130;
  uVar7 = 0x5f6c15c9;
  puVar1 = (undefined4 *)
           FUN_5f6c1d10(pdVar3,dVar8,(double)CONCAT44(uVar14,uVar11),(double)CONCAT44(uVar17,uVar16)
                        ,dVar19);
  uVar16 = *puVar1;
  uVar17 = puVar1[1];
  dVar19 = *(double *)(puVar1 + 2);
  uVar11 = uStack_98;
  uVar14 = uStack_94;
  uVar12 = uStack_90;
  uVar15 = uStack_8c;
  FUN_5f6c4c40(&stack0xfffffe60,0,0x40000000);
  pdVar3 = (double *)
           FUN_5f6c1cd0(adStack_120,(double)CONCAT44(uVar6,in_stack_fffffe60),
                        (double)CONCAT44(pdVar3,uVar7),(double)CONCAT44(uVar14,uVar11),
                        (double)CONCAT44(uVar15,uVar12));
  uVar11 = *(undefined4 *)pdVar3;
  uVar14 = *(undefined4 *)((int)pdVar3 + 4);
  uVar12 = *(undefined4 *)(pdVar3 + 1);
  uVar15 = *(undefined4 *)((int)pdVar3 + 0xc);
  puVar1 = (undefined4 *)
           FUN_5f6c1c60(adStack_58,*pdVar3,pdVar3[1],(double)CONCAT44(uVar17,uVar16),dVar19);
  uStack_78 = *puVar1;
  uStack_74 = puVar1[1];
  uStack_70 = puVar1[2];
  uStack_6c = puVar1[3];
  dVar19 = (double)CONCAT44(uStack_7c,uVar9);
  uVar6 = 0x5f6c16a5;
  uVar16 = uVar10;
  uVar17 = uVar13;
  FUN_5f6c4c40(&stack0xfffffe70,0,0x40000000);
  pdVar3 = adStack_130;
  uVar7 = 0x5f6c16af;
  puVar1 = (undefined4 *)
           FUN_5f6c1d10(pdVar3,(double)CONCAT44(uVar14,uVar11),(double)CONCAT44(uVar15,uVar12),
                        (double)CONCAT44(uVar17,uVar16),dVar19);
  uVar16 = *puVar1;
  uVar17 = puVar1[1];
  dVar19 = *(double *)(puVar1 + 2);
  uVar11 = uStack_7c;
  FUN_5f6c4c40(&stack0xfffffe60,0,0x40000000);
  pdVar3 = (double *)
           FUN_5f6c1cd0(adStack_120,(double)CONCAT44(uVar6,in_stack_fffffe60),
                        (double)CONCAT44(pdVar3,uVar7),(double)CONCAT44(uVar13,uVar10),
                        (double)CONCAT44(uVar11,uVar9));
  pdVar3 = (double *)
           FUN_5f6c1c60(adStack_58,*pdVar3,pdVar3[1],(double)CONCAT44(uVar17,uVar16),dVar19);
  dVar8 = *pdVar3;
  uVar10 = *(undefined4 *)(pdVar3 + 1);
  uStack_5c = *(undefined4 *)((int)pdVar3 + 0xc);
  uVar13 = *(undefined4 *)pdVar3;
  uVar9 = *(undefined4 *)((int)pdVar3 + 4);
  dVar19 = pdVar3[1];
  pdVar3 = FUN_5f6c1d50(adStack_130,uStack_78,uStack_74,uStack_70,uStack_6c);
  FUN_5f6c1d10((double *)&uStack_100,*pdVar3,pdVar3[1],(double)CONCAT44(uVar9,uVar13),dVar19);
  FUN_5f6c1c30((double *)&uStack_110,(double)CONCAT44(uStack_74,uStack_78),
               (double)CONCAT44(uStack_6c,uStack_70),dVar8,(double)CONCAT44(uStack_5c,uVar10));
  *param_2 = -(double)CONCAT44(uStack_fc,uStack_100);
  param_2[1] = -(double)CONCAT44(uStack_10c,uStack_110);
  FUN_5f6c1c10((double *)&uStack_150,(dStack_c0 + dStack_c8) * _DAT_5f734a88);
  dVar19 = (double)CONCAT44(uStack_104,uStack_108);
  puVar1 = (undefined4 *)
           FUN_5f6c1c30(adStack_130,(double)CONCAT44(uStack_14c,uStack_150),
                        (double)CONCAT44(uStack_144,uStack_148),
                        (double)CONCAT44(uStack_fc,uStack_100),(double)CONCAT44(uStack_f4,uStack_f8)
                       );
  uVar10 = *puVar1;
  uVar13 = puVar1[1];
  uVar9 = puVar1[2];
  uVar16 = puVar1[3];
  pdVar3 = (double *)
           FUN_5f6c1c30(adStack_120,(double)CONCAT44(uStack_14c,uStack_150),
                        (double)CONCAT44(uStack_144,uStack_148),
                        (double)CONCAT44(uStack_14c,uStack_150),
                        (double)CONCAT44(uStack_144,uStack_148));
  pdVar3 = (double *)
           FUN_5f6c1cd0(adStack_58,*pdVar3,pdVar3[1],(double)CONCAT44(uVar13,uVar10),
                        (double)CONCAT44(uVar16,uVar9));
  uVar10 = *(undefined4 *)pdVar3;
  uVar13 = *(undefined4 *)((int)pdVar3 + 4);
  uVar9 = *(undefined4 *)(pdVar3 + 1);
  uVar16 = *(undefined4 *)((int)pdVar3 + 0xc);
  puVar1 = (undefined4 *)
           FUN_5f6c1cd0(adStack_48,*pdVar3,pdVar3[1],(double)CONCAT44(uStack_10c,uStack_110),dVar19)
  ;
  uVar17 = *puVar1;
  uVar11 = puVar1[1];
  dVar19 = *(double *)(puVar1 + 2);
  FUN_5f6c4c40(&stack0xfffffe70,0,0x3ff00000);
  pdVar3 = (double *)
           FUN_5f6c1c30(adStack_18,(double)CONCAT44(uStack_14c,uStack_150),
                        (double)CONCAT44(uStack_144,uStack_148),
                        (double)CONCAT44(uStack_14c,uStack_150),
                        (double)CONCAT44(uStack_144,uStack_148));
  pdVar3 = (double *)
           FUN_5f6c1d10(adStack_28,*pdVar3,pdVar3[1],(double)CONCAT44(uVar13,uVar10),
                        (double)CONCAT44(uVar16,uVar9));
  pdVar3 = (double *)
           FUN_5f6c1c60(adStack_38,*pdVar3,pdVar3[1],(double)CONCAT44(uVar11,uVar17),dVar19);
  uVar10 = *(undefined4 *)pdVar3;
  uVar13 = *(undefined4 *)((int)pdVar3 + 4);
  uStack_a0 = *(undefined4 *)(pdVar3 + 1);
  uStack_9c = *(undefined4 *)((int)pdVar3 + 0xc);
  uVar9 = FUN_5f6c1d90(*pdVar3,pdVar3[1],0.0,0.0);
  if ((char)uVar9 == '\0') {
    fVar4 = FUN_5f6c1cb0(uVar10,uVar13,uStack_a0,uStack_9c);
    param_2[0x1a] = (double)((float10)_DAT_5f72c7c8 / fVar4);
  }
  else {
    *(undefined4 *)(param_2 + 0x1a) = 0;
    *(undefined4 *)((int)param_2 + 0xd4) = 0x3ff00000;
  }
  if (_DAT_5f72c9d8 < *param_1) {
    fVar4 = (float10)_CIpow();
  }
  else {
    fVar4 = (float10)_DAT_5f7349d0;
  }
  param_2[0x1a] = (double)((fVar4 - (float10)_DAT_5f72c7c8) * (float10)param_2[0x1a]);
  return;
}


