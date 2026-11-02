/* Module: vegas30k.dll
   Function: FUN_010619a0
   Address: 010619a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x01061fbd) */
/* WARNING: Removing unreachable block (ram,0x010620d7) */

int __thiscall
FUN_010619a0(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5,
            int param_6,int *param_7,undefined4 param_8,undefined4 *param_9)

{
  undefined2 *lpBuffer;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  byte *pbVar7;
  undefined2 *puVar8;
  short *psVar9;
  uint uVar10;
  int unaff_ESI;
  int iVar11;
  int iVar12;
  int unaff_EDI;
  bool bVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  int unaff_retaddr;
  uint local_4c;
  int iStack_3c;
  uint uStack_38;
  undefined2 *puStack_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  double dStack_20;
  double dStack_18;
  undefined8 uStack_10;
  uint uStack_4;
  
  *param_9 = 0;
  iVar1 = FUN_0105fae0();
  if (iVar1 != 0) {
    return -0x7fffbffb;
  }
  iStack_3c = (**(code **)(*param_1 + 0x20))(param_1,0);
  if (-1 < iStack_3c) {
    if ((param_1[0x9e] == -1) && (param_1[0x9f] == -1)) {
      return 1;
    }
    if (param_1[0xb] != 0) {
      FUN_01060a30();
    }
    bVar13 = (uint)param_1[0x9b] < 0x10;
    iVar1 = param_1[0x9c];
    iVar5 = param_1[0xa9];
    iVar11 = param_1[0x9d];
    uVar10 = ((-(uint)bVar13 & 0xfffffffe) + 4) * iVar1;
    iVar3 = iVar11 >> 0x1f;
    if (iVar5 == 0) {
      puStack_34 = (undefined2 *)FUN_0105a820(&uStack_38);
      if (puStack_34 == (undefined2 *)0x0) {
        iStack_3c = -0x7ff8fff2;
      }
      else {
        local_4c = (uStack_38 / uVar10) * uVar10;
        if ((bVar13) && (unaff_ESI == 0)) {
          local_4c = local_4c >> 1;
        }
        iStack_2c = iVar1 * param_6;
        param_3 = 0;
        if (0 < iStack_2c) {
          dStack_20 = (double)CONCAT44(param_5,param_4);
          dStack_18 = (double)param_6;
          iStack_28 = iVar11;
          iStack_24 = iVar3;
          do {
            uVar14 = ftol();
            lVar15 = __alldiv((uint)uVar14 + uStack_4,
                              (int)((ulonglong)uVar14 >> 0x20) + unaff_retaddr +
                              (uint)CARRY4((uint)uVar14,uStack_4),iStack_28,iStack_24);
            lVar16 = __allmul(uVar10,0,lVar15);
            uStack_10 = lVar16 + (ulonglong)*(uint *)(unaff_EDI + 0x264);
            SetFilePointer(*(HANDLE *)(unaff_EDI + 600),(LONG)uStack_10,(PLONG)((int)&uStack_10 + 4)
                           ,0);
            uVar14 = ftol();
            lVar16 = __alldiv((uint)uVar14 + uStack_4,
                              (int)((ulonglong)uVar14 >> 0x20) + unaff_retaddr +
                              (uint)CARRY4((uint)uVar14,uStack_4),iStack_28,iStack_24);
            uVar17 = __allmul(lVar16 - lVar15,uVar10,0);
            lpBuffer = puStack_34;
            if (0 < (longlong)uVar17) {
              while( true ) {
                param_4 = (uint)uVar17;
                uVar4 = param_4;
                if ((uVar17 < 0x8000000000000000) &&
                   ((0xffffffff < (longlong)uVar17 || (local_4c < param_4)))) {
                  uVar4 = local_4c;
                }
                ReadFile(*(HANDLE *)(unaff_EDI + 600),lpBuffer,uVar4,&uStack_30,(LPOVERLAPPED)0x0);
                if (uStack_30 == 0) break;
                iVar5 = param_4 - uStack_30;
                iVar11 = (int)(uVar17 >> 0x20) - (uint)(param_4 < uStack_30);
                uVar4 = uStack_30 / uVar10;
                iVar3 = uVar4 * iVar1;
                if (unaff_ESI == 0) {
                  if ((bVar13) && (iVar12 = iVar3 + -1, -1 < iVar12)) {
                    pbVar7 = (byte *)(lpBuffer + iVar12);
                    psVar9 = lpBuffer + iVar12 * 2;
                    do {
                      psVar9[1] = (ushort)pbVar7[1] << 8;
                      iVar3 = iVar3 + -1;
                      *psVar9 = (ushort)*pbVar7 << 8;
                      pbVar7 = pbVar7 + -2;
                      psVar9 = psVar9 + -2;
                    } while (iVar3 != 0);
                  }
                  param_3 = FUN_01062480(param_3,param_1,lpBuffer,uVar4,iVar1);
                }
                else {
                  if ((!bVar13) && (puVar6 = lpBuffer, puVar8 = lpBuffer, 0 < iVar3)) {
                    do {
                      *(char *)puVar8 = (char)((ushort)*puVar6 >> 8);
                      *(char *)((int)puVar8 + 1) = (char)((ushort)puVar6[1] >> 8);
                      iVar3 = iVar3 + -1;
                      puVar6 = puVar6 + 2;
                      puVar8 = puVar8 + 1;
                    } while (iVar3 != 0);
                  }
                  param_3 = FUN_01062130(param_3,unaff_ESI,lpBuffer,uVar4,iVar1);
                }
                uVar17 = CONCAT44(iVar11,iVar5);
                if ((iVar11 < 1) && ((iVar11 < 0 || (uVar17 = CONCAT44(iVar11,iVar5), iVar5 == 0))))
                goto LAB_010620df;
              }
              if (0 < (longlong)uVar17) break;
            }
LAB_010620df:
          } while (param_3 < iStack_2c);
        }
        *param_7 = param_3 / iVar1;
      }
    }
    else {
      param_2 = (int *)unaff_ESI;
      if (bVar13) {
        if (unaff_ESI == 0) {
          iVar12 = 0;
          if (0 < param_6) {
            dStack_20 = (double)CONCAT44(param_5,param_4);
            dStack_18 = (double)param_6;
            param_2 = param_1;
            iStack_28 = iVar11;
            iStack_24 = iVar3;
            do {
              uVar14 = ftol();
              iVar2 = __alldiv((uint)uVar14 + uStack_4,
                               (int)((ulonglong)uVar14 >> 0x20) + unaff_retaddr +
                               (uint)CARRY4((uint)uVar14,uStack_4),iStack_28,iStack_24);
              iVar11 = iVar12 + 1;
              uVar14 = ftol();
              iVar3 = __alldiv((uint)uVar14 + uStack_4,
                               (int)((ulonglong)uVar14 >> 0x20) + unaff_retaddr +
                               (uint)CARRY4((uint)uVar14,uStack_4),iStack_28,iStack_24);
              if (*(int *)(unaff_EDI + 0x2a8) <= iVar3) {
                iVar3 = *(int *)(unaff_EDI + 0x2a8);
              }
              if (iVar3 - iVar2 < 1) break;
              FUN_010622c0(0,param_2,iVar5 + iVar2 * iVar1 * 2,iVar3 - iVar2,iVar1);
              param_2 = param_2 + iVar1;
              iVar12 = iVar11;
            } while (iVar11 < param_6);
          }
          *param_7 = iVar12;
        }
        else {
          iVar12 = 0;
          if (0 < param_6) {
            dStack_20 = (double)CONCAT44(param_5,param_4);
            dStack_18 = (double)param_6;
            iStack_28 = iVar11;
            iStack_24 = iVar3;
            do {
              uVar14 = ftol();
              iVar2 = __alldiv((uint)uVar14 + uStack_4,
                               (int)((ulonglong)uVar14 >> 0x20) + unaff_retaddr +
                               (uint)CARRY4((uint)uVar14,uStack_4),iStack_28,iStack_24);
              iVar11 = iVar12 + 1;
              uVar14 = ftol();
              iVar3 = __alldiv((uint)uVar14 + uStack_4,
                               (int)((ulonglong)uVar14 >> 0x20) + unaff_retaddr +
                               (uint)CARRY4((uint)uVar14,uStack_4),iStack_28,iStack_24);
              if (*(int *)(unaff_EDI + 0x2a8) <= iVar3) {
                iVar3 = *(int *)(unaff_EDI + 0x2a8);
              }
              if (iVar3 - iVar2 < 1) break;
              FUN_01062130(0,param_2,iVar5 + iVar2 * iVar1 * 2,iVar3 - iVar2,iVar1);
              param_2 = (int *)((int)param_2 + iVar1 * 2);
              iVar12 = iVar11;
            } while (iVar11 < param_6);
          }
          *param_7 = iVar12;
        }
      }
      else if (param_1 == (int *)0x0) {
        iVar12 = 0;
        if (0 < param_6) {
          dStack_20 = (double)CONCAT44(param_5,param_4);
          dStack_18 = (double)param_6;
          iStack_28 = iVar11;
          iStack_24 = iVar3;
          do {
            uVar14 = ftol();
            iVar2 = __alldiv((uint)uVar14 + uStack_4,
                             (int)((ulonglong)uVar14 >> 0x20) + unaff_retaddr +
                             (uint)CARRY4((uint)uVar14,uStack_4),iStack_28,iStack_24);
            iVar11 = iVar12 + 1;
            uVar14 = ftol();
            iVar3 = __alldiv((uint)uVar14 + uStack_4,
                             (int)((ulonglong)uVar14 >> 0x20) + unaff_retaddr +
                             (uint)CARRY4((uint)uVar14,uStack_4),iStack_28,iStack_24);
            if (*(int *)(unaff_EDI + 0x2a8) <= iVar3) {
              iVar3 = *(int *)(unaff_EDI + 0x2a8);
            }
            if (iVar3 - iVar2 < 1) break;
            FUN_01062600(0,param_2,iVar5 + iVar2 * iVar1 * 4,iVar3 - iVar2,iVar1);
            param_2 = (int *)((int)param_2 + iVar1 * 2);
            iVar12 = iVar11;
          } while (iVar11 < param_6);
        }
        *param_7 = iVar12;
      }
      else {
        iVar12 = 0;
        if (0 < param_6) {
          dStack_20 = (double)CONCAT44(param_5,param_4);
          dStack_18 = (double)param_6;
          param_2 = param_1;
          iStack_28 = iVar11;
          iStack_24 = iVar3;
          do {
            uVar14 = ftol();
            iVar2 = __alldiv((uint)uVar14 + uStack_4,
                             (int)((ulonglong)uVar14 >> 0x20) + unaff_retaddr +
                             (uint)CARRY4((uint)uVar14,uStack_4),iStack_28,iStack_24);
            iVar11 = iVar12 + 1;
            uVar14 = ftol();
            iVar3 = __alldiv((uint)uVar14 + uStack_4,
                             (int)((ulonglong)uVar14 >> 0x20) + unaff_retaddr +
                             (uint)CARRY4((uint)uVar14,uStack_4),iStack_28,iStack_24);
            if (*(int *)(unaff_EDI + 0x2a8) <= iVar3) {
              iVar3 = *(int *)(unaff_EDI + 0x2a8);
            }
            if (iVar3 - iVar2 < 1) break;
            FUN_01062480(0,param_2,iVar5 + iVar2 * iVar1 * 4,iVar3 - iVar2,iVar1);
            param_2 = param_2 + iVar1;
            iVar12 = iVar11;
          } while (iVar11 < param_6);
        }
        *param_7 = iVar12;
      }
    }
    FUN_010609f0();
    FUN_01060b00(0);
  }
  return iStack_3c;
}


