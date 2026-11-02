/* Module: 28_83260.dll
   Function: FUN_10002200
   Address: 10002200
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002200(int param_1,float *param_2,int param_3,int param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  float *pfVar31;
  float *pfVar32;
  float *pfVar33;
  float *pfVar34;
  float *pfVar35;
  float *pfVar36;
  float *pfVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float *pfVar79;
  int iVar80;
  float *pfVar81;
  float *pfVar82;
  int iVar83;
  int iVar84;
  
  iVar80 = param_5 - param_4;
  if (iVar80 == 0x28) {
    fVar38 = *(float *)(param_1 + param_4 * 4);
    fVar78 = *(float *)(param_1 + 0x80 + param_4 * 4);
    pfVar79 = (float *)(param_1 + 0x80 + param_4 * 4);
    fVar39 = *(float *)(param_1 + 4 + param_4 * 4);
    fVar40 = *(float *)(param_1 + 8 + param_4 * 4);
    fVar41 = *(float *)(param_1 + 0xc + param_4 * 4);
    fVar42 = *(float *)(param_1 + 0x10 + param_4 * 4);
    fVar43 = *(float *)(param_1 + 0x14 + param_4 * 4);
    fVar44 = *(float *)(param_1 + 0x18 + param_4 * 4);
    fVar45 = *(float *)(param_1 + 0x1c + param_4 * 4);
    fVar46 = *(float *)(param_1 + 0x20 + param_4 * 4);
    fVar47 = *(float *)(param_1 + 0x24 + param_4 * 4);
    fVar48 = *(float *)(param_1 + 0x28 + param_4 * 4);
    fVar49 = *(float *)(param_1 + 0x2c + param_4 * 4);
    fVar50 = *(float *)(param_1 + 0x30 + param_4 * 4);
    fVar51 = *(float *)(param_1 + 0x34 + param_4 * 4);
    fVar52 = *(float *)(param_1 + 0x38 + param_4 * 4);
    fVar53 = *(float *)(param_1 + 0x3c + param_4 * 4);
    fVar54 = *(float *)(param_1 + 0x40 + param_4 * 4);
    fVar55 = *(float *)(param_1 + 0x44 + param_4 * 4);
    fVar56 = *(float *)(param_1 + 0x48 + param_4 * 4);
    fVar57 = *(float *)(param_1 + 0x4c + param_4 * 4);
    fVar58 = *(float *)(param_1 + 0x50 + param_4 * 4);
    fVar59 = *(float *)(param_1 + 0x54 + param_4 * 4);
    fVar60 = *(float *)(param_1 + 0x58 + param_4 * 4);
    fVar61 = *(float *)(param_1 + 0x5c + param_4 * 4);
    fVar62 = *(float *)(param_1 + 0x60 + param_4 * 4);
    fVar63 = *(float *)(param_1 + 100 + param_4 * 4);
    fVar64 = *(float *)(param_1 + 0x68 + param_4 * 4);
    fVar65 = *(float *)(param_1 + 0x6c + param_4 * 4);
    fVar66 = *(float *)(param_1 + 0x70 + param_4 * 4);
    fVar67 = *(float *)(param_1 + 0x74 + param_4 * 4);
    fVar68 = *(float *)(param_1 + 0x78 + param_4 * 4);
    fVar69 = *(float *)(param_1 + 0x7c + param_4 * 4);
    fVar70 = *(float *)(param_1 + 0x84 + param_4 * 4);
    fVar71 = *(float *)(param_1 + 0x88 + param_4 * 4);
    fVar72 = *(float *)(param_1 + 0x8c + param_4 * 4);
    fVar73 = *(float *)(param_1 + 0x90 + param_4 * 4);
    fVar74 = *(float *)(param_1 + 0x94 + param_4 * 4);
    fVar75 = *(float *)(param_1 + 0x98 + param_4 * 4);
    fVar76 = *(float *)(param_1 + 0x9c + param_4 * 4);
    if (-1 < param_3) {
      iVar80 = param_3 + 1;
      do {
        pfVar82 = pfVar79 + -0xc;
        pfVar81 = pfVar79 + -1;
        pfVar1 = pfVar79 + -0xd;
        pfVar2 = pfVar79 + -0xe;
        pfVar3 = pfVar79 + -9;
        pfVar4 = pfVar79 + -0xf;
        pfVar5 = pfVar79 + -8;
        pfVar6 = pfVar79 + -10;
        pfVar7 = pfVar79 + -0xb;
        pfVar8 = pfVar79 + -6;
        pfVar9 = pfVar79 + -4;
        pfVar10 = pfVar79 + -7;
        pfVar11 = pfVar79 + -5;
        pfVar12 = pfVar79 + -2;
        pfVar13 = pfVar79 + -3;
        pfVar14 = pfVar79 + 1;
        pfVar15 = pfVar79 + -0x19;
        pfVar16 = pfVar79 + -0x18;
        pfVar17 = pfVar79 + -0x1a;
        pfVar18 = pfVar79 + -0x1b;
        pfVar19 = pfVar79 + -0x1c;
        pfVar20 = pfVar79 + -0x1d;
        pfVar21 = pfVar79 + -0x1e;
        fVar77 = *pfVar79;
        pfVar22 = pfVar79 + -0x1f;
        pfVar23 = pfVar79 + -0x12;
        pfVar24 = pfVar79 + -0x13;
        pfVar25 = pfVar79 + -0x11;
        pfVar26 = pfVar79 + -0x10;
        pfVar27 = pfVar79 + -0x16;
        pfVar28 = pfVar79 + -0x14;
        pfVar29 = pfVar79 + -0x17;
        pfVar30 = pfVar79 + -0x15;
        pfVar31 = pfVar79 + -0x20;
        pfVar32 = pfVar79 + 2;
        pfVar33 = pfVar79 + 3;
        pfVar34 = pfVar79 + 4;
        pfVar35 = pfVar79 + 5;
        pfVar36 = pfVar79 + 7;
        pfVar37 = pfVar79 + 6;
        pfVar79 = pfVar79 + -1;
        iVar80 = iVar80 + -1;
        *param_2 = *pfVar37 * fVar75 +
                   *pfVar36 * fVar76 +
                   *pfVar35 * fVar74 +
                   *pfVar34 * fVar73 +
                   *pfVar33 * fVar72 +
                   *pfVar32 * fVar71 +
                   *pfVar31 * fVar38 +
                   *pfVar30 * fVar49 +
                   *pfVar29 * fVar47 +
                   *pfVar28 * fVar50 +
                   *pfVar27 * fVar48 +
                   *pfVar26 * fVar54 +
                   *pfVar25 * fVar53 +
                   *pfVar24 * fVar51 +
                   *pfVar23 * fVar52 +
                   *pfVar22 * fVar39 +
                   fVar78 * fVar77 +
                   *pfVar21 * fVar40 +
                   *pfVar20 * fVar41 +
                   *pfVar19 * fVar42 +
                   *pfVar18 * fVar43 +
                   *pfVar17 * fVar44 +
                   *pfVar16 * fVar46 +
                   *pfVar15 * fVar45 +
                   *pfVar14 * fVar70 +
                   *pfVar13 * fVar67 +
                   *pfVar12 * fVar68 +
                   *pfVar11 * fVar65 +
                   *pfVar10 * fVar63 +
                   *pfVar9 * fVar66 +
                   *pfVar8 * fVar64 +
                   *pfVar7 * fVar59 +
                   *pfVar6 * fVar60 +
                   *pfVar5 * fVar62 +
                   *pfVar4 * fVar55 +
                   *pfVar3 * fVar61 +
                   *pfVar2 * fVar56 + *pfVar1 * fVar57 + *pfVar82 * fVar58 + fVar69 * *pfVar81;
        param_2 = param_2 + 1;
      } while (iVar80 != 0);
      return;
    }
  }
  else if (iVar80 == 0x23) {
    fVar38 = *(float *)(param_1 + param_4 * 4);
    fVar72 = *(float *)(param_1 + 0x80 + param_4 * 4);
    pfVar79 = (float *)(param_1 + 0x80 + param_4 * 4);
    fVar39 = *(float *)(param_1 + 4 + param_4 * 4);
    fVar40 = *(float *)(param_1 + 8 + param_4 * 4);
    fVar41 = *(float *)(param_1 + 0xc + param_4 * 4);
    fVar42 = *(float *)(param_1 + 0x10 + param_4 * 4);
    fVar43 = *(float *)(param_1 + 0x14 + param_4 * 4);
    fVar44 = *(float *)(param_1 + 0x18 + param_4 * 4);
    fVar45 = *(float *)(param_1 + 0x1c + param_4 * 4);
    fVar46 = *(float *)(param_1 + 0x20 + param_4 * 4);
    fVar47 = *(float *)(param_1 + 0x24 + param_4 * 4);
    fVar48 = *(float *)(param_1 + 0x28 + param_4 * 4);
    fVar49 = *(float *)(param_1 + 0x2c + param_4 * 4);
    fVar50 = *(float *)(param_1 + 0x30 + param_4 * 4);
    fVar51 = *(float *)(param_1 + 0x34 + param_4 * 4);
    fVar52 = *(float *)(param_1 + 0x38 + param_4 * 4);
    fVar53 = *(float *)(param_1 + 0x3c + param_4 * 4);
    fVar54 = *(float *)(param_1 + 0x40 + param_4 * 4);
    fVar55 = *(float *)(param_1 + 0x44 + param_4 * 4);
    fVar56 = *(float *)(param_1 + 0x48 + param_4 * 4);
    fVar57 = *(float *)(param_1 + 0x4c + param_4 * 4);
    fVar58 = *(float *)(param_1 + 0x50 + param_4 * 4);
    fVar59 = *(float *)(param_1 + 0x54 + param_4 * 4);
    fVar60 = *(float *)(param_1 + 0x58 + param_4 * 4);
    fVar61 = *(float *)(param_1 + 0x5c + param_4 * 4);
    fVar62 = *(float *)(param_1 + 0x60 + param_4 * 4);
    fVar63 = *(float *)(param_1 + 100 + param_4 * 4);
    fVar64 = *(float *)(param_1 + 0x68 + param_4 * 4);
    fVar65 = *(float *)(param_1 + 0x6c + param_4 * 4);
    fVar66 = *(float *)(param_1 + 0x70 + param_4 * 4);
    fVar67 = *(float *)(param_1 + 0x74 + param_4 * 4);
    fVar68 = *(float *)(param_1 + 0x78 + param_4 * 4);
    fVar69 = *(float *)(param_1 + 0x7c + param_4 * 4);
    fVar70 = *(float *)(param_1 + 0x84 + param_4 * 4);
    fVar71 = *(float *)(param_1 + 0x88 + param_4 * 4);
    if (-1 < param_3) {
      iVar80 = param_3 + 1;
      do {
        pfVar82 = pfVar79 + -0x14;
        pfVar81 = pfVar79 + -0x15;
        pfVar1 = pfVar79 + -0x17;
        pfVar2 = pfVar79 + -0x16;
        pfVar3 = pfVar79 + -0x10;
        pfVar4 = pfVar79 + -0x11;
        pfVar5 = pfVar79 + -0x13;
        pfVar6 = pfVar79 + -0x12;
        pfVar7 = pfVar79 + -0x1f;
        fVar73 = *pfVar79;
        pfVar8 = pfVar79 + -0x1e;
        pfVar9 = pfVar79 + -0x1d;
        pfVar10 = pfVar79 + -0x1c;
        pfVar11 = pfVar79 + -0x1b;
        pfVar12 = pfVar79 + -0x1a;
        pfVar13 = pfVar79 + -0x18;
        pfVar14 = pfVar79 + -0x19;
        pfVar15 = pfVar79 + 1;
        pfVar16 = pfVar79 + -3;
        pfVar17 = pfVar79 + -2;
        pfVar18 = pfVar79 + -5;
        pfVar19 = pfVar79 + -4;
        pfVar20 = pfVar79 + -7;
        pfVar21 = pfVar79 + -6;
        pfVar22 = pfVar79 + -0xb;
        pfVar23 = pfVar79 + -10;
        pfVar24 = pfVar79 + -8;
        pfVar25 = pfVar79 + -0xf;
        pfVar26 = pfVar79 + -9;
        pfVar27 = pfVar79 + -0xe;
        pfVar28 = pfVar79 + -0xd;
        pfVar29 = pfVar79 + -0xc;
        pfVar30 = pfVar79 + 2;
        pfVar31 = pfVar79 + -0x20;
        pfVar32 = pfVar79 + -1;
        pfVar79 = pfVar79 + -1;
        iVar80 = iVar80 + -1;
        *param_2 = fVar69 * *pfVar32 +
                   *pfVar31 * fVar38 +
                   *pfVar30 * fVar71 +
                   *pfVar29 * fVar58 +
                   *pfVar28 * fVar57 +
                   *pfVar27 * fVar56 +
                   *pfVar26 * fVar61 +
                   *pfVar25 * fVar55 +
                   *pfVar24 * fVar62 +
                   *pfVar23 * fVar60 +
                   *pfVar22 * fVar59 +
                   *pfVar21 * fVar64 +
                   *pfVar20 * fVar63 +
                   *pfVar19 * fVar66 +
                   *pfVar18 * fVar65 +
                   *pfVar17 * fVar68 +
                   *pfVar16 * fVar67 +
                   *pfVar15 * fVar70 +
                   *pfVar14 * fVar45 +
                   *pfVar13 * fVar46 +
                   *pfVar12 * fVar44 +
                   *pfVar11 * fVar43 +
                   *pfVar10 * fVar42 +
                   *pfVar9 * fVar41 +
                   *pfVar8 * fVar40 +
                   fVar72 * fVar73 +
                   *pfVar7 * fVar39 +
                   *pfVar6 * fVar52 +
                   *pfVar5 * fVar51 +
                   *pfVar4 * fVar53 +
                   *pfVar3 * fVar54 +
                   *pfVar2 * fVar48 + *pfVar1 * fVar47 + *pfVar82 * fVar50 + *pfVar81 * fVar49;
        param_2 = param_2 + 1;
      } while (iVar80 != 0);
      return;
    }
  }
  else if (iVar80 == 0x1e) {
    fVar38 = *(float *)(param_1 + param_4 * 4);
    fVar67 = *(float *)(param_1 + 0x54 + param_4 * 4);
    pfVar79 = (float *)(param_1 + 0x54 + param_4 * 4);
    fVar39 = *(float *)(param_1 + 4 + param_4 * 4);
    fVar40 = *(float *)(param_1 + 8 + param_4 * 4);
    fVar41 = *(float *)(param_1 + 0xc + param_4 * 4);
    fVar42 = *(float *)(param_1 + 0x10 + param_4 * 4);
    fVar43 = *(float *)(param_1 + 0x14 + param_4 * 4);
    fVar44 = *(float *)(param_1 + 0x18 + param_4 * 4);
    fVar45 = *(float *)(param_1 + 0x1c + param_4 * 4);
    fVar46 = *(float *)(param_1 + 0x20 + param_4 * 4);
    fVar47 = *(float *)(param_1 + 0x24 + param_4 * 4);
    fVar48 = *(float *)(param_1 + 0x28 + param_4 * 4);
    fVar49 = *(float *)(param_1 + 0x2c + param_4 * 4);
    fVar50 = *(float *)(param_1 + 0x30 + param_4 * 4);
    fVar51 = *(float *)(param_1 + 0x34 + param_4 * 4);
    fVar52 = *(float *)(param_1 + 0x38 + param_4 * 4);
    fVar53 = *(float *)(param_1 + 0x3c + param_4 * 4);
    fVar54 = *(float *)(param_1 + 0x40 + param_4 * 4);
    fVar55 = *(float *)(param_1 + 0x44 + param_4 * 4);
    fVar56 = *(float *)(param_1 + 0x48 + param_4 * 4);
    fVar57 = *(float *)(param_1 + 0x4c + param_4 * 4);
    fVar58 = *(float *)(param_1 + 0x50 + param_4 * 4);
    fVar59 = *(float *)(param_1 + 0x58 + param_4 * 4);
    fVar60 = *(float *)(param_1 + 0x5c + param_4 * 4);
    fVar61 = *(float *)(param_1 + 0x60 + param_4 * 4);
    fVar62 = *(float *)(param_1 + 100 + param_4 * 4);
    fVar63 = *(float *)(param_1 + 0x68 + param_4 * 4);
    fVar64 = *(float *)(param_1 + 0x6c + param_4 * 4);
    fVar65 = *(float *)(param_1 + 0x70 + param_4 * 4);
    fVar66 = *(float *)(param_1 + 0x74 + param_4 * 4);
    if (-1 < param_3) {
      iVar80 = param_3 + 1;
      do {
        pfVar82 = pfVar79 + -0xf;
        pfVar81 = pfVar79 + -0xe;
        pfVar1 = pfVar79 + 8;
        pfVar2 = pfVar79 + -0xc;
        pfVar3 = pfVar79 + -0xd;
        pfVar4 = pfVar79 + -9;
        pfVar5 = pfVar79 + -8;
        pfVar6 = pfVar79 + -0xb;
        pfVar7 = pfVar79 + -10;
        pfVar8 = pfVar79 + 2;
        pfVar9 = pfVar79 + -4;
        pfVar10 = pfVar79 + -3;
        pfVar11 = pfVar79 + -5;
        pfVar12 = pfVar79 + 3;
        pfVar13 = pfVar79 + -2;
        pfVar14 = pfVar79 + -6;
        pfVar15 = pfVar79 + 1;
        pfVar16 = pfVar79 + -7;
        pfVar17 = pfVar79 + 5;
        pfVar18 = pfVar79 + 4;
        pfVar19 = pfVar79 + 7;
        pfVar20 = pfVar79 + 6;
        fVar68 = *pfVar79;
        pfVar21 = pfVar79 + -0x14;
        pfVar22 = pfVar79 + -0x15;
        pfVar23 = pfVar79 + -0x13;
        pfVar24 = pfVar79 + -0x12;
        pfVar25 = pfVar79 + -0x11;
        pfVar26 = pfVar79 + -0x10;
        pfVar27 = pfVar79 + -1;
        pfVar79 = pfVar79 + -1;
        iVar80 = iVar80 + -1;
        *param_2 = fVar58 * *pfVar27 +
                   *pfVar26 * fVar43 +
                   *pfVar25 * fVar42 +
                   *pfVar24 * fVar41 +
                   *pfVar23 * fVar40 +
                   *pfVar22 * fVar38 +
                   *pfVar21 * fVar39 +
                   fVar67 * fVar68 +
                   *pfVar20 * fVar64 +
                   *pfVar19 * fVar65 +
                   *pfVar18 * fVar62 +
                   *pfVar17 * fVar63 +
                   *pfVar16 * fVar52 +
                   *pfVar15 * fVar59 +
                   *pfVar14 * fVar53 +
                   *pfVar13 * fVar57 +
                   *pfVar12 * fVar61 +
                   *pfVar11 * fVar54 +
                   *pfVar10 * fVar56 +
                   *pfVar9 * fVar55 +
                   *pfVar8 * fVar60 +
                   *pfVar7 * fVar49 +
                   *pfVar6 * fVar48 +
                   *pfVar5 * fVar51 +
                   *pfVar4 * fVar50 +
                   *pfVar3 * fVar46 +
                   *pfVar2 * fVar47 + *pfVar1 * fVar66 + *pfVar82 * fVar44 + *pfVar81 * fVar45;
        param_2 = param_2 + 1;
      } while (iVar80 != 0);
      return;
    }
  }
  else if (iVar80 == 0x14) {
    fVar38 = *(float *)(param_1 + param_4 * 4);
    fVar57 = *(float *)(param_1 + 0x40 + param_4 * 4);
    pfVar79 = (float *)(param_1 + 0x40 + param_4 * 4);
    fVar39 = *(float *)(param_1 + 4 + param_4 * 4);
    fVar40 = *(float *)(param_1 + 8 + param_4 * 4);
    fVar41 = *(float *)(param_1 + 0xc + param_4 * 4);
    fVar42 = *(float *)(param_1 + 0x10 + param_4 * 4);
    fVar43 = *(float *)(param_1 + 0x14 + param_4 * 4);
    fVar44 = *(float *)(param_1 + 0x18 + param_4 * 4);
    fVar45 = *(float *)(param_1 + 0x1c + param_4 * 4);
    fVar46 = *(float *)(param_1 + 0x20 + param_4 * 4);
    fVar47 = *(float *)(param_1 + 0x24 + param_4 * 4);
    fVar48 = *(float *)(param_1 + 0x28 + param_4 * 4);
    fVar49 = *(float *)(param_1 + 0x2c + param_4 * 4);
    fVar50 = *(float *)(param_1 + 0x30 + param_4 * 4);
    fVar51 = *(float *)(param_1 + 0x34 + param_4 * 4);
    fVar52 = *(float *)(param_1 + 0x38 + param_4 * 4);
    fVar53 = *(float *)(param_1 + 0x3c + param_4 * 4);
    fVar54 = *(float *)(param_1 + 0x44 + param_4 * 4);
    fVar55 = *(float *)(param_1 + 0x48 + param_4 * 4);
    fVar56 = *(float *)(param_1 + 0x4c + param_4 * 4);
    if (-1 < param_3) {
      iVar80 = param_3 + 1;
      do {
        pfVar82 = pfVar79 + -7;
        pfVar81 = pfVar79 + 2;
        pfVar1 = pfVar79 + -4;
        pfVar2 = pfVar79 + -5;
        pfVar3 = pfVar79 + 3;
        pfVar4 = pfVar79 + -6;
        pfVar5 = pfVar79 + 1;
        pfVar6 = pfVar79 + -0xf;
        pfVar7 = pfVar79 + -2;
        pfVar8 = pfVar79 + -3;
        pfVar9 = pfVar79 + -0xe;
        pfVar10 = pfVar79 + -0xc;
        pfVar11 = pfVar79 + -0xd;
        pfVar12 = pfVar79 + -10;
        pfVar13 = pfVar79 + -0xb;
        pfVar14 = pfVar79 + -9;
        pfVar15 = pfVar79 + -8;
        pfVar16 = pfVar79 + -0x10;
        fVar58 = *pfVar79;
        pfVar17 = pfVar79 + -1;
        pfVar79 = pfVar79 + -1;
        iVar80 = iVar80 + -1;
        *param_2 = fVar53 * *pfVar17 +
                   fVar57 * fVar58 +
                   *pfVar16 * fVar38 +
                   *pfVar15 * fVar46 +
                   *pfVar14 * fVar45 +
                   *pfVar13 * fVar43 +
                   *pfVar12 * fVar44 +
                   *pfVar11 * fVar41 +
                   *pfVar10 * fVar42 +
                   *pfVar9 * fVar40 +
                   *pfVar8 * fVar51 +
                   *pfVar7 * fVar52 +
                   *pfVar6 * fVar39 +
                   *pfVar5 * fVar54 +
                   *pfVar4 * fVar48 +
                   *pfVar3 * fVar56 +
                   *pfVar2 * fVar49 + *pfVar1 * fVar50 + *pfVar82 * fVar47 + *pfVar81 * fVar55;
        param_2 = param_2 + 1;
      } while (iVar80 != 0);
      return;
    }
  }
  else if (iVar80 == 0x10) {
    fVar38 = *(float *)(param_1 + param_4 * 4);
    fVar53 = *(float *)(param_1 + 0xc + param_4 * 4);
    pfVar79 = (float *)(param_1 + 0xc + param_4 * 4);
    fVar39 = *(float *)(param_1 + 4 + param_4 * 4);
    fVar40 = *(float *)(param_1 + 8 + param_4 * 4);
    fVar41 = *(float *)(param_1 + 0x10 + param_4 * 4);
    fVar42 = *(float *)(param_1 + 0x14 + param_4 * 4);
    fVar43 = *(float *)(param_1 + 0x18 + param_4 * 4);
    fVar44 = *(float *)(param_1 + 0x1c + param_4 * 4);
    fVar45 = *(float *)(param_1 + 0x20 + param_4 * 4);
    fVar46 = *(float *)(param_1 + 0x24 + param_4 * 4);
    fVar47 = *(float *)(param_1 + 0x28 + param_4 * 4);
    fVar48 = *(float *)(param_1 + 0x2c + param_4 * 4);
    fVar49 = *(float *)(param_1 + 0x30 + param_4 * 4);
    fVar50 = *(float *)(param_1 + 0x34 + param_4 * 4);
    fVar51 = *(float *)(param_1 + 0x38 + param_4 * 4);
    fVar52 = *(float *)(param_1 + 0x3c + param_4 * 4);
    if (-1 < param_3) {
      iVar80 = param_3 + 1;
      do {
        fVar54 = *pfVar79;
        pfVar82 = pfVar79 + -1;
        pfVar81 = pfVar79 + -3;
        pfVar1 = pfVar79 + -2;
        pfVar2 = pfVar79 + 0xc;
        pfVar3 = pfVar79 + 0xb;
        pfVar4 = pfVar79 + 10;
        pfVar5 = pfVar79 + 8;
        pfVar6 = pfVar79 + 9;
        pfVar7 = pfVar79 + 5;
        pfVar8 = pfVar79 + 4;
        pfVar9 = pfVar79 + 7;
        pfVar10 = pfVar79 + 6;
        pfVar11 = pfVar79 + 1;
        pfVar12 = pfVar79 + 3;
        pfVar13 = pfVar79 + 2;
        pfVar79 = pfVar79 + -1;
        iVar80 = iVar80 + -1;
        *param_2 = *pfVar13 * fVar42 +
                   *pfVar12 * fVar43 +
                   *pfVar11 * fVar41 +
                   *pfVar10 * fVar46 +
                   *pfVar9 * fVar47 +
                   *pfVar8 * fVar44 +
                   *pfVar7 * fVar45 +
                   *pfVar6 * fVar49 +
                   *pfVar5 * fVar48 +
                   *pfVar4 * fVar50 +
                   *pfVar3 * fVar51 +
                   *pfVar2 * fVar52 +
                   *pfVar1 * fVar39 + *pfVar81 * fVar38 + fVar53 * fVar54 + fVar40 * *pfVar82;
        param_2 = param_2 + 1;
      } while (iVar80 != 0);
      return;
    }
  }
  else if (iVar80 == 0xf) {
    fVar38 = *(float *)(param_1 + param_4 * 4);
    fVar52 = *(float *)(param_1 + 0xc + param_4 * 4);
    pfVar79 = (float *)(param_1 + 0xc + param_4 * 4);
    fVar39 = *(float *)(param_1 + 4 + param_4 * 4);
    fVar40 = *(float *)(param_1 + 8 + param_4 * 4);
    fVar41 = *(float *)(param_1 + 0x10 + param_4 * 4);
    fVar42 = *(float *)(param_1 + 0x14 + param_4 * 4);
    fVar43 = *(float *)(param_1 + 0x18 + param_4 * 4);
    fVar44 = *(float *)(param_1 + 0x1c + param_4 * 4);
    fVar45 = *(float *)(param_1 + 0x20 + param_4 * 4);
    fVar46 = *(float *)(param_1 + 0x24 + param_4 * 4);
    fVar47 = *(float *)(param_1 + 0x28 + param_4 * 4);
    fVar48 = *(float *)(param_1 + 0x2c + param_4 * 4);
    fVar49 = *(float *)(param_1 + 0x30 + param_4 * 4);
    fVar50 = *(float *)(param_1 + 0x34 + param_4 * 4);
    fVar51 = *(float *)(param_1 + 0x38 + param_4 * 4);
    if (-1 < param_3) {
      iVar80 = param_3 + 1;
      do {
        pfVar82 = pfVar79 + 4;
        pfVar81 = pfVar79 + -1;
        pfVar1 = pfVar79 + 7;
        pfVar2 = pfVar79 + 5;
        pfVar3 = pfVar79 + 6;
        pfVar4 = pfVar79 + 1;
        pfVar5 = pfVar79 + 2;
        pfVar6 = pfVar79 + 3;
        pfVar7 = pfVar79 + -2;
        pfVar8 = pfVar79 + -3;
        pfVar9 = pfVar79 + 10;
        pfVar10 = pfVar79 + 0xb;
        pfVar11 = pfVar79 + 9;
        pfVar12 = pfVar79 + 8;
        fVar53 = *pfVar79;
        pfVar79 = pfVar79 + -1;
        iVar80 = iVar80 + -1;
        *param_2 = fVar52 * fVar53 +
                   *pfVar12 * fVar48 +
                   *pfVar11 * fVar49 +
                   *pfVar10 * fVar51 +
                   *pfVar9 * fVar50 +
                   *pfVar8 * fVar38 +
                   *pfVar7 * fVar39 +
                   *pfVar6 * fVar43 +
                   *pfVar5 * fVar42 +
                   *pfVar4 * fVar41 +
                   *pfVar3 * fVar46 +
                   *pfVar2 * fVar45 + *pfVar1 * fVar47 + *pfVar82 * fVar44 + fVar40 * *pfVar81;
        param_2 = param_2 + 1;
      } while (iVar80 != 0);
      return;
    }
  }
  else if (iVar80 == 10) {
    fVar38 = *(float *)(param_1 + param_4 * 4);
    fVar47 = *(float *)(param_1 + 0xc + param_4 * 4);
    pfVar79 = (float *)(param_1 + 0xc + param_4 * 4);
    fVar39 = *(float *)(param_1 + 4 + param_4 * 4);
    fVar40 = *(float *)(param_1 + 8 + param_4 * 4);
    fVar41 = *(float *)(param_1 + 0x10 + param_4 * 4);
    fVar42 = *(float *)(param_1 + 0x14 + param_4 * 4);
    fVar43 = *(float *)(param_1 + 0x18 + param_4 * 4);
    fVar44 = *(float *)(param_1 + 0x1c + param_4 * 4);
    fVar45 = *(float *)(param_1 + 0x20 + param_4 * 4);
    fVar46 = *(float *)(param_1 + 0x24 + param_4 * 4);
    if (-1 < param_3) {
      iVar80 = param_3 + 1;
      do {
        fVar48 = *pfVar79;
        pfVar82 = pfVar79 + -1;
        pfVar81 = pfVar79 + 6;
        pfVar1 = pfVar79 + 4;
        pfVar2 = pfVar79 + 5;
        pfVar3 = pfVar79 + 2;
        pfVar4 = pfVar79 + 3;
        pfVar5 = pfVar79 + 1;
        pfVar6 = pfVar79 + -2;
        pfVar7 = pfVar79 + -3;
        pfVar79 = pfVar79 + -1;
        iVar80 = iVar80 + -1;
        *param_2 = *pfVar7 * fVar38 +
                   *pfVar6 * fVar39 +
                   *pfVar5 * fVar41 +
                   *pfVar4 * fVar43 +
                   *pfVar3 * fVar42 +
                   *pfVar2 * fVar45 +
                   *pfVar1 * fVar44 + *pfVar81 * fVar46 + fVar47 * fVar48 + fVar40 * *pfVar82;
        param_2 = param_2 + 1;
      } while (iVar80 != 0);
      return;
    }
  }
  else if (iVar80 == 8) {
    fVar38 = *(float *)(param_1 + param_4 * 4);
    fVar45 = *(float *)(param_1 + 0xc + param_4 * 4);
    pfVar79 = (float *)(param_1 + 0xc + param_4 * 4);
    fVar39 = *(float *)(param_1 + 4 + param_4 * 4);
    fVar40 = *(float *)(param_1 + 8 + param_4 * 4);
    fVar41 = *(float *)(param_1 + 0x10 + param_4 * 4);
    fVar42 = *(float *)(param_1 + 0x14 + param_4 * 4);
    fVar43 = *(float *)(param_1 + 0x18 + param_4 * 4);
    fVar44 = *(float *)(param_1 + 0x1c + param_4 * 4);
    if (-1 < param_3) {
      iVar80 = param_3 + 1;
      do {
        fVar46 = *pfVar79;
        pfVar82 = pfVar79 + -1;
        pfVar81 = pfVar79 + -2;
        pfVar1 = pfVar79 + -3;
        pfVar2 = pfVar79 + 1;
        pfVar3 = pfVar79 + 3;
        pfVar4 = pfVar79 + 2;
        pfVar5 = pfVar79 + 4;
        pfVar79 = pfVar79 + -1;
        iVar80 = iVar80 + -1;
        *param_2 = *pfVar5 * fVar44 +
                   *pfVar4 * fVar42 +
                   *pfVar3 * fVar43 +
                   *pfVar2 * fVar41 +
                   *pfVar1 * fVar38 + *pfVar81 * fVar39 + fVar45 * fVar46 + fVar40 * *pfVar82;
        param_2 = param_2 + 1;
      } while (iVar80 != 0);
      return;
    }
  }
  else if (iVar80 == 4) {
    fVar38 = *(float *)(param_1 + param_4 * 4);
    fVar39 = *(float *)(param_1 + 4 + param_4 * 4);
    fVar40 = *(float *)(param_1 + 8 + param_4 * 4);
    pfVar79 = (float *)(param_1 + 0xc + param_4 * 4);
    fVar41 = *pfVar79;
    if (-1 < param_3) {
      iVar80 = param_3 + 1;
      do {
        fVar42 = *pfVar79;
        pfVar82 = pfVar79 + -1;
        pfVar81 = pfVar79 + -3;
        pfVar1 = pfVar79 + -2;
        pfVar79 = pfVar79 + -1;
        iVar80 = iVar80 + -1;
        *param_2 = *pfVar1 * fVar39 + *pfVar81 * fVar38 + fVar41 * fVar42 + fVar40 * *pfVar82;
        param_2 = param_2 + 1;
      } while (iVar80 != 0);
      return;
    }
  }
  else if (-1 < param_3) {
    param_3 = param_3 + 1;
    pfVar79 = (float *)(param_1 + param_4 * 4);
    iVar83 = 0;
    do {
      pfVar81 = (float *)((int)pfVar79 - iVar83);
      pfVar82 = pfVar79;
      iVar84 = iVar80;
      fVar38 = _DAT_1000709c;
      if (param_4 < param_5) {
        do {
          fVar39 = *pfVar81;
          pfVar81 = pfVar81 + 1;
          iVar84 = iVar84 + -1;
          fVar38 = fVar39 * *pfVar82 + fVar38;
          pfVar82 = pfVar82 + 1;
        } while (iVar84 != 0);
      }
      *(float *)((int)param_2 + iVar83) = fVar38;
      param_3 = param_3 + -1;
      iVar83 = iVar83 + 4;
    } while (param_3 != 0);
  }
  return;
}


