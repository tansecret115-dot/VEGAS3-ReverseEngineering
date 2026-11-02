/* Module: mp3plug.dll
   Function: FUN_5f718130
   Address: 5f718130
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5f718130(undefined4 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float *in_EAX;
  float10 fVar27;
  float10 fVar28;
  float10 fVar29;
  float10 fVar30;
  float10 fVar31;
  float10 fVar32;
  float10 fVar33;
  float10 fVar34;
  float10 fVar35;
  float10 fVar36;
  
  fVar1 = in_EAX[10];
  fVar2 = in_EAX[5];
  fVar3 = in_EAX[0xd];
  fVar4 = in_EAX[2];
  fVar5 = in_EAX[9];
  fVar6 = in_EAX[6];
  fVar7 = in_EAX[0xe];
  fVar8 = in_EAX[1];
  fVar9 = in_EAX[0xb];
  fVar10 = in_EAX[4];
  fVar21 = fVar1 + fVar2 + fVar3 + fVar4;
  fVar11 = in_EAX[0xc];
  fVar12 = in_EAX[3];
  fVar13 = in_EAX[8];
  fVar14 = in_EAX[7];
  fVar26 = fVar5 + fVar6 + fVar7 + fVar8;
  fVar22 = fVar21 + fVar26;
  fVar15 = in_EAX[0xf];
  fVar16 = *in_EAX;
  fVar23 = fVar9 + fVar10 + fVar11 + fVar12;
  fVar25 = fVar13 + fVar14 + fVar15 + fVar16;
  fVar24 = fVar23 + fVar25;
  *param_2 = fVar22 + fVar24;
  param_2[0x10] = (fVar24 - fVar22) * _DAT_5f7661a8;
  fVar23 = (fVar25 - fVar23) * _DAT_5f7661a0;
  fVar21 = (fVar26 - fVar21) * _DAT_5f7661a4;
  fVar22 = (fVar23 - fVar21) * _DAT_5f7661a8;
  param_2[0x18] = fVar22;
  param_2[8] = fVar22 + fVar21 + fVar23;
  fVar21 = _DAT_5f7661a8;
  fVar7 = ((fVar7 + fVar8) - (fVar5 + fVar6)) * _DAT_5f766194;
  fVar6 = ((fVar15 + fVar16) - (fVar13 + fVar14)) * _DAT_5f766190;
  fVar5 = ((fVar11 + fVar12) - (fVar9 + fVar10)) * _DAT_5f76619c;
  fVar2 = ((fVar3 + fVar4) - (fVar1 + fVar2)) * _DAT_5f766198;
  fVar3 = (fVar6 - fVar5) * _DAT_5f7661a0;
  fVar6 = fVar6 + fVar5;
  fVar1 = (fVar7 - fVar2) * _DAT_5f7661a4;
  fVar7 = fVar7 + fVar2;
  fVar2 = (fVar3 - fVar1) * _DAT_5f7661a8;
  param_2[0x1c] = fVar2;
  fVar1 = fVar3 + fVar1 + fVar2;
  fVar21 = (fVar6 - fVar7) * fVar21;
  param_2[4] = fVar21 + fVar1;
  param_2[0x14] = fVar2 + fVar21;
  param_2[0xc] = fVar6 + fVar7 + fVar1;
  fVar27 = ((float10)*in_EAX - (float10)in_EAX[0xf]) * (float10)_DAT_5f766228;
  fVar28 = ((float10)in_EAX[1] - (float10)in_EAX[0xe]) * (float10)_DAT_5f76622c;
  fVar29 = ((float10)in_EAX[2] - (float10)in_EAX[0xd]) * (float10)_DAT_5f766230;
  fVar30 = ((float10)in_EAX[7] - (float10)in_EAX[8]) * (float10)_DAT_5f766244;
  fVar31 = ((float10)in_EAX[3] - (float10)in_EAX[0xc]) * (float10)_DAT_5f766234;
  fVar32 = ((float10)in_EAX[4] - (float10)in_EAX[0xb]) * (float10)_DAT_5f766238;
  fVar33 = (fVar27 - fVar30) * (float10)_DAT_5f766190;
  dVar17 = (double)(fVar27 + fVar30);
  fVar36 = (fVar31 - fVar32) * (float10)_DAT_5f76619c;
  fVar27 = ((float10)in_EAX[6] - (float10)in_EAX[9]) * (float10)_DAT_5f766240;
  dVar18 = (double)(fVar32 + fVar31);
  fVar32 = (fVar33 - fVar36) * (float10)_DAT_5f7661a0;
  fVar30 = ((float10)in_EAX[5] - (float10)in_EAX[10]) * (float10)_DAT_5f76623c;
  dVar19 = (double)(fVar33 + fVar36);
  fVar31 = (fVar28 - fVar27) * (float10)_DAT_5f766194;
  dVar20 = (double)(fVar27 + fVar28);
  fVar27 = (fVar29 - fVar30) * (float10)_DAT_5f766198;
  fVar29 = fVar29 + fVar30;
  fVar28 = (fVar31 - fVar27) * (float10)_DAT_5f7661a4;
  fVar31 = fVar31 + fVar27;
  fVar27 = ((float10)dVar19 - fVar31) * (float10)_DAT_5f7661a8;
  fVar34 = (fVar32 - fVar28) * (float10)_DAT_5f7661a8;
  fVar28 = fVar32 + fVar28 + fVar34;
  fVar36 = (float10)dVar19 + fVar31 + fVar28;
  fVar28 = fVar28 + fVar27;
  fVar30 = (float10)dVar20 + fVar29;
  fVar31 = (float10)dVar18 + (float10)dVar17;
  fVar27 = fVar27 + fVar34;
  fVar29 = ((float10)dVar20 - fVar29) * (float10)_DAT_5f7661a4;
  fVar35 = (fVar31 - fVar30) * (float10)_DAT_5f7661a8;
  fVar32 = (float10)_DAT_5f7661a8;
  fVar33 = (float10)_DAT_5f7661a0;
  param_2[0xe] = (float)(fVar30 + fVar31 + fVar36);
  fVar33 = ((float10)dVar17 - (float10)dVar18) * fVar33;
  fVar32 = (fVar33 - fVar29) * fVar32;
  fVar29 = fVar33 + fVar29 + fVar32;
  param_2[10] = (float)(fVar36 + fVar29);
  param_2[6] = (float)(fVar29 + fVar28);
  param_2[0x1a] = (float)((float10)(float)fVar34 + fVar32);
  param_2[2] = (float)(fVar28 + fVar35);
  param_2[0x16] = (float)(fVar27 + fVar32);
  param_2[0x12] = (float)(fVar35 + fVar27);
  param_2[0x1e] = (float)fVar34;
  return;
}


