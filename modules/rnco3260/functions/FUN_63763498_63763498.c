/* Module: rnco3260.dll
   Function: FUN_63763498
   Address: 63763498
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_63763498(int param_1,int param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  undefined8 *puVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int in_stack_0000001c;
  uint in_stack_00000020;
  
  DAT_6379a424 = in_stack_0000001c;
  iVar3 = (in_stack_00000020 & 1) * 0x2d0;
  puVar8 = (ulonglong *)(param_1 + iVar3 + _DAT_6379a428);
  puVar5 = (undefined4 *)(param_2 + iVar3 + _DAT_6379a42c);
  if ((DAT_6379a414 >> 1 != 0) && (uVar7 = DAT_6379a410 >> 4, uVar7 != 0)) {
    iVar3 = 0x2d0;
    DAT_6379a418 = DAT_6379a414 >> 1;
    DAT_6379a41c = uVar7;
    puVar10 = param_3;
    puVar9 = puVar8;
    puVar6 = puVar5;
    while( true ) {
      do {
        uVar1 = *puVar5;
        uVar2 = puVar5[0x5a];
        uVar17 = *puVar8;
        uVar16 = (undefined1)((uint)uVar2 >> 0x18);
        uVar13 = (undefined1)((uint)uVar1 >> 0x18);
        uVar15 = (undefined1)((uint)uVar2 >> 0x10);
        uVar12 = (undefined1)((uint)uVar1 >> 0x10);
        uVar14 = (undefined1)((uint)uVar2 >> 8);
        uVar11 = (undefined1)((uint)uVar1 >> 8);
        *param_3 = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar14,(char)(uVar17 >>
                                                                                      0x18)),uVar11)
                                                       ,(char)(uVar17 >> 0x10)),(char)uVar2),
                                     (char)(uVar17 >> 8)),CONCAT11((char)uVar1,(char)uVar17));
        param_3[1] = CONCAT17(uVar16,CONCAT16((char)(uVar17 >> 0x38),
                                              CONCAT15(uVar13,CONCAT14((char)(uVar17 >> 0x30),
                                                                       CONCAT13(uVar15,CONCAT12((
                                                  char)(uVar17 >> 0x28),
                                                  CONCAT11(uVar12,(char)(uVar17 >> 0x20))))))));
        uVar18 = *(ulonglong *)((int)puVar8 + iVar3 * 2) >> 1 & 0x7f7f7f7f7f7f7f7f;
        uVar17 = *puVar8 >> 1 & 0x7f7f7f7f7f7f7f7f;
        *(ulonglong *)(in_stack_0000001c + (int)param_3) =
             CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar14,(char)(uVar17 >> 0x18) +
                                                                          (char)(uVar18 >> 0x18)),
                                                          uVar11),
                                                 (char)(uVar17 >> 0x10) + (char)(uVar18 >> 0x10)),
                                        (char)uVar2),(char)(uVar17 >> 8) + (char)(uVar18 >> 8)),
                      CONCAT11((char)uVar1,(char)uVar17 + (char)uVar18));
        *(ulonglong *)(in_stack_0000001c + 8 + (int)param_3) =
             CONCAT17(uVar16,CONCAT16((char)(uVar17 >> 0x38) + (char)(uVar18 >> 0x38),
                                      CONCAT15(uVar13,CONCAT14((char)(uVar17 >> 0x30) +
                                                               (char)(uVar18 >> 0x30),
                                                               CONCAT13(uVar15,CONCAT12((char)(
                                                  uVar17 >> 0x28) + (char)(uVar18 >> 0x28),
                                                  CONCAT11(uVar12,(char)(uVar17 >> 0x20) +
                                                                  (char)(uVar18 >> 0x20))))))));
        uVar1 = puVar5[1];
        uVar2 = puVar5[0x5b];
        uVar17 = puVar8[1];
        uVar16 = (undefined1)((uint)uVar2 >> 0x18);
        uVar13 = (undefined1)((uint)uVar1 >> 0x18);
        uVar15 = (undefined1)((uint)uVar2 >> 0x10);
        uVar12 = (undefined1)((uint)uVar1 >> 0x10);
        uVar14 = (undefined1)((uint)uVar2 >> 8);
        uVar11 = (undefined1)((uint)uVar1 >> 8);
        param_3[2] = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar14,(char)(uVar17 >>
                                                                                        0x18)),
                                                                  uVar11),(char)(uVar17 >> 0x10)),
                                                (char)uVar2),(char)(uVar17 >> 8)),
                              CONCAT11((char)uVar1,(char)uVar17));
        param_3[3] = CONCAT17(uVar16,CONCAT16((char)(uVar17 >> 0x38),
                                              CONCAT15(uVar13,CONCAT14((char)(uVar17 >> 0x30),
                                                                       CONCAT13(uVar15,CONCAT12((
                                                  char)(uVar17 >> 0x28),
                                                  CONCAT11(uVar12,(char)(uVar17 >> 0x20))))))));
        uVar18 = *(ulonglong *)((int)puVar8 + iVar3 * 2 + 8) >> 1 & 0x7f7f7f7f7f7f7f7f;
        uVar17 = puVar8[1] >> 1 & 0x7f7f7f7f7f7f7f7f;
        *(ulonglong *)(in_stack_0000001c + 0x10 + (int)param_3) =
             CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar14,(char)(uVar17 >> 0x18) +
                                                                          (char)(uVar18 >> 0x18)),
                                                          uVar11),
                                                 (char)(uVar17 >> 0x10) + (char)(uVar18 >> 0x10)),
                                        (char)uVar2),(char)(uVar17 >> 8) + (char)(uVar18 >> 8)),
                      CONCAT11((char)uVar1,(char)uVar17 + (char)uVar18));
        *(ulonglong *)(in_stack_0000001c + 0x18 + (int)param_3) =
             CONCAT17(uVar16,CONCAT16((char)(uVar17 >> 0x38) + (char)(uVar18 >> 0x38),
                                      CONCAT15(uVar13,CONCAT14((char)(uVar17 >> 0x30) +
                                                               (char)(uVar18 >> 0x30),
                                                               CONCAT13(uVar15,CONCAT12((char)(
                                                  uVar17 >> 0x28) + (char)(uVar18 >> 0x28),
                                                  CONCAT11(uVar12,(char)(uVar17 >> 0x20) +
                                                                  (char)(uVar18 >> 0x20))))))));
        param_3 = param_3 + 4;
        puVar8 = puVar8 + 2;
        uVar7 = uVar7 - 1;
        puVar5 = puVar5 + 2;
      } while (uVar7 != 0);
      puVar8 = puVar9 + 0xb4;
      param_3 = (undefined8 *)((int)puVar10 + DAT_6379a424 * 2);
      uVar4 = DAT_6379a418 - 1;
      if (uVar4 == 0) break;
      puVar5 = puVar6;
      uVar7 = DAT_6379a41c;
      DAT_6379a418 = uVar4;
      puVar10 = param_3;
      puVar9 = puVar8;
      if (((uVar4 & 1) == 0) && (puVar5 = puVar6 + 0x168, puVar6 = puVar5, (uVar4 & 1) == 0)) {
        iVar3 = 0;
      }
    }
  }
  return;
}


