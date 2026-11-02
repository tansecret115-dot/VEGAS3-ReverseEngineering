/* Module: sftrkfx1.dll
   Function: FUN_5cbb44c0
   Address: 5cbb44c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cbb44c0(int param_1,double *param_2,int param_3)

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
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 in_stack_fffffe78;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 in_stack_fffffe7c;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  double dVar20;
  undefined8 uStack_160;
  undefined4 uStack_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  double adStack_120 [2];
  double adStack_110 [2];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_d8;
  double dStack_b8;
  double dStack_b0;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  double adStack_48 [2];
  double adStack_38 [2];
  double adStack_28 [2];
  double adStack_18 [2];
  
  fVar4 = (float10)_CIpow();
  dStack_b8 = (double)((float10)*(double *)(param_1 + 0x30 + param_3 * 8) / SQRT(fVar4));
  fVar4 = SQRT(fVar4) * (float10)*(double *)(param_1 + 0x30 + param_3 * 8);
  dStack_b0 = (double)fVar4;
  if ((float10)_DAT_5cc04730 < fVar4) {
    dStack_b0 = 0.49;
  }
  uStack_158 = 0;
  fVar4 = (float10)fptan((float10)dStack_b8 * (float10)_DAT_5cc04728);
  uStack_154 = 0;
  fVar5 = (float10)fptan((float10)dStack_b0 * (float10)_DAT_5cc04728);
  dVar20 = (double)SQRT((fVar5 + fVar5) * (fVar4 + fVar4));
  uStack_d8._4_4_ = (undefined4)((ulonglong)dVar20 >> 0x20);
  uVar12 = uStack_d8._4_4_;
  dVar8 = (double)(((fVar5 + fVar5) - (fVar4 + fVar4)) * (float10)_DAT_5cc04720);
  dVar19 = 0.0;
  uStack_d8._0_4_ = SUB84(dVar20,0);
  uStack_160 = dVar8;
  uVar10 = (undefined4)uStack_d8;
  uStack_d8 = dVar20;
  dVar20 = dVar8;
  FUN_5cbb71b0(&stack0xfffffe70,uVar10,uVar12);
  puVar1 = (undefined4 *)
           FUN_5cbb4de0((double *)&uStack_130,(double)CONCAT44(in_stack_fffffe74,in_stack_fffffe70),
                        (double)CONCAT44(in_stack_fffffe7c,in_stack_fffffe78),dVar20,dVar19);
  pdVar3 = adStack_110;
  uVar11 = 0x5cbb45d9;
  pdVar2 = FUN_5cbb4f40(pdVar3,*puVar1,puVar1[1],puVar1[2],puVar1[3]);
  uVar12 = *(undefined4 *)pdVar2;
  uVar10 = *(undefined4 *)((int)pdVar2 + 4);
  dVar20 = pdVar2[1];
  FUN_5cbb71b0(&stack0xfffffe70,0,0x3ff00000);
  puVar1 = (undefined4 *)
           FUN_5cbb4e90(adStack_120,(double)CONCAT44(in_stack_fffffe74,in_stack_fffffe70),
                        (double)CONCAT44(pdVar3,uVar11),(double)CONCAT44(uVar10,uVar12),dVar20);
  pdVar3 = (double *)&uStack_140;
  uVar11 = 0x5cbb4634;
  FUN_5cbb4cb0(pdVar3,*puVar1,puVar1[1],puVar1[2],puVar1[3]);
  dVar20 = (double)CONCAT44(uStack_134,uStack_138);
  uVar12 = uStack_140;
  uVar10 = uStack_13c;
  FUN_5cbb71b0(&stack0xfffffe70,0,0x3ff00000);
  pdVar3 = (double *)
           FUN_5cbb4e50(adStack_120,(double)CONCAT44(in_stack_fffffe74,in_stack_fffffe70),
                        (double)CONCAT44(pdVar3,uVar11),(double)CONCAT44(uVar10,uVar12),dVar20);
  uVar12 = 0;
  uVar15 = uStack_154;
  dVar20 = dVar8;
  puVar1 = (undefined4 *)
           FUN_5cbb4db0(adStack_110,dVar8,(double)((ulonglong)uStack_154 << 0x20),*pdVar3,pdVar3[1])
  ;
  uStack_88 = *puVar1;
  uStack_84 = puVar1[1];
  uStack_80 = puVar1[2];
  uStack_7c = puVar1[3];
  dVar19 = (double)CONCAT44(uStack_134,uStack_138);
  FUN_5cbb71b0(&stack0xfffffe70,0,0x3ff00000);
  pdVar3 = (double *)
           FUN_5cbb4e90(adStack_120,dVar20,(double)CONCAT44(uVar15,uVar12),
                        (double)CONCAT44(uStack_13c,uStack_140),dVar19);
  uVar13 = 0;
  uVar15 = uStack_154;
  puVar1 = (undefined4 *)
           FUN_5cbb4db0(adStack_110,dVar8,(double)((ulonglong)uStack_154 << 0x20),*pdVar3,pdVar3[1])
  ;
  uVar12 = *puVar1;
  uVar10 = puVar1[1];
  uVar11 = puVar1[2];
  uStack_6c = puVar1[3];
  dVar20 = (double)CONCAT44(uStack_7c,uStack_80);
  uVar6 = 0x5cbb4798;
  uVar17 = uStack_88;
  uVar18 = uStack_84;
  FUN_5cbb71b0(&stack0xfffffe70,0,0x40000000);
  pdVar3 = adStack_120;
  uVar7 = 0x5cbb47a2;
  puVar1 = (undefined4 *)
           FUN_5cbb4e90(pdVar3,dVar8,(double)CONCAT44(uVar15,uVar13),(double)CONCAT44(uVar18,uVar17)
                        ,dVar20);
  uVar17 = *puVar1;
  uVar18 = puVar1[1];
  dVar20 = *(double *)(puVar1 + 2);
  uVar13 = uStack_88;
  uVar9 = uStack_84;
  uVar14 = uStack_80;
  uVar16 = uStack_7c;
  FUN_5cbb71b0(&stack0xfffffe60,0,0x40000000);
  pdVar3 = (double *)
           FUN_5cbb4e50(adStack_110,(double)CONCAT44(uVar6,in_stack_fffffe60),
                        (double)CONCAT44(pdVar3,uVar7),(double)CONCAT44(uVar9,uVar13),
                        (double)CONCAT44(uVar16,uVar14));
  uVar13 = *(undefined4 *)pdVar3;
  uVar9 = *(undefined4 *)((int)pdVar3 + 4);
  uVar14 = *(undefined4 *)(pdVar3 + 1);
  uVar16 = *(undefined4 *)((int)pdVar3 + 0xc);
  FUN_5cbb4de0((double *)&uStack_160,*pdVar3,pdVar3[1],(double)CONCAT44(uVar18,uVar17),dVar20);
  dVar20 = (double)CONCAT44(uStack_6c,uVar11);
  uVar6 = 0x5cbb4854;
  uVar17 = uVar12;
  uVar18 = uVar10;
  FUN_5cbb71b0(&stack0xfffffe70,0,0x40000000);
  pdVar3 = adStack_120;
  uVar7 = 0x5cbb485e;
  puVar1 = (undefined4 *)
           FUN_5cbb4e90(pdVar3,(double)CONCAT44(uVar9,uVar13),(double)CONCAT44(uVar16,uVar14),
                        (double)CONCAT44(uVar18,uVar17),dVar20);
  uVar17 = *puVar1;
  uVar18 = puVar1[1];
  dVar20 = *(double *)(puVar1 + 2);
  uVar13 = uStack_6c;
  FUN_5cbb71b0(&stack0xfffffe60,0,0x40000000);
  pdVar3 = (double *)
           FUN_5cbb4e50(adStack_110,(double)CONCAT44(uVar6,in_stack_fffffe60),
                        (double)CONCAT44(pdVar3,uVar7),(double)CONCAT44(uVar10,uVar12),
                        (double)CONCAT44(uVar13,uVar11));
  FUN_5cbb4de0((double *)&uStack_130,*pdVar3,pdVar3[1],(double)CONCAT44(uVar18,uVar17),dVar20);
  dVar20 = (double)CONCAT44(uStack_124,uStack_128);
  uVar12 = uStack_130;
  uVar10 = uStack_12c;
  pdVar3 = FUN_5cbb4ed0(adStack_120,(undefined4)uStack_160,uStack_160._4_4_,uStack_158,uStack_154);
  FUN_5cbb4e90((double *)&uStack_100,*pdVar3,pdVar3[1],(double)CONCAT44(uVar10,uVar12),dVar20);
  FUN_5cbb4db0((double *)&uStack_f0,uStack_160,(double)CONCAT44(uStack_154,uStack_158),
               (double)CONCAT44(uStack_12c,uStack_130),(double)CONCAT44(uStack_124,uStack_128));
  *param_2 = -(double)CONCAT44(uStack_fc,uStack_100);
  param_2[1] = -(double)CONCAT44(uStack_ec,uStack_f0);
  FUN_5cbb4d90((double *)&uStack_150,(dStack_b0 + dStack_b8) * _DAT_5cc04728);
  dVar20 = (double)CONCAT44(uStack_e4,uStack_e8);
  puVar1 = (undefined4 *)
           FUN_5cbb4db0(adStack_120,(double)CONCAT44(uStack_14c,uStack_150),
                        (double)CONCAT44(uStack_144,uStack_148),
                        (double)CONCAT44(uStack_fc,uStack_100),(double)CONCAT44(uStack_f4,uStack_f8)
                       );
  uVar12 = *puVar1;
  uVar10 = puVar1[1];
  uVar11 = puVar1[2];
  uVar17 = puVar1[3];
  pdVar3 = (double *)
           FUN_5cbb4db0(adStack_110,(double)CONCAT44(uStack_14c,uStack_150),
                        (double)CONCAT44(uStack_144,uStack_148),
                        (double)CONCAT44(uStack_14c,uStack_150),
                        (double)CONCAT44(uStack_144,uStack_148));
  pdVar3 = (double *)
           FUN_5cbb4e50((double *)&uStack_130,*pdVar3,pdVar3[1],(double)CONCAT44(uVar10,uVar12),
                        (double)CONCAT44(uVar17,uVar11));
  uVar12 = *(undefined4 *)pdVar3;
  uVar10 = *(undefined4 *)((int)pdVar3 + 4);
  uVar11 = *(undefined4 *)(pdVar3 + 1);
  uVar17 = *(undefined4 *)((int)pdVar3 + 0xc);
  puVar1 = (undefined4 *)
           FUN_5cbb4e50(adStack_18,*pdVar3,pdVar3[1],(double)CONCAT44(uStack_ec,uStack_f0),dVar20);
  uVar18 = *puVar1;
  uVar13 = puVar1[1];
  dVar20 = *(double *)(puVar1 + 2);
  FUN_5cbb71b0(&stack0xfffffe70,0,0x3ff00000);
  pdVar3 = (double *)
           FUN_5cbb4db0(adStack_48,(double)CONCAT44(uStack_14c,uStack_150),
                        (double)CONCAT44(uStack_144,uStack_148),
                        (double)CONCAT44(uStack_14c,uStack_150),
                        (double)CONCAT44(uStack_144,uStack_148));
  pdVar3 = (double *)
           FUN_5cbb4e90(adStack_28,*pdVar3,pdVar3[1],(double)CONCAT44(uVar10,uVar12),
                        (double)CONCAT44(uVar17,uVar11));
  pdVar3 = (double *)
           FUN_5cbb4de0(adStack_38,*pdVar3,pdVar3[1],(double)CONCAT44(uVar13,uVar18),dVar20);
  uStack_160 = 0.0;
  uVar12 = *(undefined4 *)pdVar3;
  uStack_158 = 0;
  uStack_154 = 0;
  uVar10 = *(undefined4 *)((int)pdVar3 + 4);
  uStack_90 = *(undefined4 *)(pdVar3 + 1);
  uStack_8c = *(undefined4 *)((int)pdVar3 + 0xc);
  uVar11 = FUN_5cbb4f10(*pdVar3,pdVar3[1],0.0,0.0);
  if ((char)uVar11 == '\0') {
    fVar4 = FUN_5cbb4e30(uVar12,uVar10,uStack_90,uStack_8c);
    param_2[0xc] = (double)((float10)_DAT_5cc040b8 / fVar4);
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined4 *)((int)param_2 + 100) = 0x3ff00000;
  }
  if (_DAT_5cc04718 < *(double *)(param_1 + 0x10 + param_3 * 8)) {
    fVar4 = (float10)_CIpow();
  }
  else {
    fVar4 = (float10)_DAT_5cc04098;
  }
  param_2[0xc] = (double)((fVar4 - (float10)_DAT_5cc040b8) * (float10)param_2[0xc]);
  return;
}


