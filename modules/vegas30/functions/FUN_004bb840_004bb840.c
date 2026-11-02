/* Module: vegas30.exe
   Function: FUN_004bb840
   Address: 004bb840
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004bb95c) */
/* WARNING: Removing unreachable block (ram,0x004bb944) */
/* WARNING: Removing unreachable block (ram,0x004bba01) */

int FUN_004bb840(int param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6,
                uint param_7)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  HGLOBAL pvVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  bool bVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint *local_158;
  uint local_14c;
  longlong local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  uint local_120;
  uint *local_118;
  undefined4 local_114;
  CHAR local_110 [259];
  undefined1 local_d;
  
  lVar13 = FUN_005b8d80(DAT_0064b138);
  local_158 = *(uint **)(param_2 + 0x3c);
  if (local_158 == (uint *)0x0) {
    local_158 = *(uint **)(param_1 + 0xc38);
  }
  lVar14 = FUN_0043e4c0(param_3,param_4);
  lVar15 = FUN_0043e4c0(param_3 + param_5,param_4 + param_6 + (uint)CARRY4(param_3,param_5));
  lVar15 = lVar15 - lVar14;
  if ((int)lVar15 == 0) {
    bVar12 = (int)((ulonglong)lVar15 >> 0x20) == 0;
    if (!bVar12) goto LAB_004bb8e6;
    lVar15 = lVar13 - lVar14;
  }
  bVar12 = (int)((ulonglong)lVar15 >> 0x20) == 0;
LAB_004bb8e6:
  if ((bVar12 || lVar15 < 0) && ((lVar15 < 0 || ((uint)lVar15 < 40000000)))) {
    lVar15 = 40000000;
  }
  param_6 = (int)((ulonglong)lVar15 >> 0x20);
  if (param_7 == 0) {
    local_14c = 0;
    uVar8 = *local_158;
    iVar6 = param_6;
    if (uVar8 != 0) {
      do {
        param_6 = (int)((ulonglong)lVar15 >> 0x20);
        uVar9 = (uint)((ulonglong)lVar14 >> 0x20);
        uVar7 = (uint)lVar14;
        puVar1 = *(uint **)(local_158[2] + local_14c * 4);
        if (((byte *)puVar1[10] == (byte *)0x0) || ((*(byte *)puVar1[10] & 1) == 0)) {
          uVar2 = puVar1[1];
          uVar3 = *puVar1;
          if ((*(longlong *)puVar1 < lVar14) &&
             (iVar6 = param_6,
             lVar14 < CONCAT44(puVar1[3] + uVar2 + (uint)CARRY4(puVar1[2],uVar3),puVar1[2] + uVar3))
             ) {
            uVar8 = *puVar1 - uVar7;
            lVar15 = CONCAT44(((puVar1[1] - uVar9) - (uint)(*puVar1 < uVar7)) + puVar1[3] +
                              (uint)CARRY4(uVar8,puVar1[2]),uVar8 + puVar1[2]);
            *(longlong *)(puVar1 + 2) = lVar14 - *(longlong *)puVar1;
            break;
          }
          if (uVar7 == uVar3) {
            iVar4 = uVar9 - uVar2;
            bVar12 = false;
            if (uVar9 == uVar2) {
              lVar13 = lVar14 + CONCAT44(iVar6,(int)lVar15);
              lVar14 = lVar14 + CONCAT44(iVar6,(int)lVar15);
              uVar7 = uVar3 - (uint)lVar13;
              iVar6 = ((uVar2 - (int)((ulonglong)lVar13 >> 0x20)) - (uint)(uVar3 < (uint)lVar13)) +
                      puVar1[3] + (uint)CARRY4(uVar7,puVar1[2]);
              lVar15 = CONCAT44(iVar6,uVar7 + puVar1[2]);
              *(longlong *)(puVar1 + 2) = lVar13 - *(longlong *)puVar1;
              goto LAB_004bb99f;
            }
          }
          else {
LAB_004bb99f:
            uVar7 = (uint)((ulonglong)lVar14 >> 0x20);
            iVar4 = uVar7 - uVar2;
            bVar12 = uVar7 == uVar2;
          }
          iVar10 = (int)((ulonglong)lVar14 >> 0x20);
          uVar7 = (uint)lVar14;
          if ((SBORROW4(iVar10,uVar2) != iVar4 < 0) ||
             ((bVar12 || SBORROW4(iVar10,uVar2) != iVar4 < 0 && (uVar7 < *puVar1)))) {
            if (*(longlong *)puVar1 < lVar14 + CONCAT44(iVar6,(int)lVar15)) {
              lVar15 = CONCAT44((puVar1[1] - iVar10) - (uint)(*puVar1 < uVar7),*puVar1 - uVar7);
            }
            break;
          }
        }
        local_14c = local_14c + 1;
      } while (local_14c < uVar8);
    }
  }
  param_6 = (int)((ulonglong)lVar15 >> 0x20);
  plVar11 = &local_140;
  for (iVar6 = 0xe; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)plVar11 = 0;
    plVar11 = (longlong *)((int)plVar11 + 4);
  }
  local_120 = local_120 & 0xfffffffe;
  local_138 = 0;
  local_134 = 0;
  local_130 = 0;
  local_140 = lVar14;
  lstrcpynA(local_110,"",0x104);
  local_d = 0;
  if (param_7 == 0) {
    local_120 = local_120 | 1;
    local_134 = param_6;
    local_138 = (int)lVar15;
  }
  else {
    pvVar5 = GlobalAlloc(2,0x14);
    local_118 = GlobalLock(pvVar5);
    if (local_118 == (uint *)0x0) {
      return -0x7ff8fff2;
    }
    local_114 = 0x676e6463;
    *local_118 = 0;
    local_118[1] = 0;
    local_118[2] = 0;
    local_118[3] = 0;
    local_118[4] = 0;
    *local_118 = (*local_118 ^ param_7) & 1 ^ *local_118;
  }
  iVar6 = _SfList_AllocAndInsertItem_20(local_158,&local_140,0x39,0xffffffff,0);
  if (iVar6 < 0) {
    if (local_118 != (uint *)0x0) {
      pvVar5 = GlobalHandle(local_118);
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle(local_118);
      GlobalFree(pvVar5);
    }
    return iVar6;
  }
  _SfList_Sort_12(local_158,0,&LAB_004baab0);
  FUN_004ba9e0(param_1);
  return iVar6;
}


