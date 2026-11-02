/* Module: vidcap30.exe
   Function: FUN_004557b0
   Address: 004557b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00455c92) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004557b0(int param_1,uchar *param_2)

{
  int iVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  HGLOBAL hMem;
  LPVOID pvVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  undefined4 *puVar13;
  bool bVar14;
  float10 fVar15;
  undefined8 uVar16;
  int *piStack_8c;
  undefined4 uStack_88;
  
  FUN_00455360();
  _mbscpy((uchar *)(param_1 + 0x28),param_2);
  *(undefined4 *)(param_1 + 0x378) = 0;
  *(undefined4 *)(param_1 + 0x37c) = 0x3ff00000;
  iVar3 = FUN_00455660();
  if (iVar3 < 0) {
    return iVar3;
  }
  if ((*(int *)(param_1 + 0x360) != 0) &&
     (iVar3 = (**(code **)(**(int **)(param_1 + 0x350) + 0xc))(), -1 < iVar3)) {
    piVar11 = (int *)(param_1 + 0x3b0);
    iVar3 = (**(code **)(**(int **)(param_1 + 0x3b4) + 0x18))();
    if ((-1 < iVar3) || (iVar3 = (**(code **)(**(int **)(param_1 + 0x3b4) + 0x18))(), -1 < iVar3)) {
      if (((int *)*piVar11 != (int *)0x0) &&
         (iVar4 = (**(code **)(*(int *)*piVar11 + 0x10))(), iVar4 == 0)) {
        *(int *)(param_1 + 0x3b8) = *piVar11;
        *(undefined4 *)(param_1 + 0x3bc) = *(undefined4 *)(param_1 + 0x3b4);
        *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_1 + 0x3b8);
        *(undefined4 *)(param_1 + 0x3c4) = *(undefined4 *)(param_1 + 0x3bc);
        iVar4 = 4;
        bVar14 = true;
        piVar10 = &DAT_005a35f8;
        piVar12 = piVar11;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar14 = *piVar10 == *piVar12;
          piVar10 = piVar10 + 1;
          piVar12 = piVar12 + 1;
        } while (bVar14);
        iVar4 = 4;
        if (bVar14) {
          bVar14 = true;
          piVar11 = &DAT_005a2ba8;
          piVar10 = (int *)(param_1 + 0x3dc);
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            bVar14 = *piVar11 == *piVar10;
            piVar11 = piVar11 + 1;
            piVar10 = piVar10 + 1;
          } while (bVar14);
          if (bVar14) {
            *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x148);
            *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) & 0xfffffffb;
            uVar8 = *(uint *)(param_1 + 0x3f0);
            puVar9 = *(undefined4 **)(param_1 + 0x3f4);
            puVar13 = (undefined4 *)(param_1 + 0x528);
            for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *puVar13 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar13 = puVar13 + 1;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined1 *)puVar13 = *(undefined1 *)puVar9;
              puVar9 = (undefined4 *)((int)puVar9 + 1);
              puVar13 = (undefined4 *)((int)puVar13 + 1);
            }
            uVar8 = (int)*(uint *)(param_1 + 0x560) >> 0x1f;
            *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_1 + 0x55c);
            *(uint *)(param_1 + 0x374) = (*(uint *)(param_1 + 0x560) ^ uVar8) - uVar8;
            uVar8 = ftol();
            *(undefined2 *)(param_1 + 0x380) = *(undefined2 *)(param_1 + 0x566);
            dVar2 = (double)uVar8 * _DAT_0058a8f0;
            bVar14 = dVar2 < _DAT_0058be18;
            *(double *)(param_1 + 0x368) = dVar2;
            if ((bVar14) || (_DAT_0058be10 < dVar2)) {
              *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x148);
              uVar8 = *(uint *)(param_1 + 0x14c) & 0xffffffdf;
            }
            else {
              *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x148);
              uVar8 = *(uint *)(param_1 + 0x14c) | 0x20;
            }
            *(uint *)(param_1 + 0x14c) = uVar8;
            iVar3 = FUN_00454ed0();
            if (((-1 < iVar3) && (*(int *)(param_1 + 0x404) != 0)) &&
               (iVar3 = (**(code **)(**(int **)(param_1 + 0x350) + 0xc))(), -1 < iVar3)) {
              iVar3 = (**(code **)(**(int **)(param_1 + 0x3b4) + 0x18))();
            }
          }
        }
        else {
          bVar14 = true;
          piVar10 = &DAT_005a35a8;
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            bVar14 = *piVar10 == *piVar11;
            piVar10 = piVar10 + 1;
            piVar11 = piVar11 + 1;
          } while (bVar14);
          if (bVar14) {
            iVar4 = 4;
            bVar14 = true;
            piVar11 = &DAT_005a2b58;
            piVar10 = (int *)(param_1 + 0x3dc);
            do {
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              bVar14 = *piVar11 == *piVar10;
              piVar11 = piVar11 + 1;
              piVar10 = piVar10 + 1;
            } while (bVar14);
            if (bVar14) {
              *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x148);
              *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) | 4;
              uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x3f4) + 0x10);
              *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x148);
              *(uint *)(param_1 + 0x14c) =
                   (uint)((byte)~(byte)((uint)uVar6 >> 0x10) >> 5 & 1) << 5 |
                   *(uint *)(param_1 + 0x14c) & 0xffffffdf;
              uVar16 = __allshl();
              uVar8 = (uint)((ulonglong)uVar16 >> 0x20) | *(uint *)(param_1 + 0x14c);
              *(uint *)(param_1 + 0x148) = (uint)uVar16 | *(uint *)(param_1 + 0x148) & 0xfffdffff;
              *(uint *)(param_1 + 0x14c) = uVar8;
              *(undefined4 *)(param_1 + 0x370) = 0x2d0;
              if ((uVar8 & 0x20) == 0) {
                *(undefined4 *)(param_1 + 0x368) = 0;
                *(undefined4 *)(param_1 + 0x374) = 0x240;
                *(undefined2 *)(param_1 + 0x380) = 0x18;
                *(undefined4 *)(param_1 + 0x36c) = 0x40390000;
              }
              else {
                *(undefined4 *)(param_1 + 0x368) = 0xe2556b28;
                *(undefined4 *)(param_1 + 0x374) = 0x1e0;
                *(undefined2 *)(param_1 + 0x380) = 0x18;
                *(undefined4 *)(param_1 + 0x36c) = 0x403df853;
              }
              *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x148);
              *(uint *)(param_1 + 0x14c) = uVar8 | 0x10;
            }
          }
        }
        __aullshr();
        fVar15 = (float10)FUN_004219c0();
        *(double *)(param_1 + 0x378) = (double)fVar15;
        FUN_0057b1c0();
      }
      (**(code **)(**(int **)(param_1 + 0x3b4) + 0x18))();
      iVar4 = (**(code **)(**(int **)(param_1 + 0x3b4) + 0x2c))();
      if (-1 < iVar4) {
        uStack_88 = 0x455c10;
        hMem = GlobalAlloc(0x40,0x34);
        pvVar5 = GlobalLock(hMem);
        if (pvVar5 == (LPVOID)0x0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_0042d820();
        }
        *(undefined4 *)(param_1 + 0x840) = uVar6;
        FUN_0042ddf0();
        iVar4 = 0;
        if ((*(int *)(param_1 + 0x840) != 0) && (iVar1 = *(int *)(param_1 + 0x844), iVar1 != 0)) {
          if (((DAT_005bb56c < 0) || (iVar1 <= DAT_005bb56c)) && (0 < iVar1)) {
            do {
              uStack_88 = 0x455c7e;
              FUN_0042de10();
              iVar4 = iVar4 + 1;
            } while (iVar4 < *(int *)(param_1 + 0x844));
          }
          FUN_0042e060();
          if (-1 < DAT_005bb568) {
            uStack_88 = 0x455cb8;
            FUN_0042c860();
          }
          DAT_005bb560 = 2;
          uStack_88 = 0x455cca;
          FUN_00425ff0();
        }
        (**(code **)(_DAT_005a2438 + 8))();
      }
      uStack_88 = 0;
      piStack_8c = (int *)0x0;
      iVar4 = (**(code **)(**(int **)(param_1 + 0x3b4) + 0x2c))
                        (*(int **)(param_1 + 0x3b4),*(undefined4 *)(param_1 + 0x360),1,&DAT_005a2408
                        );
      if ((-1 < iVar4) ||
         (iVar4 = (**(code **)(**(int **)(param_1 + 0x3b4) + 0x2c))
                            (*(int **)(param_1 + 0x3b4),*(undefined4 *)(param_1 + 0x360),1,
                             &DAT_005a23b8,0,0,0,&piStack_8c), -1 < iVar4)) {
        if (piStack_8c != (int *)0x0) {
          (**(code **)(*piStack_8c + 8))(piStack_8c);
        }
        *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) | 0x10000;
        *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
      }
    }
  }
  return iVar3;
}


