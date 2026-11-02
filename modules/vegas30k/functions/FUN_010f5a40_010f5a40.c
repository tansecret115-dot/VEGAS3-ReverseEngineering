/* Module: vegas30k.dll
   Function: FUN_010f5a40
   Address: 010f5a40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010f5a40(double *param_1,double *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float10 fVar4;
  float10 fVar5;
  undefined4 in_stack_fffffe60;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 in_stack_fffffe70;
  undefined4 in_stack_fffffe74;
  double dVar9;
  undefined4 in_stack_fffffe78;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 in_stack_fffffe7c;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  undefined8 uVar20;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  double dStack_e8;
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
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [20];
  
  fVar4 = (float10)_CIpow();
  dStack_c8 = (double)((float10)param_1[2] / SQRT(fVar4));
  fVar4 = SQRT(fVar4) * (float10)param_1[2];
  dStack_c0 = (double)fVar4;
  if ((float10)_DAT_011e23c0 < fVar4) {
    dStack_c0 = 0.49;
  }
  fVar4 = (float10)fptan((float10)dStack_c8 * (float10)_DAT_011dbdb8);
  fVar5 = (float10)fptan((float10)dStack_c0 * (float10)_DAT_011dbdb8);
  dStack_e8 = (double)SQRT((fVar5 + fVar5) * (fVar4 + fVar4));
  dVar9 = (double)(((fVar5 + fVar5) - (fVar4 + fVar4)) * (float10)_DAT_011e32e0);
  uVar20 = 0;
  dVar19 = dVar9;
  FUN_010f9390(dStack_e8);
  puVar2 = (undefined4 *)
           FUN_010f63b0(auStack_58,in_stack_fffffe70,in_stack_fffffe74,in_stack_fffffe78,
                        in_stack_fffffe7c,dVar19,uVar20);
  puVar8 = auStack_120;
  uVar10 = 0x10f5b56;
  puVar2 = (undefined4 *)FUN_010f6510(puVar8,*puVar2,puVar2[1],puVar2[2],puVar2[3]);
  uVar11 = *puVar2;
  uVar14 = puVar2[1];
  uVar20 = *(undefined8 *)(puVar2 + 2);
  FUN_010f9390(0,0x3ff00000);
  puVar3 = (undefined4 *)
           FUN_010f6460(auStack_130,in_stack_fffffe70,in_stack_fffffe74,uVar10,puVar8,uVar11,uVar14,
                        uVar20);
  puVar2 = &uStack_140;
  uVar10 = 0x10f5bb1;
  FUN_010f6280(puVar2,*puVar3,puVar3[1],puVar3[2],puVar3[3]);
  uVar20 = CONCAT44(uStack_134,uStack_138);
  uVar11 = uStack_140;
  uVar14 = uStack_13c;
  FUN_010f9390(0,0x3ff00000);
  puVar2 = (undefined4 *)
           FUN_010f6420(auStack_130,in_stack_fffffe70,in_stack_fffffe74,uVar10,puVar2,uVar11,uVar14,
                        uVar20);
  uVar11 = 0;
  uVar14 = 0;
  dVar19 = dVar9;
  puVar2 = (undefined4 *)FUN_010f6380(auStack_120,dVar9,0,0,*puVar2,puVar2[1],puVar2[2],puVar2[3]);
  uStack_98 = *puVar2;
  uStack_94 = puVar2[1];
  uStack_90 = puVar2[2];
  uStack_8c = puVar2[3];
  uVar20 = CONCAT44(uStack_134,uStack_138);
  FUN_010f9390(0,0x3ff00000);
  puVar2 = (undefined4 *)FUN_010f6460(auStack_130,dVar19,uVar11,uVar14,uStack_140,uStack_13c,uVar20)
  ;
  uVar12 = 0;
  uVar15 = 0;
  puVar2 = (undefined4 *)FUN_010f6380(auStack_120,dVar9,0,0,*puVar2,puVar2[1],puVar2[2],puVar2[3]);
  uVar11 = *puVar2;
  uVar14 = puVar2[1];
  uVar10 = puVar2[2];
  uStack_7c = puVar2[3];
  uVar20 = CONCAT44(uStack_8c,uStack_90);
  uVar6 = 0x10f5d0f;
  uVar17 = uStack_98;
  uVar18 = uStack_94;
  FUN_010f9390(0,0x40000000);
  puVar8 = auStack_130;
  uVar7 = 0x10f5d19;
  puVar2 = (undefined4 *)FUN_010f6460(puVar8,dVar9,uVar12,uVar15,uVar17,uVar18,uVar20);
  uVar17 = *puVar2;
  uVar18 = puVar2[1];
  uVar20 = *(undefined8 *)(puVar2 + 2);
  uVar12 = uStack_98;
  uVar15 = uStack_94;
  uVar13 = uStack_90;
  uVar16 = uStack_8c;
  FUN_010f9390(0,0x40000000);
  puVar2 = (undefined4 *)
           FUN_010f6420(auStack_120,in_stack_fffffe60,uVar6,uVar7,puVar8,uVar12,uVar15,uVar13,uVar16
                       );
  uVar12 = *puVar2;
  uVar15 = puVar2[1];
  uVar13 = puVar2[2];
  uVar16 = puVar2[3];
  puVar2 = (undefined4 *)FUN_010f63b0(auStack_58,uVar12,uVar15,uVar13,uVar16,uVar17,uVar18,uVar20);
  uStack_78 = *puVar2;
  uStack_74 = puVar2[1];
  uStack_70 = puVar2[2];
  uStack_6c = puVar2[3];
  uVar20 = CONCAT44(uStack_7c,uVar10);
  uVar6 = 0x10f5df5;
  uVar17 = uVar11;
  uVar18 = uVar14;
  FUN_010f9390(0,0x40000000);
  puVar8 = auStack_130;
  uVar7 = 0x10f5dff;
  puVar2 = (undefined4 *)FUN_010f6460(puVar8,uVar12,uVar15,uVar13,uVar16,uVar17,uVar18,uVar20);
  uVar17 = *puVar2;
  uVar18 = puVar2[1];
  uVar20 = *(undefined8 *)(puVar2 + 2);
  uVar12 = uStack_7c;
  FUN_010f9390(0,0x40000000);
  puVar2 = (undefined4 *)
           FUN_010f6420(auStack_120,in_stack_fffffe60,uVar6,uVar7,puVar8,uVar11,uVar14,uVar10,uVar12
                       );
  puVar2 = (undefined4 *)
           FUN_010f63b0(auStack_58,*puVar2,puVar2[1],puVar2[2],puVar2[3],uVar17,uVar18,uVar20);
  uVar11 = *puVar2;
  uVar14 = puVar2[1];
  uVar10 = puVar2[2];
  uStack_5c = puVar2[3];
  uVar17 = *puVar2;
  uVar18 = puVar2[1];
  uVar20 = *(undefined8 *)(puVar2 + 2);
  puVar2 = (undefined4 *)FUN_010f64a0(auStack_130,uStack_78,uStack_74,uStack_70,uStack_6c);
  FUN_010f6460(&uStack_100,*puVar2,puVar2[1],puVar2[2],puVar2[3],uVar17,uVar18,uVar20);
  FUN_010f6380(&uStack_110,uStack_78,uStack_74,uStack_70,uStack_6c,uVar11,uVar14,uVar10,uStack_5c);
  *param_2 = -(double)CONCAT44(uStack_fc,uStack_100);
  param_2[1] = -(double)CONCAT44(uStack_10c,uStack_110);
  FUN_010f6360(&uStack_150,(dStack_c0 + dStack_c8) * _DAT_011dbdb8);
  uVar20 = CONCAT44(uStack_104,uStack_108);
  puVar2 = (undefined4 *)
           FUN_010f6380(auStack_130,uStack_150,uStack_14c,uStack_148,uStack_144,uStack_100,uStack_fc
                        ,uStack_f8,uStack_f4);
  uVar11 = *puVar2;
  uVar14 = puVar2[1];
  uVar10 = puVar2[2];
  uVar17 = puVar2[3];
  puVar2 = (undefined4 *)
           FUN_010f6380(auStack_120,uStack_150,uStack_14c,uStack_148,uStack_144,uStack_150,
                        uStack_14c,uStack_148,uStack_144);
  puVar2 = (undefined4 *)
           FUN_010f6420(auStack_58,*puVar2,puVar2[1],puVar2[2],puVar2[3],uVar11,uVar14,uVar10,uVar17
                       );
  uVar11 = *puVar2;
  uVar14 = puVar2[1];
  uVar10 = puVar2[2];
  uVar17 = puVar2[3];
  puVar2 = (undefined4 *)
           FUN_010f6420(auStack_48,uVar11,uVar14,uVar10,uVar17,uStack_110,uStack_10c,uVar20);
  uVar18 = *puVar2;
  uVar12 = puVar2[1];
  uVar20 = *(undefined8 *)(puVar2 + 2);
  FUN_010f9390(0,0x3ff00000);
  puVar2 = (undefined4 *)
           FUN_010f6380(auStack_18,uStack_150,uStack_14c,uStack_148,uStack_144,uStack_150,uStack_14c
                        ,uStack_148,uStack_144);
  puVar2 = (undefined4 *)
           FUN_010f6460(auStack_28,*puVar2,puVar2[1],puVar2[2],puVar2[3],uVar11,uVar14,uVar10,uVar17
                       );
  puVar2 = (undefined4 *)
           FUN_010f63b0(auStack_38,*puVar2,puVar2[1],puVar2[2],puVar2[3],uVar18,uVar12,uVar20);
  uVar11 = *puVar2;
  uVar14 = puVar2[1];
  uStack_a0 = puVar2[2];
  uStack_9c = puVar2[3];
  cVar1 = FUN_010f64e0(*puVar2,puVar2[1],puVar2[2],puVar2[3],0,0,0,0);
  if (cVar1 == '\0') {
    fVar4 = (float10)FUN_010f6400(uVar11,uVar14,uStack_a0,uStack_9c);
    param_2[0x1a] = (double)((float10)_DAT_011dad58 / fVar4);
  }
  else {
    *(undefined4 *)(param_2 + 0x1a) = 0;
    *(undefined4 *)((int)param_2 + 0xd4) = 0x3ff00000;
  }
  if (_DAT_011e32d8 < *param_1) {
    fVar4 = (float10)_CIpow();
  }
  else {
    fVar4 = (float10)_DAT_011db3f0;
  }
  param_2[0x1a] = (double)((fVar4 - (float10)_DAT_011dad58) * (float10)param_2[0x1a]);
  return;
}


