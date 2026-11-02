/* Module: vegas30.exe
   Function: FUN_00598640
   Address: 00598640
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00598640(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  DWORD DVar9;
  int *piVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int local_18;
  uint local_10;
  uint local_c;
  
  iVar7 = param_1;
  bVar6 = false;
  bVar4 = false;
  bVar5 = false;
  *(undefined4 *)(param_1 + 8) = 0;
  iVar8 = FUN_005957c0(param_1);
  if (iVar8 < 0) {
    return 0xffffffff;
  }
  CoInitialize((LPVOID)0x0);
  param_1 = 1;
  do {
    if ((param_1 == 0) || (*(int *)(iVar7 + 0x54) == 0)) {
      iVar8 = _SfQueueRemove_8(iVar7 + 0xc,0x32);
    }
    else {
      iVar8 = _SfQueueRemove_8(iVar7 + 0xc,0);
    }
    if (iVar8 != 0) {
      iVar13 = *(int *)(iVar8 + 8);
      if (iVar13 == 1) {
        if (*(int *)(iVar7 + 0x54) == 0) {
          FUN_00598590(*(undefined4 *)(iVar8 + 0x10),*(undefined4 *)(iVar8 + 0x14));
          *(undefined4 *)(iVar7 + 0x54) = 1;
          *(undefined4 *)(iVar7 + 0x58) = *(undefined4 *)(iVar8 + 0x18);
          *(undefined4 *)(iVar7 + 0x5c) = *(undefined4 *)(iVar8 + 0x1c);
          *(undefined4 *)(DAT_0065a068 + 0x744) = 0;
          *(undefined4 *)(DAT_0065a068 + 0x748) = 0;
          if (*(int *)(iVar7 + 0xa0) == 0) {
            FUN_00595450(iVar7);
          }
          FUN_005984f0(iVar7,*(undefined4 *)(iVar8 + 0x18),*(undefined4 *)(iVar8 + 0x1c));
          DVar9 = GetCurrentThreadId();
          FUN_0058f7e0(DAT_0065a070,DVar9);
          FUN_005961f0(iVar7,*(undefined4 *)(iVar7 + 0x68));
        }
        bVar5 = true;
      }
      else if (iVar13 == 2) {
        if (*(int *)(iVar7 + 0x54) != 0) {
          *(undefined4 *)(iVar7 + 0x54) = 0;
          bVar4 = true;
        }
LAB_0059874e:
        bVar5 = true;
      }
      else if (iVar13 == 5) {
        if (*(int *)(iVar7 + 0x54) != 0) goto LAB_0059874e;
        bVar4 = true;
        bVar5 = true;
      }
      else if (iVar13 == 6) {
        bVar5 = true;
        FUN_005961f0(iVar7,DAT_0064b138);
      }
      else if (iVar13 == 3) {
        bVar4 = true;
        bVar5 = true;
        bVar6 = true;
      }
    }
    *(undefined4 *)(iVar7 + 8) = 1;
    _DAT_0064b4c8 = 0;
    param_1 = 0;
    if (*(int *)(iVar7 + 0x54) == 0) {
      if (bVar4) {
        FUN_005b83b0(DAT_0064b138,0);
        FUN_005961f0(iVar7,DAT_0064b138);
        FUN_00595bf0(iVar7,DAT_0064b138);
        FUN_005b84d0(DAT_0064b138,0);
        bVar4 = false;
      }
    }
    else {
      uVar14 = 0xc0000000;
      local_10 = 1;
      local_c = 0xc0000000;
      uVar15 = 1;
      puVar12 = (uint *)(DAT_0065a068 + 0xe8);
      local_18 = 0x3a;
      do {
        uVar11 = *puVar12;
        uVar1 = puVar12[1];
        if ((uVar11 != 1) || (uVar1 != 0xc0000000)) {
          if (((local_10 == 1) && (local_c == 0xc0000000)) ||
             (((int)uVar1 <= (int)local_c && (((int)uVar1 < (int)local_c || (uVar11 <= local_10)))))
             ) {
            local_10 = uVar11;
            local_c = uVar1;
          }
          if (((uVar15 == 1) && (uVar14 == 0xc0000000)) ||
             (((int)uVar14 <= (int)uVar1 && (((int)uVar14 < (int)uVar1 || (uVar15 <= uVar11)))))) {
            uVar14 = uVar1;
            uVar15 = uVar11;
          }
        }
        puVar12 = puVar12 + 2;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
      iVar13 = 0;
      piVar10 = (int *)(DAT_0065a068 + 0x2b8);
      do {
        iVar2 = *piVar10;
        iVar3 = piVar10[1];
        if ((iVar2 != 1) || (iVar3 != -0x40000000)) break;
        iVar13 = iVar13 + 1;
        piVar10 = piVar10 + 2;
      } while (iVar13 < 0x3a);
      if (((local_10 != 1) || (local_c != 0xc0000000)) && (*(int *)(DAT_0065a068 + 0x740) != 0)) {
        FUN_005b83b0(*(undefined4 *)(iVar7 + 0x68),0);
        iVar13 = *(int *)(iVar7 + 0xe8);
        if (iVar13 == 0) {
          iVar13 = 0;
          uVar15 = local_10;
          uVar14 = local_c;
        }
        param_1 = FUN_00597fa0(iVar7,uVar15,uVar14,iVar13);
        uVar14 = FUN_00597a80(iVar7,iVar2,iVar3,local_10,local_c,*(undefined4 *)(iVar7 + 0xe8));
        uVar15 = 1;
        param_1 = param_1 | uVar14;
        iVar13 = 0;
        do {
          if (uVar15 == 0) break;
          uVar14 = FUN_005981e0(iVar7,*(undefined4 *)(iVar7 + 0xe8));
          uVar11 = FUN_00597a80(iVar7,iVar2,iVar3,local_10,local_c,*(undefined4 *)(iVar7 + 0xe8));
          uVar15 = FUN_00598340(iVar7,*(undefined4 *)(iVar7 + 0xe8));
          uVar15 = uVar14 | uVar11 | uVar15;
          param_1 = param_1 | uVar15;
          iVar13 = iVar13 + 1;
        } while (iVar13 < 5);
        FUN_005b84d0(*(undefined4 *)(iVar7 + 0x68),0);
      }
      PulseEvent(*(HANDLE *)(iVar7 + 0x9c));
    }
    if (bVar5) {
      _SfQueueInsert_8(iVar7 + 0x30,iVar8);
      bVar5 = false;
    }
    *(undefined4 *)(iVar7 + 8) = 0;
    _DAT_0064b4c8 = 1;
    if (bVar6) {
      return 0;
    }
  } while( true );
}


