/* Module: mp3plug.dll
   Function: FUN_5f717380
   Address: 5f717380
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5f717380(void *this,int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  byte bVar10;
  undefined *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  uint local_278;
  uint local_268;
  int local_240;
  int local_23c;
  int local_238 [64];
  int *local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128 [64];
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint *local_c;
  
  local_10 = param_2;
  if (*(int *)((int)this + 0x1010) == 0) {
    local_14 = **(int **)((int)this + 0x1004);
  }
  else {
    local_14 = 1;
  }
  local_18 = (0x10 << ((byte)local_14 & 0x1f)) >>
             ((char)*(undefined4 *)((int)this + 0x1008) + (char)*(undefined4 *)((int)this + 0x100c)
             & 0x1fU);
  if ((*(int *)((int)this + 0x1010) == 0) || (**(int **)((int)this + 0x1004) != 2)) {
    local_1c = 0;
  }
  else {
    local_1c = 1;
  }
  local_24 = 0;
  do {
    *(uint *)this = *(uint *)this - 0x20 & 0x1ff;
    if (0 < local_14) {
      iVar13 = 0;
      local_20 = local_14 << 0xb;
      iVar17 = 0;
      do {
        uVar2 = *(uint *)((int)this + 0x1008);
        if (uVar2 == 0) {
          FUN_5f717b00((float *)(iVar17 + local_24 * 0x80 + param_1),
                       (float *)(iVar13 + 4 + *(uint *)this * 4 + (int)this));
        }
        else if (uVar2 == 1) {
          iVar16 = iVar13 + 4 + *(uint *)this * 4 + (int)this;
          FUN_5f718130(iVar16,(float *)iVar16);
        }
        else if (uVar2 == 2) {
          iVar9 = local_24 * 0x80 + iVar17;
          iVar16 = iVar13 + *(uint *)this * 4;
          fVar3 = *(float *)(param_1 + 0x14 + iVar9) + *(float *)(param_1 + 8 + iVar9);
          fVar8 = *(float *)(param_1 + 0x18 + iVar9) + *(float *)(param_1 + 4 + iVar9);
          fVar5 = *(float *)(param_1 + 0x10 + iVar9) + *(float *)(param_1 + 0xc + iVar9);
          fVar7 = *(float *)(param_1 + 0x1c + iVar9) + *(float *)(param_1 + iVar9);
          fVar4 = fVar3 + fVar8;
          fVar6 = fVar5 + fVar7;
          *(float *)((int)this + iVar16 + 4) = fVar4 + fVar6;
          *(float *)((int)this + iVar16 + 0x44) = (fVar6 - fVar4) * _DAT_5f7661a8;
          fVar3 = (fVar8 - fVar3) * _DAT_5f7661a4;
          fVar5 = (fVar7 - fVar5) * _DAT_5f7661a0;
          fVar4 = (fVar5 - fVar3) * _DAT_5f7661a8;
          *(float *)((int)this + iVar16 + 100) = fVar4;
          *(float *)((int)this + iVar16 + 0x24) = fVar5 + fVar3 + fVar4;
          fVar5 = _DAT_5f7661a8;
          fVar3 = (*(float *)(param_1 + iVar9) - *(float *)(param_1 + 0x1c + iVar9)) * _DAT_5f766190
          ;
          fVar4 = (*(float *)(param_1 + 0xc + iVar9) - *(float *)(param_1 + 0x10 + iVar9)) *
                  _DAT_5f76619c;
          fVar7 = (*(float *)(param_1 + 4 + iVar9) - *(float *)(param_1 + 0x18 + iVar9)) *
                  _DAT_5f766194;
          fVar6 = (*(float *)(param_1 + 8 + iVar9) - *(float *)(param_1 + 0x14 + iVar9)) *
                  _DAT_5f766198;
          fVar8 = (fVar3 - fVar4) * _DAT_5f7661a0;
          fVar3 = fVar3 + fVar4;
          fVar4 = (fVar7 - fVar6) * _DAT_5f7661a4;
          fVar7 = fVar7 + fVar6;
          fVar6 = (fVar8 - fVar4) * _DAT_5f7661a8;
          *(float *)((int)this + iVar16 + 0x74) = fVar6;
          fVar4 = fVar4 + fVar8 + fVar6;
          *(float *)((int)this + iVar16 + 0x34) = fVar7 + fVar3 + fVar4;
          fVar5 = fVar5 * (fVar3 - fVar7);
          *(float *)((int)this + iVar16 + 0x14) = fVar4 + fVar5;
          *(float *)((int)this + iVar16 + 0x54) = fVar5 + fVar6;
        }
        iVar13 = iVar13 + 0x800;
        iVar17 = iVar17 + 0x900;
      } while (iVar13 < local_20);
    }
    iVar13 = local_10;
    if (local_14 == 1) {
      local_268 = *(uint *)this;
      uVar2 = *(uint *)((int)this + 0x100c);
      local_c = this;
      bVar10 = (byte)*(uint *)((int)this + 0x1008);
      uVar12 = 0x40 >> (bVar10 & 0x1f);
      if (local_1c == 0) {
        local_240 = 0x80 << (bVar10 & 0x1f);
        local_23c = -0x20;
        puVar11 = &DAT_5f765a10;
      }
      else {
        local_240 = 0x60 << (bVar10 & 0x1f);
        local_23c = -0x18;
        local_268 = local_268 + 0x40 & 0x1ff;
        puVar11 = &DAT_5f7653f0;
      }
      fVar4 = 0.0;
      fVar3 = 0.0;
      uVar15 = local_268;
      iVar17 = local_23c;
      do {
        uVar14 = uVar15 + 0x20 & 0x1ff;
        fVar4 = *(float *)((int)this + (uVar14 + 1) * 4) * *(float *)(puVar11 + iVar17 * 4 + 0xc) +
                fVar4;
        fVar3 = *(float *)((int)this + (uVar14 + 0x11) * 4) * *(float *)(puVar11 + iVar17 * 4 + 8) +
                *(float *)((int)this + (uVar15 + 0x11) * 4) * *(float *)(puVar11 + iVar17 * 4) +
                fVar3;
        uVar15 = uVar14 + 0x20 & 0x1ff;
        iVar17 = iVar17 + 4;
      } while (iVar17 < 0);
      piVar18 = local_238;
      local_238[0] = (int)ROUND(fVar3);
      *(int *)((int)piVar18 + uVar12) = (int)ROUND(fVar4);
      iVar17 = uVar12 - 4;
      do {
        fVar4 = 0.0;
        fVar3 = 0.0;
        local_268 = local_268 + (1 << (bVar10 & 0x1f));
        puVar11 = puVar11 + local_240;
        local_138 = piVar18;
        uVar12 = local_268;
        iVar16 = local_23c;
        do {
          uVar15 = uVar12 + 0x20 & 0x1ff;
          fVar3 = *(float *)((int)this + (uVar15 + 1) * 4) * *(float *)(puVar11 + iVar16 * 4 + 8) +
                  *(float *)((int)this + (uVar12 + 0x11) * 4) * *(float *)(puVar11 + iVar16 * 4) +
                  fVar3;
          fVar4 = *(float *)((int)this + (uVar15 + 1) * 4) * *(float *)(puVar11 + iVar16 * 4 + 0xc)
                  + *(float *)((int)this + (uVar12 + 0x11) * 4) *
                    *(float *)(puVar11 + iVar16 * 4 + 4) + fVar4;
          uVar12 = uVar15 + 0x20 & 0x1ff;
          iVar16 = iVar16 + 4;
        } while (iVar16 < 0);
        piVar18 = piVar18 + 1;
        *piVar18 = (int)ROUND(fVar3);
        *(int *)((int)piVar18 + iVar17 * 2) = (int)ROUND(fVar4);
        iVar17 = iVar17 + -4;
      } while (iVar17 != 0);
      uVar12 = 0x20 >> (bVar10 & 0x1f);
      if (uVar2 == 0) {
        iVar17 = -uVar12;
        do {
          iVar16 = local_238[uVar12 + iVar17];
          if (0x7fff < iVar16) {
            iVar16 = 0x7fff;
          }
          if (iVar16 < -0x8000) {
            iVar16 = -0x8000;
          }
          *(short *)(iVar13 + uVar12 * 2 + iVar17 * 2) = (short)iVar16;
          iVar17 = iVar17 + 1;
        } while (iVar17 < 0);
      }
      else {
        iVar17 = -uVar12;
        do {
          iVar16 = local_238[uVar12 + iVar17];
          if (0x7fff < iVar16) {
            iVar16 = 0x7fff;
          }
          if (iVar16 < -0x8000) {
            iVar16 = -0x8000;
          }
          *(char *)(iVar13 + uVar12 + iVar17) = (char)((ushort)((short)iVar16 + -0x8000) >> 8);
          iVar17 = iVar17 + 1;
        } while (iVar17 < 0);
      }
    }
    else {
      local_278 = *(uint *)this;
      uVar2 = *(uint *)((int)this + 0x100c);
      local_c = this;
      bVar10 = (byte)*(uint *)((int)this + 0x1008);
      uVar12 = 0x40 >> (bVar10 & 0x1f);
      local_134 = 1 << (bVar10 & 0x1f);
      if (local_1c == 0) {
        local_130 = 0x80 << (bVar10 & 0x1f);
        local_12c = -0x20;
        puVar11 = &DAT_5f765a10;
      }
      else {
        local_130 = 0x60 << (bVar10 & 0x1f);
        local_12c = -0x18;
        local_278 = local_278 + 0x40 & 0x1ff;
        puVar11 = &DAT_5f7653f0;
      }
      fVar6 = 0.0;
      fVar5 = 0.0;
      fVar4 = 0.0;
      fVar3 = 0.0;
      uVar15 = local_278;
      iVar17 = local_12c;
      do {
        uVar14 = uVar15 + 0x20 & 0x1ff;
        fVar5 = *(float *)((int)this + (uVar14 + 1) * 4) * *(float *)(puVar11 + iVar17 * 4 + 0xc) +
                fVar5;
        fVar3 = *(float *)((int)this + (uVar14 + 0x11) * 4) * *(float *)(puVar11 + iVar17 * 4 + 8) +
                *(float *)((int)this + (uVar15 + 0x11) * 4) * *(float *)(puVar11 + iVar17 * 4) +
                fVar3;
        fVar6 = *(float *)((int)this + (uVar14 + 0x201) * 4) *
                *(float *)(puVar11 + iVar17 * 4 + 0xc) + fVar6;
        fVar4 = *(float *)((int)this + (uVar14 + 0x211) * 4) * *(float *)(puVar11 + iVar17 * 4 + 8)
                + *(float *)((int)this + (uVar15 + 0x211) * 4) * *(float *)(puVar11 + iVar17 * 4) +
                  fVar4;
        uVar15 = uVar14 + 0x20 & 0x1ff;
        iVar17 = iVar17 + 4;
      } while (iVar17 < 0);
      local_128[0] = (int)ROUND(fVar3);
      local_128[1] = (int)ROUND(fVar4);
      *(int *)((int)local_128 + uVar12 * 2) = (int)ROUND(fVar5);
      *(int *)((int)local_128 + uVar12 * 2 + 4) = (int)ROUND(fVar6);
      iVar17 = uVar12 - 4;
      piVar18 = local_128;
      do {
        fVar6 = 0.0;
        fVar5 = 0.0;
        fVar4 = 0.0;
        fVar3 = 0.0;
        local_278 = local_278 + local_134;
        puVar11 = puVar11 + local_130;
        local_28 = piVar18;
        uVar12 = local_278;
        iVar16 = local_12c;
        do {
          uVar15 = uVar12 + 0x20 & 0x1ff;
          fVar3 = *(float *)((int)this + (uVar15 + 1) * 4) * *(float *)(puVar11 + iVar16 * 4 + 8) +
                  *(float *)((int)this + (uVar12 + 0x11) * 4) * *(float *)(puVar11 + iVar16 * 4) +
                  fVar3;
          fVar5 = *(float *)((int)this + (uVar15 + 1) * 4) * *(float *)(puVar11 + iVar16 * 4 + 0xc)
                  + *(float *)((int)this + (uVar12 + 0x11) * 4) *
                    *(float *)(puVar11 + iVar16 * 4 + 4) + fVar5;
          fVar4 = *(float *)((int)this + (uVar15 + 0x201) * 4) *
                  *(float *)(puVar11 + iVar16 * 4 + 8) +
                  *(float *)((int)this + (uVar12 + 0x211) * 4) * *(float *)(puVar11 + iVar16 * 4) +
                  fVar4;
          fVar6 = *(float *)((int)this + (uVar15 + 0x201) * 4) *
                  *(float *)(puVar11 + iVar16 * 4 + 0xc) +
                  *(float *)((int)this + (uVar12 + 0x211) * 4) *
                  *(float *)(puVar11 + iVar16 * 4 + 4) + fVar6;
          uVar12 = uVar15 + 0x20 & 0x1ff;
          iVar16 = iVar16 + 4;
        } while (iVar16 < 0);
        piVar1 = piVar18 + 2;
        *piVar1 = (int)ROUND(fVar3);
        piVar18[3] = (int)ROUND(fVar4);
        piVar1[iVar17] = (int)ROUND(fVar5);
        piVar18[iVar17 + 3] = (int)ROUND(fVar6);
        iVar17 = iVar17 + -4;
        piVar18 = piVar1;
      } while (iVar17 != 0);
      uVar12 = 0x40 >> (bVar10 & 0x1f);
      if (uVar2 == 0) {
        iVar17 = -uVar12;
        do {
          iVar16 = local_128[uVar12 + iVar17];
          if (0x7fff < iVar16) {
            iVar16 = 0x7fff;
          }
          if (iVar16 < -0x8000) {
            iVar16 = -0x8000;
          }
          *(short *)(iVar13 + uVar12 * 2 + iVar17 * 2) = (short)iVar16;
          iVar17 = iVar17 + 1;
        } while (iVar17 < 0);
      }
      else {
        iVar17 = -uVar12;
        do {
          iVar16 = local_128[uVar12 + iVar17];
          if (0x7fff < iVar16) {
            iVar16 = 0x7fff;
          }
          if (iVar16 < -0x8000) {
            iVar16 = -0x8000;
          }
          *(char *)(iVar13 + uVar12 + iVar17) = (char)((ushort)((short)iVar16 + -0x8000) >> 8);
          iVar17 = iVar17 + 1;
        } while (iVar17 < 0);
      }
    }
    local_24 = local_24 + 1;
    local_10 = local_10 + local_18 * 2;
    this = local_c;
  } while (local_24 < 0x12);
  return;
}


