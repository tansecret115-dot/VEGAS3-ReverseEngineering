/* Module: rnco3260.dll
   Function: FUN_63762fba
   Address: 63762fba
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_63762fba(int param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int in_stack_0000001c;
  
  DAT_6379a424 = in_stack_0000001c;
  puVar12 = (undefined8 *)(param_1 + _DAT_6379a428);
  puVar8 = (undefined4 *)(param_2 + _DAT_6379a42c);
  uVar10 = DAT_6379a414 >> 1;
  if ((uVar10 != 0) &&
     (uVar11 = DAT_6379a410 >> 4, DAT_6379a418 = uVar10, uVar10 = uVar11, puVar14 = param_3,
     puVar13 = puVar12, puVar9 = puVar8, uVar11 != 0)) {
    while( true ) {
      do {
        DAT_6379a41c = uVar10;
        uVar3 = *puVar8;
        uVar4 = puVar8[0x5a];
        uVar1 = *puVar12;
        uVar5 = puVar8[1];
        uVar6 = puVar8[0x5b];
        uVar2 = puVar12[1];
        *param_3 = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)((ulonglong)uVar1 >>
                                                                               0x18),
                                                                         (char)((uint)uVar4 >> 8)),
                                                                (char)((ulonglong)uVar1 >> 0x10)),
                                                       (char)((uint)uVar3 >> 8)),
                                              (char)((ulonglong)uVar1 >> 8)),(char)uVar4),
                            CONCAT11((char)uVar1,(char)uVar3));
        param_3[1] = CONCAT17((char)((ulonglong)uVar1 >> 0x38),
                              CONCAT16((char)((uint)uVar4 >> 0x18),
                                       CONCAT15((char)((ulonglong)uVar1 >> 0x30),
                                                CONCAT14((char)((uint)uVar3 >> 0x18),
                                                         CONCAT13((char)((ulonglong)uVar1 >> 0x28),
                                                                  CONCAT12((char)((uint)uVar4 >>
                                                                                 0x10),
                                                                           CONCAT11((char)((
                                                  ulonglong)uVar1 >> 0x20),
                                                  (char)((uint)uVar3 >> 0x10))))))));
        param_3[2] = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)((ulonglong)uVar2
                                                                                 >> 0x18),
                                                                           (char)((uint)uVar6 >> 8))
                                                                  ,(char)((ulonglong)uVar2 >> 0x10))
                                                         ,(char)((uint)uVar5 >> 8)),
                                                (char)((ulonglong)uVar2 >> 8)),(char)uVar6),
                              CONCAT11((char)uVar2,(char)uVar5));
        param_3[3] = CONCAT17((char)((ulonglong)uVar2 >> 0x38),
                              CONCAT16((char)((uint)uVar6 >> 0x18),
                                       CONCAT15((char)((ulonglong)uVar2 >> 0x30),
                                                CONCAT14((char)((uint)uVar5 >> 0x18),
                                                         CONCAT13((char)((ulonglong)uVar2 >> 0x28),
                                                                  CONCAT12((char)((uint)uVar6 >>
                                                                                 0x10),
                                                                           CONCAT11((char)((
                                                  ulonglong)uVar2 >> 0x20),
                                                  (char)((uint)uVar5 >> 0x10))))))));
        param_3 = param_3 + 4;
        puVar12 = puVar12 + 2;
        uVar11 = uVar11 - 1;
        puVar8 = puVar8 + 2;
        uVar10 = DAT_6379a41c;
      } while (uVar11 != 0);
      puVar12 = puVar13 + 0xb4;
      param_3 = (undefined8 *)((int)puVar14 + DAT_6379a424);
      uVar7 = DAT_6379a418 - 1;
      if (uVar7 == 0) break;
      puVar8 = puVar9;
      uVar11 = DAT_6379a41c;
      DAT_6379a418 = uVar7;
      puVar14 = param_3;
      puVar13 = puVar12;
      if ((uVar7 & 1) == 0) {
        puVar8 = puVar9 + 0x168;
        puVar9 = puVar8;
      }
    }
  }
  return;
}


