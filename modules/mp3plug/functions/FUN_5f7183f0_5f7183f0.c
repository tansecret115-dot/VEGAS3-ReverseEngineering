/* Module: mp3plug.dll
   Function: FUN_5f7183f0
   Address: 5f7183f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __thiscall FUN_5f7183f0(void *this,int param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  float *pfVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  undefined4 uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  float *local_34;
  int local_20;
  
  if (*(int *)((int)this + 0x1010) == 0) {
    iVar20 = **(int **)((int)this + 0x1004);
  }
  else {
    iVar20 = 1;
  }
  uVar9 = *(undefined4 *)((int)this + 0x1008);
  local_20 = 0;
  local_34 = param_2;
  do {
    *(uint *)this = *(int *)this - 0x20U & 0x1ff;
    if (0 < iVar20) {
      iVar25 = 0;
      iVar21 = 0;
      do {
        iVar26 = *(int *)((int)this + 0x1008);
        if (iVar26 == 0) {
          FUN_5f717b00((float *)(iVar25 + local_20 * 0x80 + param_1),
                       (float *)(iVar21 + 4 + *(int *)this * 4 + (int)this));
        }
        else if (iVar26 == 1) {
          iVar26 = iVar21 + 4 + *(int *)this * 4 + (int)this;
          FUN_5f718130(iVar26,(float *)iVar26);
        }
        else if (iVar26 == 2) {
          iVar17 = local_20 * 0x80 + iVar25;
          iVar26 = iVar21 + *(int *)this * 4;
          fVar10 = *(float *)(param_1 + 0x14 + iVar17) + *(float *)(param_1 + 8 + iVar17);
          fVar14 = *(float *)(param_1 + 0x18 + iVar17) + *(float *)(param_1 + 4 + iVar17);
          fVar8 = *(float *)(param_1 + 0x10 + iVar17) + *(float *)(param_1 + 0xc + iVar17);
          fVar13 = *(float *)(param_1 + 0x1c + iVar17) + *(float *)(param_1 + iVar17);
          fVar11 = fVar10 + fVar14;
          fVar12 = fVar8 + fVar13;
          *(float *)((int)this + iVar26 + 4) = fVar11 + fVar12;
          *(float *)((int)this + iVar26 + 0x44) = (fVar12 - fVar11) * _DAT_5f7661a8;
          fVar10 = (fVar14 - fVar10) * _DAT_5f7661a4;
          fVar8 = (fVar13 - fVar8) * _DAT_5f7661a0;
          fVar11 = (fVar8 - fVar10) * _DAT_5f7661a8;
          *(float *)((int)this + iVar26 + 100) = fVar11;
          *(float *)((int)this + iVar26 + 0x24) = fVar8 + fVar10 + fVar11;
          fVar8 = _DAT_5f7661a8;
          fVar10 = (*(float *)(param_1 + iVar17) - *(float *)(param_1 + 0x1c + iVar17)) *
                   _DAT_5f766190;
          fVar11 = (*(float *)(param_1 + 0xc + iVar17) - *(float *)(param_1 + 0x10 + iVar17)) *
                   _DAT_5f76619c;
          fVar13 = (*(float *)(param_1 + 4 + iVar17) - *(float *)(param_1 + 0x18 + iVar17)) *
                   _DAT_5f766194;
          fVar12 = (*(float *)(param_1 + 8 + iVar17) - *(float *)(param_1 + 0x14 + iVar17)) *
                   _DAT_5f766198;
          fVar14 = (fVar10 - fVar11) * _DAT_5f7661a0;
          fVar10 = fVar10 + fVar11;
          fVar11 = (fVar13 - fVar12) * _DAT_5f7661a4;
          fVar13 = fVar13 + fVar12;
          fVar12 = (fVar14 - fVar11) * _DAT_5f7661a8;
          *(float *)((int)this + iVar26 + 0x74) = fVar12;
          fVar11 = fVar11 + fVar14 + fVar12;
          *(float *)((int)this + iVar26 + 0x34) = fVar13 + fVar10 + fVar11;
          fVar8 = fVar8 * (fVar10 - fVar13);
          *(float *)((int)this + iVar26 + 0x14) = fVar11 + fVar8;
          *(float *)((int)this + iVar26 + 0x54) = fVar8 + fVar12;
        }
        iVar21 = iVar21 + 0x800;
        iVar25 = iVar25 + 0x900;
      } while (iVar21 < iVar20 << 0xb);
    }
    if (iVar20 == 1) {
      iVar21 = *(int *)this;
      pfVar18 = (float *)&DAT_5f765990;
      uVar22 = iVar21 + 0x10;
      uVar16 = iVar21 + 0x20;
      uVar15 = iVar21 + 0x30;
      fVar11 = (float)_DAT_5f766248;
      fVar10 = (float)_DAT_5f766250;
      while( true ) {
        fVar8 = *pfVar18;
        pfVar1 = pfVar18 + 2;
        pfVar2 = pfVar18 + 3;
        pfVar18 = pfVar18 + 4;
        uVar19 = uVar22 & 0x1ff;
        uVar22 = uVar22 + 0x40;
        fVar10 = *pfVar1 * *(float *)((int)this + (uVar15 & 0x1ff) * 4 + 4) +
                 fVar8 * *(float *)((int)this + uVar19 * 4 + 4) + fVar10;
        fVar8 = *pfVar2 * *(float *)((int)this + (uVar16 & 0x1ff) * 4 + 4);
        uVar15 = uVar15 + 0x40;
        uVar16 = uVar16 + 0x40;
        if (iVar21 + 0x230 <= (int)uVar15) break;
        fVar11 = fVar8 + fVar11;
      }
      *local_34 = fVar10 * (float)_DAT_5f766258;
      iVar25 = 1;
      local_34[0x10 >> ((byte)*(undefined4 *)((int)this + 0x1008) & 0x1f)] =
           (fVar8 + fVar11) * (float)_DAT_5f766260;
      uVar23 = *(undefined4 *)((int)this + 0x1008);
      if (1 < 0x10 >> ((byte)uVar23 & 0x1f)) {
        iVar26 = -4;
        do {
          fVar11 = (float)_DAT_5f766268;
          fVar10 = (float)_DAT_5f766270;
          iVar27 = 1 << ((byte)uVar23 & 0x1f);
          iVar17 = 0;
          iVar24 = iVar25 * iVar27;
          pfVar18 = pfVar18 + iVar27 * 0x20 + -0x20;
          while( true ) {
            fVar8 = *pfVar18;
            pfVar1 = pfVar18 + 2;
            uVar16 = iVar17 + 0x10 + iVar24 + iVar21 & 0x1ff;
            pfVar2 = pfVar18 + 4;
            pfVar3 = pfVar18 + 6;
            pfVar4 = pfVar18 + 1;
            pfVar5 = pfVar18 + 3;
            pfVar6 = pfVar18 + 5;
            uVar15 = iVar17 + 0x20 + iVar24 + iVar21 & 0x1ff;
            pfVar7 = pfVar18 + 7;
            pfVar18 = pfVar18 + 8;
            uVar22 = iVar17 + 0x50 + iVar24 + iVar21 & 0x1ff;
            fVar8 = *pfVar2 * *(float *)((int)this + uVar22 * 4 + 4) +
                    *pfVar1 * *(float *)((int)this + uVar15 * 4 + 4) +
                    fVar8 * *(float *)((int)this + uVar16 * 4 + 4) + fVar10;
            iVar27 = iVar17 + 0x60;
            iVar17 = iVar17 + 0x80;
            uVar19 = iVar27 + iVar24 + iVar21 & 0x1ff;
            fVar11 = *pfVar7 * *(float *)((int)this + uVar19 * 4 + 4) +
                     *pfVar6 * *(float *)((int)this + uVar22 * 4 + 4) +
                     *pfVar5 * *(float *)((int)this + uVar15 * 4 + 4) +
                     *(float *)((int)this + uVar16 * 4 + 4) * *pfVar4 + fVar11;
            fVar10 = *pfVar3 * *(float *)((int)this + uVar19 * 4 + 4);
            if (0x1ff < iVar17) break;
            fVar10 = fVar10 + fVar8;
          }
          fVar12 = (float)_DAT_5f766280;
          local_34[iVar25] = (fVar10 + fVar8) * (float)_DAT_5f766278;
          iVar25 = iVar25 + 1;
          iVar17 = iVar26 + (0x20 >> ((byte)*(undefined4 *)((int)this + 0x1008) & 0x1f)) * 4;
          iVar26 = iVar26 + -4;
          *(float *)((int)local_34 + iVar17) = fVar11 * fVar12;
          uVar23 = *(undefined4 *)((int)this + 0x1008);
        } while (iVar25 < 0x10 >> ((byte)uVar23 & 0x1f));
      }
    }
    else {
      FUN_5f718894(this,*(uint *)this,local_34);
    }
    local_34 = local_34 + ((0x10 << ((byte)iVar20 & 0x1f)) >> ((byte)uVar9 & 0x1f));
    local_20 = local_20 + 1;
  } while (local_20 < 0x12);
  return local_34;
}


