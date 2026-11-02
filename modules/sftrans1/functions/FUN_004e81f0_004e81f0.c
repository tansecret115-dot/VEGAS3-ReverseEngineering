/* Module: sftrans1.dll
   Function: FUN_004e81f0
   Address: 004e81f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e81f0(int *param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7,uint param_8,int param_9,int *param_10,int param_11,
                 undefined4 param_12,undefined1 param_13,undefined4 param_14,undefined1 param_15)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  int extraout_ECX;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint *puVar12;
  int *piVar13;
  int in_stack_000120c4;
  
  FUN_00551640();
  param_9 = *(int *)(extraout_ECX + in_stack_000120c4 * 4);
  piVar10 = (int *)0x0;
  param_1 = (int *)0x0;
  param_8 = param_8 & 0xffffff00;
  if (param_9 != 0) {
    iVar4 = *(int *)(param_9 + 0x50) >> 0xe;
    if (iVar4 < *(int *)(extraout_ECX + 0x223c) + -1) {
      param_7 = *(int *)(param_9 + 0x50) + 0x4000U & 0xffffc000;
      uVar6 = *(int *)(extraout_ECX + 0x2238) * iVar4;
      uVar7 = uVar6 & 0x80000007;
      *(int *)(extraout_ECX + 0x25a8) =
           ((*(int *)(extraout_ECX + 0x2240) - in_stack_000120c4) + -1) *
           *(int *)(extraout_ECX + 0x2230) + ((int)(uVar6 + ((int)uVar6 >> 0x1f & 7U)) >> 3) +
           *(int *)(extraout_ECX + 0x222c);
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
      }
      *(uint *)(extraout_ECX + 0x25ac) = uVar7;
      do {
        if (param_9 == 0) goto LAB_004e8327;
LAB_004e8297:
        do {
          iVar4 = param_9;
          if (*(int *)(param_9 + 0x50) < (int)param_7) {
            iVar8 = (param_8 & 0xff) * 0x120;
            piVar13 = (int *)(&stack0x000000c0 + iVar8);
            param_8 = CONCAT31(param_8._1_3_,(char)param_8 + '\x01');
            *(undefined4 *)(&stack0x000001dc + iVar8) = 0;
            *piVar13 = param_9;
            piVar2 = piVar13;
            if (piVar10 != (int *)0x0) {
              piVar3 = (int *)piVar10[0x47];
              piVar2 = piVar10;
              while (piVar1 = piVar3, piVar1 != (int *)0x0) {
                piVar2 = piVar1;
                piVar3 = (int *)piVar1[0x47];
              }
              piVar2[0x47] = (int)piVar13;
              piVar13 = piVar10;
              piVar2 = param_1;
            }
            param_1 = piVar2;
            FUN_004e77b0(&stack0x000000c4 + iVar8,in_stack_000120c4,0,
                         *(undefined4 *)(extraout_ECX + 0x2214));
            param_9 = *(int *)(iVar4 + 0x58);
            piVar10 = piVar13;
            if (param_9 != 0) goto LAB_004e8297;
          }
LAB_004e8327:
          param_10 = (int *)&param_1;
          param_11 = 0;
          param_6 = 0;
          param_3 = 0;
          param_5 = 0;
          param_4 = 0;
          uVar6 = 0;
          piVar13 = piVar10;
          if (piVar10 == (int *)0x0) {
            *(int *)(extraout_ECX + 0x25a8) =
                 *(int *)(extraout_ECX + 0x25a8) + *(int *)(extraout_ECX + 0x2234);
            *(int *)(extraout_ECX + 0x25ac) =
                 *(int *)(extraout_ECX + 0x25ac) + *(int *)(extraout_ECX + 0x2238);
          }
          else {
            do {
              if (piVar10[0x18] == -1) {
                (**(code **)(*piVar10 + 0x60))(piVar10,&param_12,extraout_ECX + 0x2000);
                iVar4 = 0x400;
                param_4 = CONCAT12(param_13,CONCAT11(param_12._3_1_,param_12._2_1_)) & 0xff;
                param_5 = CONCAT12(param_12._3_1_,CONCAT11(param_12._2_1_,param_12._1_1_)) & 0xff;
                param_3 = CONCAT12(param_12._2_1_,CONCAT11(param_12._1_1_,(undefined1)param_12)) &
                          0xff;
                param_6 = CONCAT11(param_13,param_12._3_1_) & 0xff;
                uVar6 = uVar6 + 0x400;
              }
              else {
                if (param_11 == 0) {
                  param_11 = 1;
                  puVar11 = (undefined4 *)&stack0x00000040;
                  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *puVar11 = 0;
                    puVar11 = puVar11 + 1;
                  }
                }
                puVar12 = (uint *)(piVar10 + 0x27);
                FUN_004e8040(piVar10 + 1,puVar12);
                param_2 = 0x20;
                puVar5 = puVar12;
                puVar9 = (uint *)&stack0x00000040;
                do {
                  uVar7 = *puVar9;
                  *puVar5 = *puVar5 & ~uVar7;
                  *puVar9 = *puVar5 | uVar7;
                  param_2 = param_2 + -1;
                  puVar5 = puVar5 + 1;
                  puVar9 = puVar9 + 1;
                } while (param_2 != 0);
                iVar4 = 0;
                param_2 = 0x20;
                do {
                  uVar7 = *puVar12;
                  puVar12 = puVar12 + 1;
                  param_2 = param_2 + -1;
                  iVar4 = (uint)*(byte *)((uVar7 & 0xffff) + 0x26bc + extraout_ECX) + iVar4 +
                          (uint)*(byte *)((uVar7 >> 0x10) + 0x26bc + extraout_ECX);
                } while (param_2 != 0);
                (**(code **)(*piVar10 + 0x60))(piVar10,&param_14,extraout_ECX + 0x2000);
                param_4 = param_4 + ((CONCAT12(param_15,CONCAT11(param_14._3_1_,param_14._2_1_)) &
                                     0xff) * iVar4 >> 10);
                param_5 = param_5 + ((CONCAT12(param_14._3_1_,
                                               CONCAT11(param_14._2_1_,param_14._1_1_)) & 0xff) *
                                     iVar4 >> 10);
                param_3 = param_3 + ((CONCAT12(param_14._2_1_,
                                               CONCAT11(param_14._1_1_,(undefined1)param_14)) & 0xff
                                     ) * iVar4 >> 10);
                param_6 = param_6 + ((CONCAT11(param_15,param_14._3_1_) & 0xff) * iVar4 >> 10);
                uVar6 = uVar6 + iVar4;
                piVar13 = param_1;
              }
              FUN_004e7980(piVar10 + 1,*(undefined4 *)(extraout_ECX + 0x2214),iVar4);
              if (piVar10[0x26] == 0) {
                param_10 = piVar10 + 0x47;
                piVar10 = (int *)*param_10;
              }
              else {
                piVar10 = (int *)piVar10[0x47];
                *param_10 = (int)piVar10;
                piVar13 = param_1;
              }
            } while (piVar10 != (int *)0x0);
            if (0x3ff < uVar6) {
              uVar6 = 0x400;
            }
            FUN_004e9b90(extraout_ECX + 0x221c,*(undefined4 *)(extraout_ECX + 0x126c8),
                         extraout_ECX + 0x2544,extraout_ECX + 0x2600,
                         *(undefined4 *)(extraout_ECX + 0x126cc + uVar6 * 4),param_4,param_5,param_3
                         ,param_6);
            piVar10 = piVar13;
          }
          param_7 = param_7 + 0x4000;
        } while (param_9 != 0);
      } while (piVar10 != (int *)0x0);
    }
  }
  return;
}


