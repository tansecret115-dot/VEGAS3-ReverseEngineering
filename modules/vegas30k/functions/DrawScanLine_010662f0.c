/* Module: vegas30k.dll
   Function: DrawScanLine
   Address: 010662f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* private: void __thiscall A_Buffer::DrawScanLine(int) */

void __thiscall A_Buffer::DrawScanLine(A_Buffer *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  SUBPIXELMASK *pSVar4;
  A_Buffer *this_00;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  SUBPIXELMASK *pSVar12;
  int *piVar13;
  int in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  uint in_stack_00000018;
  uint uStack0000001c;
  char cStack00000020;
  undefined3 uStack00000021;
  int iStack00000024;
  int *in_stack_00000028;
  int in_stack_0000002c;
  undefined1 in_stack_00000030;
  undefined1 in_stack_00000031;
  undefined1 in_stack_00000032;
  byte in_stack_00000033;
  undefined1 in_stack_00000038;
  undefined1 in_stack_00000039;
  undefined1 in_stack_0000003a;
  byte in_stack_0000003b;
  int in_stack_000120c4;
  
                    /* 0x662f0  36  ?DrawScanLine@A_Buffer@@AAEXH@Z */
  FUN_01002100();
  iStack00000024 = *(int *)(this_00 + in_stack_000120c4 * 4);
  piVar9 = (int *)0x0;
  param_1 = 0;
  _cStack00000020 = _cStack00000020 & 0xffffff00;
  if (iStack00000024 != 0) {
    iVar3 = *(int *)(iStack00000024 + 0x50) >> 0xe;
    if (iVar3 < *(int *)(this_00 + 0x223c) + -1) {
      uStack0000001c = *(int *)(iStack00000024 + 0x50) + 0x4000U & 0xffffc000;
      uVar5 = *(int *)(this_00 + 0x2238) * iVar3;
      uVar6 = uVar5 & 0x80000007;
      *(int *)(this_00 + 0x25a8) =
           ((*(int *)(this_00 + 0x2240) - in_stack_000120c4) + -1) * *(int *)(this_00 + 0x2230) +
           ((int)(uVar5 + ((int)uVar5 >> 0x1f & 7U)) >> 3) + *(int *)(this_00 + 0x222c);
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
      }
      *(uint *)(this_00 + 0x25ac) = uVar6;
      do {
        if (iStack00000024 == 0) goto LAB_01066427;
LAB_01066397:
        do {
          iVar3 = iStack00000024;
          if (*(int *)(iStack00000024 + 0x50) < (int)uStack0000001c) {
            iVar7 = (_cStack00000020 & 0xff) * 0x120;
            piVar13 = (int *)(&stack0x000000c0 + iVar7);
            _cStack00000020 = CONCAT31(uStack00000021,cStack00000020 + '\x01');
            *(undefined4 *)(&stack0x000001dc + iVar7) = 0;
            *piVar13 = iStack00000024;
            piVar10 = piVar13;
            piVar2 = piVar13;
            if (piVar9 != (int *)0x0) {
              piVar2 = (int *)piVar9[0x47];
              piVar10 = piVar9;
              while (piVar1 = piVar2, piVar1 != (int *)0x0) {
                piVar10 = piVar1;
                piVar2 = (int *)piVar1[0x47];
              }
              piVar10[0x47] = (int)piVar13;
              piVar10 = piVar9;
              piVar2 = (int *)param_1;
            }
            param_1 = (int)piVar2;
            CScanlineIntersect::PreStep
                      ((CScanlineIntersect *)*piVar13,(SCANLINESTEP *)(&stack0x000000c4 + iVar7),
                       in_stack_000120c4,(void *)0x0,*(SF3DRENDERSTATE *)(this_00 + 0x2214));
            iStack00000024 = *(int *)(iVar3 + 0x58);
            piVar9 = piVar10;
            if (iStack00000024 != 0) goto LAB_01066397;
          }
LAB_01066427:
          in_stack_00000028 = &param_1;
          in_stack_0000002c = 0;
          in_stack_00000018 = 0;
          in_stack_0000000c = 0;
          in_stack_00000014 = 0;
          in_stack_00000010 = 0;
          uVar5 = 0;
          piVar13 = piVar9;
          if (piVar9 == (int *)0x0) {
            *(int *)(this_00 + 0x25a8) = *(int *)(this_00 + 0x25a8) + *(int *)(this_00 + 0x2234);
            *(int *)(this_00 + 0x25ac) = *(int *)(this_00 + 0x25ac) + *(int *)(this_00 + 0x2238);
          }
          else {
            do {
              if (piVar9[0x18] == -1) {
                (**(code **)(*piVar9 + 0x60))(piVar9,&stack0x00000030,this_00 + 0x2000);
                iVar3 = 0x400;
                in_stack_00000010 = CONCAT11(in_stack_00000033,in_stack_00000032) & 0xff;
                in_stack_00000014 =
                     CONCAT12(in_stack_00000033,CONCAT11(in_stack_00000032,in_stack_00000031)) &
                     0xff;
                in_stack_0000000c =
                     CONCAT12(in_stack_00000032,CONCAT11(in_stack_00000031,in_stack_00000030)) &
                     0xff;
                in_stack_00000018 = (uint)in_stack_00000033;
                uVar5 = uVar5 + 0x400;
              }
              else {
                if (in_stack_0000002c == 0) {
                  in_stack_0000002c = 1;
                  puVar11 = (undefined4 *)&stack0x00000040;
                  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
                    *puVar11 = 0;
                    puVar11 = puVar11 + 1;
                  }
                }
                pSVar12 = (SUBPIXELMASK *)(piVar9 + 0x27);
                GetSubPixelCoverage(this_00,(SCANLINESTEP *)(piVar9 + 1),pSVar12);
                in_stack_00000008 = 0x20;
                pSVar4 = pSVar12;
                puVar8 = (uint *)&stack0x00000040;
                do {
                  uVar6 = *puVar8;
                  *(uint *)pSVar4 = *(uint *)pSVar4 & ~uVar6;
                  *puVar8 = *(uint *)pSVar4 | uVar6;
                  in_stack_00000008 = in_stack_00000008 + -1;
                  pSVar4 = pSVar4 + 4;
                  puVar8 = puVar8 + 1;
                } while (in_stack_00000008 != 0);
                iVar3 = 0;
                in_stack_00000008 = 0x20;
                do {
                  uVar6 = *(uint *)pSVar12;
                  pSVar12 = pSVar12 + 4;
                  in_stack_00000008 = in_stack_00000008 + -1;
                  iVar3 = (uint)(byte)this_00[(uVar6 & 0xffff) + 0x26bc] + iVar3 +
                          (uint)(byte)this_00[(uVar6 >> 0x10) + 0x26bc];
                } while (in_stack_00000008 != 0);
                (**(code **)(*piVar9 + 0x60))(piVar9,&stack0x00000038,this_00 + 0x2000);
                in_stack_00000010 =
                     in_stack_00000010 +
                     ((CONCAT11(in_stack_0000003b,in_stack_0000003a) & 0xff) * iVar3 >> 10);
                in_stack_00000014 =
                     in_stack_00000014 +
                     ((CONCAT12(in_stack_0000003b,CONCAT11(in_stack_0000003a,in_stack_00000039)) &
                      0xff) * iVar3 >> 10);
                in_stack_0000000c =
                     in_stack_0000000c +
                     ((CONCAT12(in_stack_0000003a,CONCAT11(in_stack_00000039,in_stack_00000038)) &
                      0xff) * iVar3 >> 10);
                in_stack_00000018 = in_stack_00000018 + ((uint)in_stack_0000003b * iVar3 >> 10);
                uVar5 = uVar5 + iVar3;
                piVar13 = (int *)param_1;
              }
              CScanlineIntersect::Step
                        ((CScanlineIntersect *)*piVar9,(SCANLINESTEP *)(piVar9 + 1),
                         *(SF3DRENDERSTATE *)(this_00 + 0x2214),iVar3);
              if (piVar9[0x26] == 0) {
                in_stack_00000028 = piVar9 + 0x47;
                piVar9 = (int *)*in_stack_00000028;
              }
              else {
                piVar9 = (int *)piVar9[0x47];
                *in_stack_00000028 = (int)piVar9;
                piVar13 = (int *)param_1;
              }
            } while (piVar9 != (int *)0x0);
            if (0x3ff < uVar5) {
              uVar5 = 0x400;
            }
            FUN_01067cc0(this_00 + 0x221c,*(undefined4 *)(this_00 + 0x126c8),this_00 + 0x2544,
                         this_00 + 0x2600,*(undefined4 *)(this_00 + uVar5 * 4 + 0x126cc),
                         in_stack_00000010,in_stack_00000014,in_stack_0000000c,in_stack_00000018);
            piVar9 = piVar13;
          }
          uStack0000001c = uStack0000001c + 0x4000;
        } while (iStack00000024 != 0);
      } while (piVar9 != (int *)0x0);
    }
  }
  return;
}


