/* Module: vegas30.exe
   Function: FUN_004bb4c0
   Address: 004bb4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004bb5cf) */
/* WARNING: Removing unreachable block (ram,0x004bb5e9) */
/* WARNING: Removing unreachable block (ram,0x004bb657) */
/* WARNING: Removing unreachable block (ram,0x004bb661) */

bool FUN_004bb4c0(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  longlong lVar16;
  longlong lVar17;
  uint local_28;
  uint local_24;
  
  uVar12 = *(uint *)(DAT_00647630 + 0xb70);
  uVar9 = *(uint *)(DAT_00647630 + 0xb78);
  iVar14 = *(int *)(DAT_00647630 + 0xb74);
  iVar5 = *(int *)(DAT_00647630 + 0xb7c);
  if ((iVar5 < 1) && (iVar5 < 0)) {
    bVar15 = CARRY4(uVar12,uVar9);
    uVar12 = uVar12 + uVar9;
    iVar14 = iVar14 + iVar5 + (uint)bVar15;
    bVar15 = uVar9 != 0;
    uVar9 = -uVar9;
    iVar5 = -(iVar5 + (uint)bVar15);
  }
  lVar16 = FUN_0043e4c0(uVar12,iVar14);
  uVar13 = (uint)((ulonglong)lVar16 >> 0x20);
  uVar6 = (uint)lVar16;
  lVar17 = FUN_0043e4c0(uVar9 + uVar12,iVar5 + iVar14 + (uint)CARRY4(uVar9,uVar12));
  lVar17 = lVar17 - lVar16;
  uVar12 = (uint)lVar17;
  iVar14 = (int)((ulonglong)lVar17 >> 0x20);
  puVar7 = (uint *)FUN_005b89b0(DAT_0064b138);
  local_28 = 0;
  local_24 = 0;
  if (*puVar7 != 0) {
    piVar8 = (int *)puVar7[2];
    do {
      puVar1 = (uint *)*piVar8;
      if (((byte *)puVar1[10] == (byte *)0x0) || ((*(byte *)puVar1[10] & 1) == 0)) {
        uVar9 = puVar1[1];
        local_28 = local_28 + 1;
        uVar2 = *puVar1;
        if (uVar2 == uVar6) {
          if ((uVar9 == uVar13) && (lVar17 == 0)) {
            return false;
          }
          if (lVar16 == *(longlong *)puVar1) {
            if ((int)puVar1[3] < iVar14) {
              return false;
            }
            if (((int)puVar1[3] <= iVar14) && (puVar1[2] <= uVar12)) {
              return false;
            }
          }
        }
        if (*(longlong *)puVar1 < lVar16) {
          uVar3 = puVar1[2];
          if (lVar16 < CONCAT44(puVar1[3] + uVar9 + (uint)CARRY4(uVar3,uVar2),uVar3 + uVar2)) {
            uVar2 = *puVar1;
            iVar10 = (puVar1[3] - uVar13) - (uint)(uVar3 < uVar6);
            uVar4 = (uint)CARRY4(uVar3 - uVar6,uVar2);
            iVar5 = iVar10 + uVar9;
            iVar11 = iVar5 + uVar4;
            if (iVar11 < 0) {
              return false;
            }
            if ((iVar11 == 0 || SCARRY4(iVar10,uVar9) != SCARRY4(iVar5,uVar4)) &&
               ((uVar3 - uVar6) + uVar2 < 40000000)) {
              return false;
            }
            uVar3 = (uint)(uVar6 < uVar2);
            uVar4 = uVar13 - uVar9;
            if ((int)(uVar4 - uVar3) < 0) {
              return false;
            }
            if ((uVar4 == uVar3 || SBORROW4(uVar13,uVar9) != SBORROW4(uVar4,uVar3)) &&
               (uVar6 - uVar2 < 40000000)) {
              return false;
            }
          }
        }
        if (lVar16 == CONCAT44(uVar9,*puVar1)) {
          uVar2 = puVar1[2];
          if (lVar17 < *(longlong *)(puVar1 + 2)) {
            if (lVar17 < 40000000) {
              return false;
            }
            uVar3 = (uint)(uVar2 < uVar12);
            uVar4 = puVar1[3] - iVar14;
            if ((int)(uVar4 - uVar3) < 0) {
              return false;
            }
            if ((uVar4 == uVar3 || SBORROW4(puVar1[3],iVar14) != SBORROW4(uVar4,uVar3)) &&
               (uVar2 - uVar12 < 40000000)) {
              return false;
            }
          }
        }
        if (((int)uVar13 < (int)uVar9) || (((int)uVar13 <= (int)uVar9 && (uVar6 < *puVar1)))) {
          uVar12 = (uint)(*puVar1 < uVar6);
          bVar15 = (int)((puVar1[1] - uVar13) - uVar12) < 0;
          if ((puVar1[1] - uVar13 == uVar12 || bVar15) && ((bVar15 || (*puVar1 - uVar6 < 40000000)))
             ) {
            return false;
          }
          break;
        }
      }
      else if ((*puVar1 == uVar6) && (puVar1[1] == uVar13)) {
        return false;
      }
      local_24 = local_24 + 1;
      piVar8 = piVar8 + 1;
    } while (local_24 < *puVar7);
  }
  return local_28 < 99;
}


