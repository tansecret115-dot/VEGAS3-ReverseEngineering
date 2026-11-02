/* Module: vegas30.exe
   Function: FUN_0058d4a0
   Address: 0058d4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0058dbd3) */
/* WARNING: Removing unreachable block (ram,0x0058d7de) */
/* WARNING: Removing unreachable block (ram,0x0058d858) */

int FUN_0058d4a0(int param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  HGLOBAL pvVar7;
  LPVOID pvVar8;
  int *pMem;
  WCHAR *pWVar9;
  int iVar10;
  int iVar11;
  undefined4 unaff_EBP;
  int *unaff_ESI;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  int local_4c0;
  int local_4bc;
  int *local_4b8;
  int *local_4b4;
  undefined8 local_4b0;
  uint local_4a8;
  int iStack_4a4;
  undefined8 local_4a0;
  int local_498;
  uint local_494;
  int local_490;
  uint local_48c;
  int local_488;
  longlong local_484;
  longlong local_47c;
  undefined4 *local_474;
  int local_470;
  undefined8 local_46c;
  undefined4 local_464;
  int local_460;
  undefined4 local_45c;
  undefined4 local_458;
  undefined2 local_454;
  WCHAR local_450 [259];
  undefined2 uStack_24a;
  uchar local_248 [292];
  undefined1 local_124 [292];
  
  local_474 = *(undefined4 **)(param_1 + 8);
  local_4bc = 0;
  local_4b4 = (int *)0x0;
  if (((*(int *)(param_1 + 4) == 2) && ((*(byte *)(param_1 + 0x10) & 0x80) != 0)) &&
     (*(int *)(param_1 + 0x354) != 0)) {
    iVar10 = *(int *)(*(int *)(param_1 + 0x248) + 0x40);
    if (iVar10 == 0) {
      local_464 = *(undefined4 *)(param_1 + 0x358);
      local_45c = *(undefined4 *)(param_1 + 0x360);
      local_458 = *(undefined4 *)(param_1 + 0x364);
      local_454 = *(undefined2 *)(param_1 + 0x368);
      iVar3 = *(int *)(param_1 + 0x35c);
    }
    else {
      iVar3 = local_460;
      if ((0 < iVar10) && (iVar10 < 4)) {
        iVar3 = *(int *)(param_1 + 0x35c);
      }
    }
    local_4a0._0_4_ = *(undefined4 *)(param_1 + 0x3a0);
    local_4b8 = *(int **)(param_1 + 0x3d4);
    local_4a0._4_4_ = *(undefined4 *)(param_1 + 0x3a4);
    local_46c = __alldiv(*(uint *)(param_1 + 0x390) - 0x200,
                         *(int *)(param_1 + 0x394) - (uint)(*(uint *)(param_1 + 0x390) < 0x200),
                         *(undefined2 *)(param_1 + 0x364),0);
    if (iVar3 == 0) {
      lVar14 = 0;
      local_47c = 0;
    }
    else {
      iStack_4a4 = 0;
      local_4a8 = iVar3;
      lVar14 = ftol();
      iStack_4a4 = 0;
      local_4a8 = iVar3;
      local_47c = ftol();
    }
    lVar14 = local_47c - lVar14;
    local_4a8 = *(uint *)(DAT_0065a06c + 0xb0);
    iStack_4a4 = *(int *)(DAT_0065a06c + 0xb4);
    uVar12 = *(uint *)(DAT_0065a06c + 0xc0);
    local_490 = *(int *)(DAT_0065a06c + 0xc4);
    local_488 = 0;
    if (local_4b8 == (int *)0x0) {
      local_48c = 0;
    }
    else {
      local_48c = *(uint *)(param_1 + 0x3a8) - local_4a8;
      local_488 = (*(int *)(param_1 + 0x3ac) - iStack_4a4) -
                  (uint)(*(uint *)(param_1 + 0x3a8) < local_4a8);
    }
    local_494 = uVar12;
    local_484 = lVar14;
    local_4bc = _SfList_CreateExZ_32(&local_4b4,4,0x10,0x10,0x40000002,0,0,0);
    if (-1 < local_4bc) {
      local_498 = 0;
      local_4b8 = (int *)**(undefined4 **)(param_1 + 0x24);
      if ((*(int *)(param_1 + 0x3b8) != 0) &&
         (*(int *)(DAT_0065a06c + 0xc0) != 0 || *(int *)(DAT_0065a06c + 0xc4) != 0)) {
        lVar2 = lVar14 + CONCAT44((local_490 - *(int *)(param_1 + 0x3c4)) -
                                  (uint)(uVar12 < *(uint *)(param_1 + 0x3c0)),
                                  uVar12 - *(uint *)(param_1 + 0x3c0));
        iVar10 = (int)lVar2;
        local_498 = __alldiv(iVar10 + -1,(int)((ulonglong)lVar2 >> 0x20) - (uint)(iVar10 == 0),
                             uVar12,local_490);
        local_498 = local_498 + 1;
      }
      local_470 = 0;
      if (0 < (int)local_4b8) {
        do {
          iVar10 = *(int *)(*(int *)(*(int *)(param_1 + 0x24) + 8) + local_470 * 4);
          if ((*(uint *)(iVar10 + 0x10) & 0x100000) != 0) {
            FUN_005c6b30(local_474,iVar10,*(undefined4 *)(iVar10 + 0x50));
            iVar3 = FUN_005c68e0(iVar10);
            if (iVar3 != 0) {
              FUN_005c86c0(local_474,iVar10,0);
            }
            *(uint *)(*(int *)(param_1 + 0x354) + 0x134) =
                 *(uint *)(*(int *)(param_1 + 0x354) + 0x134) & 0xfffffffe;
            uVar12 = *(uint *)(iVar10 + 0x10);
            uVar13 = uVar12 & 0xfffffeff;
            uVar4 = uVar13 | 0x10;
            *(uint *)(iVar10 + 0x10) = uVar4;
            if ((*(int *)(param_1 + 0x3b8) == 0) || (local_498 < 1)) {
              if ((uVar12 & 0x200000) != 0) {
                *(longlong *)(iVar10 + 0x20) = lVar14;
              }
              if (param_2 != 0) {
                *(uint *)(iVar10 + 0x10) = CONCAT31((int3)(uVar13 >> 8),(char)uVar4) & 0xffffffef;
              }
              _mbscpy((uchar *)local_450,(uchar *)(*(int *)(param_1 + 0x354) + 0x170));
              puVar5 = (undefined1 *)_SfGetFileNameExtensionPtrA_4(local_450);
              if (puVar5 != (undefined1 *)0x0) {
                *puVar5 = 0;
              }
              local_4c0 = _SfGetFileNamePtrA_4(local_450);
              uVar12 = *(uint *)(iVar10 + 0x18);
              lVar2 = lVar14;
              if (*(longlong *)(iVar10 + 0x18) < local_47c) {
                FUN_0058d330(iVar10,*(undefined4 *)(param_1 + 0x354),
                             uVar12 - *(uint *)(param_1 + 0x3a8),
                             (*(int *)(iVar10 + 0x1c) - *(int *)(param_1 + 0x3ac)) -
                             (uint)(uVar12 < *(uint *)(param_1 + 0x3a8)),
                             *(undefined4 *)(iVar10 + 0x20),*(undefined4 *)(iVar10 + 0x24),local_4c0
                             ,local_4b4);
              }
            }
            else {
              local_4c0 = 0;
              uVar12 = *(uint *)(param_1 + 0x3c0) + *(uint *)(iVar10 + 0x18);
              uVar13 = uVar12 - local_48c;
              lVar1 = CONCAT44(((((*(int *)(param_1 + 0x3c4) + *(int *)(iVar10 + 0x1c) +
                                  (uint)CARRY4(*(uint *)(param_1 + 0x3c0),*(uint *)(iVar10 + 0x18)))
                                 - local_488) - (uint)(uVar12 < local_48c)) - iStack_4a4) -
                               (uint)(uVar13 < local_4a8),uVar13 - local_4a8);
              lVar2 = local_484;
              local_4b0 = lVar14;
              if (0 < local_498) {
                do {
                  lVar2 = local_484;
                  local_4b0 = lVar14;
                  if (lVar14 <= lVar1) break;
                  lVar14 = __allmul(local_4c0,local_4c0 >> 0x1f,local_494,local_490);
                  lVar14 = lVar14 + lVar1;
                  local_460 = (int)((ulonglong)lVar14 >> 0x20);
                  local_4a0 = local_4b0 - lVar1;
                  iVar3 = (int)((ulonglong)local_4a0 >> 0x20);
                  if ((*(int *)(iVar10 + 0x24) <= iVar3) &&
                     ((*(int *)(iVar10 + 0x24) < iVar3 ||
                      (*(uint *)(iVar10 + 0x20) < (uint)local_4a0)))) {
                    local_4a0 = *(longlong *)(iVar10 + 0x20);
                  }
                  if ((lVar14 < 0) || (local_484 < lVar14)) {
                    lVar14 = local_4b0;
                    if (local_48c == 0 && local_488 == 0) goto LAB_0058d942;
                  }
                  else {
                    _mbscpy(local_248,(uchar *)(*(int *)(param_1 + 0x354) + 0x170));
                    puVar5 = (undefined1 *)_SfGetFileNameExtensionPtrA_4(local_248);
                    if (puVar5 != (undefined1 *)0x0) {
                      *puVar5 = 0;
                    }
                    iVar3 = _SfGetFileNamePtrA_4(local_248);
                    if (iVar3 == 0) {
                      iVar3 = local_4c0 + 1;
                      uVar6 = _SfGetString_8(DAT_00647204,0x5614);
                      SfPrintF(local_124,uVar6,iVar3);
                    }
                    else {
                      iVar11 = local_4c0 + 1;
                      uVar6 = _SfGetString_8(DAT_00647204,0x5613);
                      SfPrintF(local_124,uVar6,iVar3,iVar11);
                    }
                    if (local_4a0 != 0) {
                      FUN_0058d330(iVar10,*(undefined4 *)(param_1 + 0x354),(int)lVar14,local_460,
                                   local_4a0,local_124,local_4b4);
                    }
LAB_0058d942:
                    lVar14 = local_4b0 - CONCAT44(local_490,local_494);
                  }
                  local_4c0 = local_4c0 + 1;
                  lVar2 = local_484;
                  local_4b0 = lVar14;
                } while (local_4c0 < local_498);
              }
            }
            lVar14 = lVar2;
            *(uint *)(iVar10 + 0x10) = *(uint *)(iVar10 + 0x10) & 0xffdfffff;
          }
          local_470 = local_470 + 1;
          *(uint *)(iVar10 + 0x10) = *(uint *)(iVar10 + 0x10) & 0xffefffff;
        } while (local_470 < (int)local_4b8);
      }
      FUN_005c8a20(param_1);
      iVar10 = *(int *)(*(int *)(param_1 + 0x354) + 0x130);
      if (iVar10 != 0) {
        iVar10 = **(int **)(iVar10 + 8);
        piVar16 = *(int **)(iVar10 + 0x60);
        *(int *)(iVar10 + 0x20) = (int)lVar14;
        *(undefined8 *)(iVar10 + 0x50) = local_46c;
        *(int *)(iVar10 + 0x24) = (int)((ulonglong)lVar14 >> 0x20);
        if (piVar16 != (int *)0x0) {
          (**(code **)(*piVar16 + 8))(piVar16);
          *(undefined4 *)(iVar10 + 0x60) = 0;
        }
        *(undefined4 *)(iVar10 + 0x58) = 0;
      }
      if (local_4b4 != (int *)0x0) {
        if (((0 < *local_4b4) && (*(int *)(param_1 + 0x39c) <= DAT_006486b4)) &&
           ((*(int *)(param_1 + 0x39c) < DAT_006486b4 || (*(uint *)(param_1 + 0x398) < DAT_006486b0)
            ))) {
          local_464 = DAT_0060f448;
          local_460 = DAT_0060f44c;
          local_458 = DAT_0060f454;
          local_45c = DAT_0060f450;
          local_4bc = (**(code **)(*DAT_0064b510 + 0x3c))(DAT_0064b510,&local_4b8,&local_464);
          if (-1 < local_4bc) {
            MultiByteToWideChar(0,1,(LPCSTR)(param_1 + 0x250),-1,local_450,0x104);
            piVar18 = (int *)0x0;
            pWVar9 = local_450;
            piVar17 = (int *)0x0;
            piVar16 = &local_4c0;
            uStack_24a = 0;
            piVar15 = local_4b8;
            iVar10 = (**(code **)(*local_4b8 + 0x34))(local_4b8,piVar16,pWVar9);
            if (-1 < iVar10) {
              iVar10 = -0x7ff8fff2;
              pvVar7 = GlobalAlloc(0x40,0x2c);
              pvVar8 = GlobalLock(pvVar7);
              if (pvVar8 != (LPVOID)0x0) {
                pMem = (int *)FUN_004b11e0();
                if (pMem != (int *)0x0) {
                  iVar10 = FUN_004b1980(unaff_EBP,0,0,0,0,0,0,0,0,0);
                  if (iVar10 < 0) {
                    FUN_004b1210();
                    pvVar7 = GlobalHandle(pMem);
                    GlobalUnlock(pvVar7);
                    pvVar7 = GlobalHandle(pMem);
                    GlobalFree(pvVar7);
                  }
                  else {
                    (**(code **)(*pMem + 4))(pMem);
                    pWVar9 = (WCHAR *)(**(code **)(*piVar17 + 0x40))(piVar17,pMem);
                    if (-1 < (int)pWVar9) {
                      pWVar9 = (WCHAR *)(**(code **)(*piVar16 + 0x48))
                                                  (piVar16,*(undefined4 *)(param_1 + 0x35c));
                    }
                    (**(code **)(*pMem + 8))(pMem);
                  }
                }
              }
              (**(code **)(*piVar18 + 0x10))(piVar18,piVar15,piVar16,pWVar9,piVar17,piVar18,iVar10);
              (**(code **)(*piVar17 + 8))(piVar17);
            }
            (**(code **)(*unaff_ESI + 8))(unaff_ESI);
          }
          _SfList_DeleteList_16(local_4b4,0,0xffffffff,0);
        }
        _SfList_Destroy_4(local_4b4);
      }
      if (param_1 != 0) {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x200000;
        *(uint *)*local_474 = *(uint *)*local_474 | 0x2000;
      }
    }
  }
  return local_4bc;
}


