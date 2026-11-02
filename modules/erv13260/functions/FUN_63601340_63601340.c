/* Module: erv13260.dll
   Function: FUN_63601340
   Address: 63601340
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_63601340(int *param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  uint uVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar77;
  int iVar78;
  int iVar79;
  int iVar80;
  int iVar81;
  int iVar82;
  int iVar83;
  int iVar84;
  int iVar85;
  int iVar86;
  int iVar87;
  int iVar88;
  int iVar89;
  int iVar90;
  int *piVar91;
  uint uVar92;
  undefined4 *puVar93;
  int local_114 [64];
  undefined1 *local_14;
  
  local_14 = &stack0xfffffffc;
  piVar91 = local_114;
  uVar62 = param_4 * 0x100;
  uVar92 = 0x1000;
  if (uVar62 < 0x1001) {
    uVar92 = uVar62;
  }
  iVar57 = uVar62 + uVar92;
  if ((uVar62 & 0x100) == 0) {
    uVar62 = (uint)CONCAT21((short)((uint)param_4 >> 8),(char)param_4 + -1) << 8;
  }
  iVar33 = *param_1;
  if (param_5 == 0) {
    iVar32 = 0;
    if (iVar33 != 0) {
      if (iVar33 < 0) {
        iVar32 = iVar33 * *(int *)(&DAT_63614828 + iVar57) - *(int *)(&DAT_63614828 + uVar62);
      }
      else {
        iVar32 = iVar33 * *(int *)(&DAT_63614828 + iVar57) + *(int *)(&DAT_63614828 + uVar62);
      }
    }
  }
  else {
    iVar32 = iVar33 << 0x14;
  }
  iVar33 = 0;
  uVar92 = 1;
  do {
    local_114[iVar33] = iVar32;
    iVar33 = param_1[uVar92];
    uVar92 = uVar92 + 1;
    if (iVar33 != 0) {
      do {
        if (iVar33 < 0) {
          iVar32 = *(int *)(&DAT_63606a64 + uVar92 * 4);
          iVar33 = iVar33 * *(int *)(iVar57 + 0x63614824 + uVar92 * 4) -
                   *(int *)(uVar62 + 0x63614824 + uVar92 * 4);
        }
        else {
          iVar32 = *(int *)(&DAT_63606a64 + uVar92 * 4);
          iVar33 = iVar33 * *(int *)(iVar57 + 0x63614824 + uVar92 * 4) +
                   *(int *)(uVar62 + 0x63614824 + uVar92 * 4);
        }
        while( true ) {
          if (0x3f < uVar92) {
            local_114[iVar32] = iVar33;
            iVar34 = local_114[2] - local_114[3];
            iVar63 = (local_114[4] - local_114[6]) - (local_114[5] - local_114[7]);
            iVar35 = local_114[10] - local_114[0xb];
            iVar64 = (local_114[0xc] - local_114[0xe]) - (local_114[0xd] - local_114[0xf]);
            iVar57 = (local_114[0x14] - local_114[0x16]) + (local_114[0x15] - local_114[0x17]);
            iVar65 = (local_114[0x14] - local_114[0x16]) - (local_114[0x15] - local_114[0x17]);
            iVar33 = (local_114[0x1c] - local_114[0x1e]) + (local_114[0x1d] - local_114[0x1f]);
            iVar66 = (local_114[0x1c] - local_114[0x1e]) - (local_114[0x1d] - local_114[0x1f]);
            iVar32 = (local_114[0x24] - local_114[0x26]) + (local_114[0x25] - local_114[0x27]);
            iVar67 = (local_114[0x24] - local_114[0x26]) - (local_114[0x25] - local_114[0x27]);
            iVar82 = (local_114[0x2c] - local_114[0x2e]) + (local_114[0x2d] - local_114[0x2f]);
            iVar68 = (local_114[0x2c] - local_114[0x2e]) - (local_114[0x2d] - local_114[0x2f]);
            iVar51 = (local_114[0x34] - local_114[0x36]) + (local_114[0x35] - local_114[0x37]);
            iVar69 = (local_114[0x34] - local_114[0x36]) - (local_114[0x35] - local_114[0x37]);
            iVar55 = (local_114[0x3c] - local_114[0x3e]) + (local_114[0x3d] - local_114[0x3f]);
            iVar70 = (local_114[0x3c] - local_114[0x3e]) - (local_114[0x3d] - local_114[0x3f]);
            iVar71 = (local_114[0x20] - local_114[0x30]) - (local_114[0x28] - local_114[0x38]);
            iVar72 = (local_114[0x21] - local_114[0x31]) - (local_114[0x29] - local_114[0x39]);
            iVar36 = (local_114[0x12] - local_114[0x13]) - (local_114[0x1a] - local_114[0x1b]);
            iVar73 = (local_114[0x22] - local_114[0x23]) - (local_114[0x32] - local_114[0x33]);
            iVar37 = (local_114[0x2a] - local_114[0x2b]) - (local_114[0x3a] - local_114[0x3b]);
            iVar74 = iVar73 - iVar37;
            iVar75 = (local_114[0x22] + local_114[0x23]) - (local_114[0x32] + local_114[0x33]);
            iVar38 = (local_114[0x2a] + local_114[0x2b]) - (local_114[0x3a] + local_114[0x3b]);
            iVar39 = iVar65 - iVar66;
            iVar76 = iVar67 - iVar69;
            iVar40 = iVar68 - iVar70;
            iVar77 = iVar76 - iVar40;
            iVar78 = iVar32 - iVar51;
            iVar41 = iVar82 - iVar55;
            iVar79 = (-local_114[0x26] - local_114[0x24]) - (-local_114[0x36] - local_114[0x34]);
            iVar52 = -(-local_114[0x36] - local_114[0x34]) - (-local_114[0x26] - local_114[0x24]);
            iVar49 = (-local_114[0x2e] - local_114[0x2c]) + (-local_114[0x3e] - local_114[0x3c]);
            iVar42 = (-local_114[0x2e] - local_114[0x2c]) - (-local_114[0x3e] - local_114[0x3c]);
            iVar80 = (local_114[0x25] + local_114[0x27]) - (local_114[0x35] + local_114[0x37]);
            iVar53 = -(local_114[0x35] + local_114[0x37]) - (local_114[0x25] + local_114[0x27]);
            iVar50 = local_114[0x2d] + local_114[0x2f] + local_114[0x3d] + local_114[0x3f];
            iVar43 = (local_114[0x2d] + local_114[0x2f]) - (local_114[0x3d] + local_114[0x3f]);
            iVar45 = (int)ROUND((float)(local_114[0x10] + local_114[0x18]) * _DAT_63606a4c);
            iVar46 = (int)ROUND(_DAT_63606a4c *
                                (float)((local_114[0x20] - local_114[0x30]) +
                                       (local_114[0x28] - local_114[0x38])));
            fVar12 = ((float)(-local_114[0x30] - local_114[0x20]) +
                     (float)(local_114[0x28] + local_114[0x38])) * _DAT_63606a40;
            iVar48 = (int)ROUND((float)(local_114[0x28] + local_114[0x38]) * _DAT_63606a58 + fVar12)
            ;
            iVar47 = (int)ROUND((float)(-local_114[0x30] - local_114[0x20]) * _DAT_63606a54 - fVar12
                               );
            iVar2 = (int)ROUND((float)(local_114[0x11] + local_114[0x19]) * _DAT_63606a4c);
            iVar3 = (int)ROUND(_DAT_63606a4c *
                               (float)((local_114[0x21] - local_114[0x31]) +
                                      (local_114[0x29] - local_114[0x39])));
            fVar12 = ((float)(-local_114[0x31] - local_114[0x21]) +
                     (float)(local_114[0x29] + local_114[0x39])) * _DAT_63606a40;
            iVar4 = (int)ROUND((float)(local_114[0x29] + local_114[0x39]) * _DAT_63606a58 + fVar12);
            iVar5 = (int)ROUND((float)(-local_114[0x31] - local_114[0x21]) * _DAT_63606a54 - fVar12)
            ;
            iVar58 = (int)ROUND((float)((local_114[0x12] - local_114[0x13]) +
                                       (local_114[0x1a] - local_114[0x1b])) * _DAT_63606a4c);
            iVar59 = (int)ROUND(_DAT_63606a4c * (float)(iVar73 + iVar37));
            fVar13 = (float)(-(local_114[0x32] - local_114[0x33]) -
                            (local_114[0x22] - local_114[0x23]));
            fVar14 = (float)((local_114[0x2a] - local_114[0x2b]) +
                            (local_114[0x3a] - local_114[0x3b]));
            fVar12 = (fVar13 + fVar14) * _DAT_63606a40;
            iVar61 = (int)ROUND(fVar14 * _DAT_63606a58 + fVar12);
            iVar60 = (int)ROUND(fVar13 * _DAT_63606a54 - fVar12);
            fVar13 = (float)(-(local_114[0x32] + local_114[0x33]) -
                            (local_114[0x22] + local_114[0x23]));
            fVar14 = (float)(local_114[0x2a] + local_114[0x2b] + local_114[0x3a] + local_114[0x3b]);
            fVar12 = (fVar13 + fVar14) * _DAT_63606a50;
            iVar6 = (int)ROUND((float)(iVar65 + iVar66) * _DAT_63606a4c);
            iVar7 = (int)ROUND(_DAT_63606a4c * (float)(iVar76 + iVar40));
            fVar16 = (float)(-iVar69 - iVar67);
            fVar17 = (float)(iVar68 + iVar70);
            fVar15 = (fVar16 + fVar17) * _DAT_63606a40;
            iVar8 = (int)ROUND(fVar17 * _DAT_63606a58 + fVar15);
            iVar9 = (int)ROUND(fVar16 * _DAT_63606a54 - fVar15);
            fVar16 = (float)(-iVar51 - iVar32);
            fVar17 = (float)(iVar82 + iVar55);
            fVar15 = (fVar16 + fVar17) * _DAT_63606a50;
            fVar18 = ((float)(-local_114[6] - local_114[4]) + (float)(local_114[5] + local_114[7]))
                     * _DAT_63606a40;
            fVar19 = ((float)(-local_114[0xe] - local_114[0xc]) +
                     (float)(local_114[0xd] + local_114[0xf])) * _DAT_63606a40;
            fVar21 = (float)((-local_114[0x16] - local_114[0x14]) -
                            (-local_114[0x1e] - local_114[0x1c]));
            fVar22 = (float)((local_114[0x15] + local_114[0x17]) -
                            (local_114[0x1d] + local_114[0x1f]));
            fVar20 = (fVar21 + fVar22) * _DAT_63606a40;
            fVar24 = (float)((-local_114[0x16] - local_114[0x14]) +
                            (-local_114[0x1e] - local_114[0x1c]));
            fVar25 = (float)(local_114[0x15] + local_114[0x17] + local_114[0x1d] + local_114[0x1f]);
            fVar23 = (fVar24 + fVar25) * _DAT_63606a50;
            fVar27 = (float)(iVar79 - iVar42);
            fVar28 = (float)(iVar80 - iVar43);
            fVar26 = (fVar27 + fVar28) * _DAT_63606a40;
            fVar30 = (float)(iVar79 + iVar42);
            fVar31 = (float)(iVar80 + iVar43);
            fVar29 = (fVar30 + fVar31) * _DAT_63606a50;
            iVar81 = iVar53 - iVar49;
            iVar79 = (int)ROUND((float)(iVar53 + iVar49) * _DAT_63606a48);
            iVar82 = (int)ROUND((float)(iVar52 - iVar50) * _DAT_63606a44);
            iVar80 = (iVar52 + iVar50) * 2;
            iVar32 = iVar79 + iVar82;
            iVar79 = iVar79 - iVar82;
            iVar82 = local_114[0] + local_114[1] + iVar34;
            iVar54 = (local_114[0] + local_114[1]) - iVar34;
            iVar34 = iVar34 + (int)ROUND((float)(local_114[2] + local_114[3]) * _DAT_63606a4c);
            iVar51 = iVar54 + iVar63;
            iVar54 = iVar54 - iVar63;
            iVar55 = (local_114[0] - local_114[1]) + iVar34;
            iVar63 = (int)ROUND((float)(-local_114[6] - local_114[4]) * _DAT_63606a54 - fVar18) -
                     iVar63;
            iVar34 = (local_114[0] - local_114[1]) - iVar34;
            iVar49 = iVar55 + iVar63;
            iVar37 = (int)ROUND((float)((local_114[4] - local_114[6]) +
                                       (local_114[5] - local_114[7])) * _DAT_63606a4c) + iVar63;
            iVar55 = iVar55 - iVar63;
            iVar50 = iVar34 + iVar37;
            iVar40 = (int)ROUND((float)(local_114[5] + local_114[7]) * _DAT_63606a58 + fVar18) -
                     iVar37;
            iVar34 = iVar34 - iVar37;
            iVar37 = iVar82 + iVar40;
            iVar82 = iVar82 - iVar40;
            iVar40 = local_114[8] + local_114[9] + iVar35;
            iVar56 = (local_114[8] + local_114[9]) - iVar35;
            iVar35 = iVar35 + (int)ROUND((float)(local_114[10] + local_114[0xb]) * _DAT_63606a4c);
            iVar42 = iVar56 + iVar64;
            iVar56 = iVar56 - iVar64;
            iVar43 = (local_114[8] - local_114[9]) + iVar35;
            iVar64 = (int)ROUND((float)(-local_114[0xe] - local_114[0xc]) * _DAT_63606a54 - fVar19)
                     - iVar64;
            iVar35 = (local_114[8] - local_114[9]) - iVar35;
            iVar52 = iVar43 + iVar64;
            iVar63 = (int)ROUND((float)((local_114[0xc] - local_114[0xe]) +
                                       (local_114[0xd] - local_114[0xf])) * _DAT_63606a4c) + iVar64;
            iVar43 = iVar43 - iVar64;
            iVar53 = iVar35 + iVar63;
            iVar64 = (int)ROUND((float)(local_114[0xd] + local_114[0xf]) * _DAT_63606a58 + fVar19) -
                     iVar63;
            iVar35 = iVar35 - iVar63;
            iVar63 = iVar40 + iVar64;
            iVar40 = iVar40 - iVar64;
            iVar64 = (local_114[0x10] - local_114[0x18]) + (local_114[0x11] - local_114[0x19]);
            iVar44 = (local_114[0x10] - local_114[0x18]) - (local_114[0x11] - local_114[0x19]);
            iVar65 = iVar64 + iVar36;
            iVar64 = iVar64 - iVar36;
            iVar36 = iVar36 + (int)ROUND((float)((local_114[0x12] + local_114[0x13]) -
                                                (local_114[0x1a] + local_114[0x1b])) * _DAT_63606a4c
                                        );
            iVar66 = iVar64 + iVar39;
            iVar64 = iVar64 - iVar39;
            iVar67 = iVar44 + iVar36;
            iVar39 = (int)ROUND(fVar21 * _DAT_63606a54 - fVar20) - iVar39;
            iVar44 = iVar44 - iVar36;
            iVar36 = iVar67 + iVar39;
            iVar68 = (int)ROUND((float)(iVar57 - iVar33) * _DAT_63606a4c) + iVar39;
            iVar67 = iVar67 - iVar39;
            iVar39 = iVar44 + iVar68;
            iVar69 = (int)ROUND(fVar22 * _DAT_63606a58 + fVar20) - iVar68;
            iVar44 = iVar44 - iVar68;
            iVar68 = iVar65 + iVar69;
            iVar65 = iVar65 - iVar69;
            iVar69 = iVar45 + iVar2;
            iVar45 = iVar45 - iVar2;
            iVar2 = iVar69 + iVar58;
            iVar69 = iVar69 - iVar58;
            iVar58 = iVar58 + (local_114[0x12] + local_114[0x13] + local_114[0x1a] + local_114[0x1b]
                              ) * 2;
            iVar70 = iVar45 + iVar58;
            iVar85 = (int)ROUND(fVar24 * _DAT_63606a5c - fVar23) - iVar6;
            iVar45 = iVar45 - iVar58;
            iVar83 = (iVar57 + iVar33) * 2 + iVar85;
            iVar86 = (int)ROUND(fVar25 * _DAT_63606a60 + fVar23) - iVar83;
            iVar57 = iVar71 + iVar72;
            iVar71 = iVar71 - iVar72;
            iVar33 = iVar57 + iVar74;
            iVar57 = iVar57 - iVar74;
            iVar74 = iVar74 + (int)ROUND(_DAT_63606a4c * (float)(iVar75 - iVar38));
            iVar58 = iVar57 + iVar77;
            iVar57 = iVar57 - iVar77;
            iVar72 = iVar71 + iVar74;
            iVar77 = (int)ROUND(fVar27 * _DAT_63606a54 - fVar26) - iVar77;
            iVar71 = iVar71 - iVar74;
            iVar74 = iVar72 + iVar77;
            iVar76 = (int)ROUND(_DAT_63606a4c * (float)(iVar78 - iVar41)) + iVar77;
            iVar72 = iVar72 - iVar77;
            iVar73 = iVar71 + iVar76;
            iVar77 = (int)ROUND(fVar28 * _DAT_63606a58 + fVar26) - iVar76;
            iVar71 = iVar71 - iVar76;
            iVar76 = iVar33 + iVar77;
            iVar33 = iVar33 - iVar77;
            iVar77 = iVar46 + iVar3;
            iVar46 = iVar46 - iVar3;
            iVar3 = iVar77 + iVar59;
            iVar77 = iVar77 - iVar59;
            iVar59 = iVar59 + (iVar75 + iVar38) * 2;
            iVar38 = iVar46 + iVar59;
            iVar87 = (int)ROUND(fVar30 * _DAT_63606a5c - fVar29) - iVar7;
            iVar46 = iVar46 - iVar59;
            iVar78 = (iVar78 + iVar41) * 2 + iVar87;
            iVar88 = (int)ROUND(fVar31 * _DAT_63606a60 + fVar29) - iVar78;
            iVar59 = iVar47 + iVar5;
            iVar47 = iVar47 - iVar5;
            iVar5 = iVar59 + iVar60;
            iVar59 = iVar59 - iVar60;
            iVar60 = iVar60 + (int)ROUND(fVar13 * _DAT_63606a5c - fVar12);
            iVar41 = iVar47 + iVar60;
            iVar89 = (iVar80 + iVar79) - iVar9;
            iVar47 = iVar47 - iVar60;
            iVar84 = (int)ROUND(fVar16 * _DAT_63606a5c - fVar15) + iVar89;
            iVar90 = (iVar32 + iVar81 * 2) - iVar84;
            iVar60 = iVar48 + iVar4;
            iVar48 = iVar48 - iVar4;
            iVar4 = iVar60 + iVar61;
            iVar60 = iVar60 - iVar61;
            iVar61 = iVar61 + (int)ROUND(fVar14 * _DAT_63606a60 + fVar12);
            iVar75 = iVar48 + iVar61;
            iVar81 = (iVar32 + iVar81 * -2) - iVar8;
            iVar48 = iVar48 - iVar61;
            iVar61 = (int)ROUND(fVar17 * _DAT_63606a60 + fVar15) + iVar81;
            iVar80 = (iVar80 - iVar79) - iVar61;
            iVar32 = iVar49 + iVar52;
            iVar49 = iVar49 - iVar52;
            iVar52 = iVar32 + iVar36;
            iVar32 = iVar32 - iVar36;
            iVar36 = iVar36 + iVar70 + iVar85;
            local_114[0x28] = iVar32 + iVar74;
            local_114[0x10] = iVar32 - iVar74;
            iVar32 = iVar49 + iVar36;
            iVar74 = (iVar41 + iVar89) - iVar74;
            iVar49 = iVar49 - iVar36;
            iVar36 = iVar32 + iVar74;
            iVar79 = iVar38 + iVar87 + iVar74;
            local_114[0x38] = iVar32 - iVar74;
            iVar32 = (iVar75 + iVar81) - iVar79;
            local_114[0x18] = iVar49 + iVar79;
            local_114[0x20] = iVar49 - iVar79;
            local_114[8] = iVar52 + iVar32;
            local_114[0x30] = iVar52 - iVar32;
            iVar32 = iVar37 + iVar63;
            iVar37 = iVar37 - iVar63;
            iVar49 = iVar32 + iVar68;
            iVar32 = iVar32 - iVar68;
            iVar68 = iVar68 + iVar2 + iVar86;
            local_114[0x29] = iVar32 + iVar76;
            local_114[0x11] = iVar32 - iVar76;
            iVar32 = iVar37 + iVar68;
            iVar76 = (iVar5 + iVar90) - iVar76;
            iVar37 = iVar37 - iVar68;
            iVar52 = iVar3 + iVar88 + iVar76;
            local_114[0x39] = iVar32 - iVar76;
            local_114[1] = iVar32 + iVar76;
            iVar32 = (iVar4 + iVar80) - iVar52;
            local_114[0x19] = iVar37 + iVar52;
            local_114[0x21] = iVar37 - iVar52;
            local_114[9] = iVar49 + iVar32;
            local_114[0x31] = iVar49 - iVar32;
            iVar32 = iVar54 + iVar56;
            iVar54 = iVar54 - iVar56;
            iVar49 = iVar32 + iVar64;
            iVar32 = iVar32 - iVar64;
            iVar64 = iVar64 + (iVar69 - iVar6);
            local_114[0x2a] = iVar32 + iVar57;
            local_114[0x12] = iVar32 - iVar57;
            iVar32 = iVar54 + iVar64;
            iVar57 = (iVar59 - iVar9) - iVar57;
            iVar54 = iVar54 - iVar64;
            iVar37 = (iVar77 - iVar7) + iVar57;
            local_114[0x3a] = iVar32 - iVar57;
            local_114[2] = iVar32 + iVar57;
            iVar57 = (iVar60 - iVar8) - iVar37;
            local_114[0x1a] = iVar54 + iVar37;
            local_114[0x22] = iVar54 - iVar37;
            local_114[10] = iVar49 + iVar57;
            local_114[0x32] = iVar49 - iVar57;
            iVar57 = iVar50 + iVar53;
            iVar50 = iVar50 - iVar53;
            iVar32 = iVar57 + iVar39;
            iVar57 = iVar57 - iVar39;
            iVar39 = iVar39 + iVar45 + iVar83;
            local_114[0x2b] = iVar57 + iVar73;
            local_114[0x13] = iVar57 - iVar73;
            iVar57 = iVar50 + iVar39;
            iVar73 = (iVar47 + iVar84) - iVar73;
            iVar50 = iVar50 - iVar39;
            iVar49 = iVar46 + iVar78 + iVar73;
            local_114[0x3b] = iVar57 - iVar73;
            local_114[3] = iVar57 + iVar73;
            iVar57 = (iVar48 + iVar61) - iVar49;
            local_114[0x1b] = iVar50 + iVar49;
            local_114[0x23] = iVar50 - iVar49;
            local_114[0xb] = iVar32 + iVar57;
            local_114[0x33] = iVar32 - iVar57;
            iVar57 = iVar34 + iVar35;
            iVar34 = iVar34 - iVar35;
            iVar32 = iVar57 + iVar44;
            iVar57 = iVar57 - iVar44;
            iVar44 = iVar44 + (iVar45 - iVar83);
            local_114[0x2c] = iVar57 + iVar71;
            local_114[0x14] = iVar57 - iVar71;
            iVar57 = iVar34 + iVar44;
            iVar71 = (iVar47 - iVar84) - iVar71;
            iVar34 = iVar34 - iVar44;
            iVar49 = (iVar46 - iVar78) + iVar71;
            local_114[0x3c] = iVar57 - iVar71;
            local_114[4] = iVar57 + iVar71;
            iVar57 = (iVar48 - iVar61) - iVar49;
            local_114[0x1c] = iVar34 + iVar49;
            local_114[0x24] = iVar34 - iVar49;
            local_114[0xc] = iVar32 + iVar57;
            local_114[0x34] = iVar32 - iVar57;
            iVar57 = iVar51 + iVar42;
            iVar51 = iVar51 - iVar42;
            iVar32 = iVar57 + iVar66;
            iVar57 = iVar57 - iVar66;
            iVar66 = iVar66 + iVar69 + iVar6;
            local_114[0x2d] = iVar57 + iVar58;
            local_114[0x15] = iVar57 - iVar58;
            iVar57 = iVar51 + iVar66;
            iVar58 = (iVar59 + iVar9) - iVar58;
            iVar51 = iVar51 - iVar66;
            iVar49 = iVar77 + iVar7 + iVar58;
            local_114[0x3d] = iVar57 - iVar58;
            local_114[5] = iVar57 + iVar58;
            iVar57 = (iVar60 + iVar8) - iVar49;
            local_114[0x1d] = iVar51 + iVar49;
            local_114[0x25] = iVar51 - iVar49;
            local_114[0xd] = iVar32 + iVar57;
            local_114[0x35] = iVar32 - iVar57;
            iVar57 = iVar82 + iVar40;
            iVar82 = iVar82 - iVar40;
            iVar32 = iVar57 + iVar65;
            iVar57 = iVar57 - iVar65;
            iVar65 = iVar65 + (iVar2 - iVar86);
            local_114[0x2e] = iVar57 + iVar33;
            local_114[0x16] = iVar57 - iVar33;
            iVar57 = iVar82 + iVar65;
            iVar33 = (iVar5 - iVar90) - iVar33;
            iVar82 = iVar82 - iVar65;
            iVar51 = (iVar3 - iVar88) + iVar33;
            local_114[0x3e] = iVar57 - iVar33;
            local_114[6] = iVar57 + iVar33;
            iVar57 = (iVar4 - iVar80) - iVar51;
            local_114[0x1e] = iVar82 + iVar51;
            local_114[0x26] = iVar82 - iVar51;
            local_114[0xe] = iVar32 + iVar57;
            local_114[0x36] = iVar32 - iVar57;
            iVar57 = iVar55 + iVar43;
            iVar55 = iVar55 - iVar43;
            iVar33 = iVar57 + iVar67;
            iVar57 = iVar57 - iVar67;
            iVar67 = iVar67 + (iVar70 - iVar85);
            local_114[0x2f] = iVar57 + iVar72;
            local_114[0x17] = iVar57 - iVar72;
            iVar57 = iVar55 + iVar67;
            iVar72 = (iVar41 - iVar89) - iVar72;
            iVar55 = iVar55 - iVar67;
            iVar32 = (iVar38 - iVar87) + iVar72;
            local_114[0x3f] = iVar57 - iVar72;
            local_114[7] = iVar57 + iVar72;
            iVar57 = (iVar75 - iVar81) - iVar32;
            local_114[0x1f] = iVar55 + iVar32;
            local_114[0x27] = iVar55 - iVar32;
            local_114[0xf] = iVar33 + iVar57;
            local_114[0x37] = iVar33 - iVar57;
            puVar93 = *(undefined4 **)(local_14 + 0xc);
            while( true ) {
              iVar57 = piVar91[2];
              uVar11 = *(undefined4 *)(&DAT_63613828 + (piVar91[1] >> 0x13) * 4);
              *puVar93 = *(undefined4 *)(&DAT_63613828 + (iVar36 >> 0x13) * 4);
              uVar10 = *(undefined4 *)(&DAT_63613828 + (iVar57 >> 0x13) * 4);
              puVar93[1] = uVar11;
              iVar57 = piVar91[3];
              puVar93[2] = uVar10;
              iVar33 = piVar91[5];
              uVar11 = *(undefined4 *)(&DAT_63613828 + (piVar91[4] >> 0x13) * 4);
              puVar93[3] = *(undefined4 *)(&DAT_63613828 + (iVar57 >> 0x13) * 4);
              uVar10 = *(undefined4 *)(&DAT_63613828 + (iVar33 >> 0x13) * 4);
              puVar93[4] = uVar11;
              iVar57 = piVar91[6];
              puVar93[5] = uVar10;
              piVar1 = piVar91 + 7;
              piVar91 = piVar91 + 8;
              uVar11 = *(undefined4 *)(&DAT_63613828 + (*piVar1 >> 0x13) * 4);
              puVar93[6] = *(undefined4 *)(&DAT_63613828 + (iVar57 >> 0x13) * 4);
              iVar57 = *(int *)(local_14 + 0x10);
              puVar93[7] = uVar11;
              if (&local_14 <= piVar91) break;
              iVar36 = *piVar91;
              puVar93 = puVar93 + iVar57;
            }
            return;
          }
          local_114[iVar32] = iVar33;
          iVar33 = param_1[uVar92];
          uVar92 = uVar92 + 1;
          if (iVar33 != 0) break;
          iVar32 = *(int *)(&DAT_63606a64 + uVar92 * 4);
          iVar33 = 0;
        }
      } while( true );
    }
    iVar33 = *(int *)(&DAT_63606a64 + uVar92 * 4);
    iVar32 = 0;
  } while (uVar92 < 0x40);
  uVar11 = *(undefined4 *)(&DAT_63613828 + (local_114[0] >> 0x13) * 4);
  iVar57 = 8;
  do {
    *param_2 = uVar11;
    param_2[1] = uVar11;
    param_2[2] = uVar11;
    param_2[3] = uVar11;
    param_2[4] = uVar11;
    param_2[5] = uVar11;
    param_2[6] = uVar11;
    param_2[7] = uVar11;
    param_2 = param_2 + param_3;
    iVar57 = iVar57 + -1;
  } while (iVar57 != 0);
  return;
}


