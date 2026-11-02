/* Module: vegas30.exe
   Function: FUN_005a96c0
   Address: 005a96c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005a9823) */
/* WARNING: Removing unreachable block (ram,0x005aa4c2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005a96c0(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,uint param_5,
                uint param_6,int param_7,int param_8)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  void *_Memory;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  undefined4 *puVar20;
  int iVar21;
  float10 fVar22;
  longlong lVar23;
  longlong lVar24;
  undefined8 uVar25;
  int iStack00000028;
  int iStack00000030;
  int iStack00000040;
  int iStack00000044;
  uint in_stack_00000078;
  uint in_stack_0000007c;
  int in_stack_00000080;
  int in_stack_00000084;
  undefined4 in_stack_00000088;
  undefined4 in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  LONG in_stack_00000098;
  LONG in_stack_0000009c;
  int in_stack_000000a0;
  int in_stack_000000a4;
  uint in_stack_000000c8;
  int in_stack_000000d0;
  uint in_stack_000000d8;
  float in_stack_00001478;
  float in_stack_0000149c;
  float in_stack_000014a0;
  float in_stack_000014ac;
  float in_stack_000014d0;
  double in_stack_000014ec;
  int in_stack_00001508;
  int *piStack_8;
  int iVar26;
  
  FUN_0060ac30();
  iVar17 = *(int *)(param_3 + 0x24);
  lVar23 = ftol();
  iVar26 = 0;
  bVar7 = false;
  if (param_7 != 0) {
    lVar24 = ftol();
    lVar23 = lVar23 + lVar24;
  }
  param_1 = (uint *)((ulonglong)lVar23 >> 0x20);
  puVar19 = param_1;
  for (iVar13 = 0x26; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar19 = 0;
    puVar19 = puVar19 + 1;
  }
  param_1[0x20] = param_4;
  param_1[0x21] = param_5;
  param_1[10] = (uint)((float)*(int *)(param_3 + 0x5c) * _DAT_0061a460);
  piVar10 = DAT_0064b50c;
  param_1[0x24] = (uint)DAT_0064b50c;
  if (piVar10 != (int *)0x0) {
    (**(code **)(*piVar10 + 4))();
  }
  FUN_005b83b0();
  iVar13 = FUN_00540df0();
  if (((iVar13 == 0) || (param_8 == 0)) ||
     ((*(byte *)(*(int *)(iVar13 + 0x30) + 0x134) & 0x20) != 0)) {
    uVar2 = *(uint *)(param_3 + 0x84);
    FUN_005ba950();
    uVar9 = FUN_005a7b00();
    param_1[0xc] = uVar9;
    param_1[6] = *(uint *)(param_3 + 0x58);
    param_1[7] = *(uint *)(param_3 + 0x5c);
    piVar10 = (int *)FUN_005b87b0();
    uVar18 = *piVar10 - 1;
    iVar13 = FUN_005ba570();
    bVar6 = false;
    iVar14 = (-(uint)(iVar13 != 0) & 0xfffffffe) + 1;
    uVar9 = -(uint)(iVar13 != 0) & uVar18;
    if (-1 < (int)uVar9) {
      do {
        if ((int)uVar18 < (int)uVar9) break;
        iVar13 = *(int *)(piVar10[2] + uVar9 * 4);
        if (((*(uint *)(iVar13 + 0x10) & 0x20000) == 0) && (*(int *)(iVar13 + 4) == 3)) {
          if (param_1[8] == 0) {
            iVar26 = _SfList_CreateExZ_32();
            if (iVar26 < 0) goto LAB_005aa57b;
          }
          puVar20 = &stack0x000000c8;
          for (iVar15 = 0x514; iVar15 != 0; iVar15 = iVar15 + -1) {
            *puVar20 = 0;
            puVar20 = puVar20 + 1;
          }
          uVar16 = *(uint *)(iVar13 + 0x44) >> 7 & 1;
          uVar12 = in_stack_000000c8 & 0xfffffff1;
          in_stack_000000c8 =
               (*(uint *)(iVar13 + 0x44) >> 6 & 1) << 1 |
               uVar16 << 3 | (*(uint *)(iVar13 + 0x44) >> 5 & 1) << 2 | uVar12;
          if (uVar16 != 0) {
            in_stack_000000c8 = CONCAT31((int3)(uVar12 >> 8),(char)in_stack_000000c8) | 4;
          }
          if ((in_stack_000000c8 & 4) != 0) {
            iVar15 = uVar9 + iVar14;
            if (-1 < iVar15) {
              while (iVar15 <= (int)uVar18) {
                iVar21 = *(int *)(piVar10[2] + iVar15 * 4);
                if ((((*(byte *)(iVar21 + 0x12) & 2) == 0) && (*(int *)(iVar21 + 4) == 3)) &&
                   ((*(byte *)(iVar21 + 0x44) & 0x40) != 0)) {
                  if (!bVar6) {
                    in_stack_000000c8 = in_stack_000000c8 | 8;
                    bVar6 = true;
                  }
                  goto LAB_005a9995;
                }
                if (((*(byte *)(iVar21 + 0x44) & 0x40) != 0) ||
                   (iVar15 = iVar15 + iVar14, iVar15 < 0)) break;
              }
            }
            in_stack_000000c8 = in_stack_000000c8 & 0xfffffff3;
          }
LAB_005a9995:
          if ((in_stack_000000c8 & 2) == 0) {
LAB_005a99e1:
            in_stack_000000d0 = 0;
            piVar11 = (int *)FUN_005a8990();
            if (piVar11 != (int *)0x0) {
              iVar15 = piVar11[1];
              iVar21 = 0;
              iStack00000030 = 0;
              piStack_8 = (int *)0x0;
              bVar8 = false;
              if ((iVar15 == 0) || ((*(byte *)(iVar15 + 0x10) & 2) != 0)) {
                iStack00000028 = *piVar11;
                if ((iStack00000028 == 0) || ((*(byte *)(iStack00000028 + 0x10) & 2) != 0))
                goto LAB_005a9db6;
              }
              else {
                iStack00000028 = *piVar11;
                if ((*(byte *)(iStack00000028 + 0x10) & 2) == 0) {
                  if ((piVar11[0x32] & 2U) == 0) {
                    iStack00000030 = *piVar11;
                    piStack_8 = *(int **)(iStack00000030 + 0x200);
                    iVar21 = 1;
                    iStack00000028 = iVar15;
                  }
                  else {
                    piStack_8 = *(int **)(iStack00000028 + 0x204);
                    iStack00000030 = iVar15;
                  }
                }
                else {
                  iVar21 = 1;
                  if ((*(byte *)(piVar11 + 0x32) & 2) == 0) {
                    piStack_8 = *(int **)(iStack00000028 + 0x200);
                    bVar8 = true;
                    iStack00000028 = iVar15;
                  }
                  else {
                    piStack_8 = *(int **)(iStack00000028 + 0x204);
                    bVar8 = true;
                    iStack00000028 = iVar15;
                  }
                }
              }
              if (iStack00000028 != 0) {
                if (*(float *)(&stack0x000000a8 + iVar21 * 8) <= _DAT_00610f20) {
                  *(undefined4 *)(&stack0x000000ac + iVar21 * 8) = 0;
                }
                FUN_005a7d40();
                in_stack_000000d0 = 1;
              }
              if (iStack00000030 == 0) {
                if ((iStack00000028 != 0) && (piVar11[9] != 0)) {
                  uVar12 = piVar11[0x32];
                  if (bVar8) {
                    uVar12 = ~uVar12;
                  }
                  else if ((uVar12 & 2) == 0) {
                    piStack_8 = *(int **)(iStack00000028 + 0x200);
                  }
                  else {
                    piStack_8 = *(int **)(iStack00000028 + 0x204);
                  }
                  in_stack_000000d8 = (uVar12 & 2) << 3 | in_stack_000000d8 & 0xffffffef;
                  if ((piStack_8 != (int *)0x0) && (*piStack_8 != 0)) {
                    FUN_005a7b00();
                  }
                }
              }
              else {
                uVar12 = piVar11[4];
                _in_stack_00000088 = lVar23 - *(longlong *)(piVar11 + 4);
                in_stack_00000090 = param_6 - uVar12;
                in_stack_00000094 = (param_7 - piVar11[5]) - (uint)(param_6 < uVar12);
                FUN_005a7d40();
                FUN_005a7b00();
                in_stack_000000d0 = in_stack_000000d0 + 1;
              }
            }
LAB_005a9db6:
            if (((*(byte *)(iVar13 + 0x44) & 4) == 0) && (-1 < iVar26)) {
              FUN_005a7b00();
            }
            if (((in_stack_000000c8 & 2) != 0) && (-1 < iVar26)) {
              FUN_005a7b00();
            }
            FUN_0059e4f0();
            iVar15 = FUN_0059e4f0();
            if ((iVar15 != 0) && (in_stack_00001478 < _DAT_00610f20)) {
              in_stack_00001478 = in_stack_00001478 * _DAT_00629a78;
            }
            iStack00000040 = *(int *)(iVar17 + 0x58);
            iStack00000044 = *(int *)(iVar17 + 0x5c);
            iVar15 = FUN_005222c0();
            if ((*(byte *)(iVar13 + 0x84) & 1) != 0) {
              fVar3 = *(float *)(iVar13 + 0x128);
              fVar4 = *(float *)(iVar13 + 300);
              iVar21 = *(int *)(iVar17 + 0x5c);
              fVar5 = *(float *)(iVar13 + 0x130);
              fVar1 = *(float *)(iVar13 + 0x134);
              fVar22 = (float10)FUN_005a5ff0();
              if ((((fVar3 != _DAT_00610f20) || (fVar4 != _DAT_00610f20)) ||
                  (fVar5 != _DAT_00610f20)) ||
                 ((float)((float10)((float)iVar21 * fVar1) / fVar22) != _DAT_00610f20)) {
                bVar7 = true;
              }
            }
            if ((iVar15 == 0) ||
               (((in_stack_000014ec == _DAT_00610fd8 && (in_stack_0000149c < in_stack_000014ac)) &&
                (in_stack_000014a0 < in_stack_000014d0)))) {
              uVar12 = 0;
            }
            else {
              uVar12 = 1;
            }
            in_stack_000000c8 = in_stack_000000c8 ^ (uVar12 ^ in_stack_000000c8) & 1;
            if ((uVar2 & 1) == 0) {
              iVar13 = 1;
              do {
                if (iVar13 == 0) {
                  iVar15 = 0x7c;
                }
                else if ((iVar13 < 1) || (2 < iVar13)) {
                  iVar15 = 0;
                }
                else {
                  iVar15 = 0x84;
                }
                _Memory = calloc(1,iVar15 + 0x68);
                iVar15 = FUN_005222c0();
                if (iVar15 == 0) {
                  free(_Memory);
                }
                else {
                  *(int *)((int)_Memory + 100) = iVar13;
                  if (in_stack_00001508 == 0) {
                    iVar26 = _SfList_CreateExZ_32();
                  }
                  if (iVar26 < 0) break;
                  in_stack_00000098 = 0;
                  in_stack_0000009c = 0;
                  in_stack_000000a0 = *(int *)(iVar17 + 0x58) << 0xe;
                  in_stack_000000a4 = *(int *)(iVar17 + 0x5c) << 0xe;
                  InflateRect((LPRECT)&stack0x00000098,0,0);
                  IntersectRect((LPRECT)&stack0x00000078,(RECT *)&stack0x00000098,
                                (RECT *)&stack0x000000b8);
                  *(int *)((int)_Memory + 0x5c) =
                       -((int)((in_stack_00000078 & 0xffffc000) +
                              ((int)in_stack_00000078 >> 0x1f & 0x3fffU)) >> 0xe);
                  *(int *)((int)_Memory + 0x60) =
                       -((int)((in_stack_0000007c & 0xffffc000) +
                              ((int)in_stack_0000007c >> 0x1f & 0x3fffU)) >> 0xe);
                  FUN_005a6090();
                  *(undefined4 *)((int)_Memory + 0x6c) = 0;
                  *(undefined4 *)((int)_Memory + 0x70) = 0;
                  *(undefined4 *)((int)_Memory + 0x7c) = 0;
                  _SfList_InsertList_16();
                  iVar15 = ((int)((in_stack_00000080 - in_stack_00000078) +
                                 ((int)(in_stack_00000080 - in_stack_00000078) >> 0x1f & 0x3fffU))
                           >> 0xe) + 2;
                  if (iStack00000040 <= iVar15) {
                    iStack00000040 = iVar15;
                  }
                  iVar15 = ((int)((in_stack_00000084 - in_stack_0000007c) +
                                 ((int)(in_stack_00000084 - in_stack_0000007c) >> 0x1f & 0x3fffU))
                           >> 0xe) + 2;
                  if (iStack00000044 <= iVar15) {
                    iStack00000044 = iVar15;
                  }
                }
                iVar13 = iVar13 + 1;
              } while (iVar13 < 3);
            }
            if (iVar26 < 0) goto LAB_005aa57b;
            _SfList_InsertList_16();
          }
          else {
            iVar15 = uVar9 - iVar14;
            while( true ) {
              if ((iVar15 < 0) || ((int)uVar18 < iVar15)) goto LAB_005aa3c2;
              iVar21 = *(int *)(piVar10[2] + iVar15 * 4);
              if (((*(uint *)(iVar21 + 0x10) & 0x20000) == 0) && (*(int *)(iVar21 + 4) == 3)) break;
              iVar15 = iVar15 - iVar14;
            }
            if ((*(byte *)(iVar21 + 0x44) & 0x20) != 0) {
              bVar6 = false;
              goto LAB_005a99e1;
            }
          }
        }
LAB_005aa3c2:
        uVar9 = uVar9 + iVar14;
      } while (-1 < (int)uVar9);
      if ((-1 < iVar26) && (bVar7)) {
        iVar26 = FUN_005b14d0();
        if (-1 < iVar26) {
          iVar26 = FUN_005b2330();
        }
      }
    }
  }
  else {
    iVar17 = FUN_005f1460();
    iVar26 = FUN_005f6990();
    if (-1 < iVar26) {
      uVar25 = ftol();
      *(undefined8 *)(param_1 + 4) = uVar25;
      (**(code **)(*(int *)param_1[3] + 0x50))();
      param_1[2] = *(uint *)(iVar17 + 0x44);
      *param_1 = *param_1 | 1;
      param_1[6] = *(uint *)(param_3 + 0x58);
      param_1[7] = *(uint *)(param_3 + 0x5c);
    }
  }
LAB_005aa57b:
  FUN_005b84d0();
  if (!bVar7) {
    FUN_005a9240();
  }
  piVar10 = (int *)param_1[8];
  if (piVar10 == (int *)0x0) {
    iVar17 = 0;
  }
  else {
    iVar17 = *piVar10;
  }
  iVar13 = 0;
  if (0 < iVar17) {
    do {
      if (*(int *)(piVar10[1] * iVar13 + 0x144c + piVar10[2]) != 0) {
        param_1[0x23] = param_1[0x23] + 1;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar17);
  }
  return iVar26;
}


