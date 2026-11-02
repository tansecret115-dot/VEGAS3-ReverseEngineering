/* Module: rnco3260.dll
   Function: FUN_63760200
   Address: 63760200
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63760200(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            int param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  
  for (; (1 < param_5 && (((uint)param_4 & 0xf) != 0)); param_4 = (undefined8 *)((int)param_4 + 4))
  {
    uVar5 = *(undefined1 *)param_2;
    uVar6 = *(undefined1 *)param_3;
    uVar7 = *(undefined1 *)param_1;
    param_2 = (undefined8 *)((int)param_2 + 1);
    puVar1 = (undefined1 *)((int)param_1 + 1);
    param_3 = (undefined8 *)((int)param_3 + 1);
    param_1 = (undefined8 *)((int)param_1 + 2);
    *(uint *)param_4 = CONCAT22(CONCAT11(*puVar1,uVar6),CONCAT11(uVar7,uVar5));
    param_5 = param_5 + -2;
  }
  iVar9 = param_5 + -0x10;
  iVar10 = iVar9;
  if (0xd < param_5 + -2) {
    do {
      uVar2 = *param_2;
      uVar3 = *param_3;
      uVar4 = *param_1;
      *param_4 = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)((ulonglong)uVar4 >>
                                                                             0x18),
                                                                       (char)((ulonglong)uVar3 >> 8)
                                                                      ),
                                                              (char)((ulonglong)uVar4 >> 0x10)),
                                                     (char)((ulonglong)uVar2 >> 8)),
                                            (char)((ulonglong)uVar4 >> 8)),(char)uVar3),
                          CONCAT11((char)uVar4,(char)uVar2));
      param_4[1] = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)((ulonglong)uVar4 >>
                                                                               0x38),
                                                                         (char)((ulonglong)uVar3 >>
                                                                               0x18)),
                                                                (char)((ulonglong)uVar4 >> 0x30)),
                                                       (char)((ulonglong)uVar2 >> 0x18)),
                                              (char)((ulonglong)uVar4 >> 0x28)),
                                     (char)((ulonglong)uVar3 >> 0x10)),
                            CONCAT11((char)((ulonglong)uVar4 >> 0x20),
                                     (char)((ulonglong)uVar2 >> 0x10)));
      uVar4 = param_1[1];
      param_4[2] = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)((ulonglong)uVar4 >>
                                                                               0x18),
                                                                         (char)((ulonglong)uVar3 >>
                                                                               0x28)),
                                                                (char)((ulonglong)uVar4 >> 0x10)),
                                                       (char)((ulonglong)uVar2 >> 0x28)),
                                              (char)((ulonglong)uVar4 >> 8)),
                                     (char)((ulonglong)uVar3 >> 0x20)),
                            CONCAT11((char)uVar4,(char)((ulonglong)uVar2 >> 0x20)));
      param_4[3] = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)((ulonglong)uVar4 >>
                                                                               0x38),
                                                                         (char)((ulonglong)uVar3 >>
                                                                               0x38)),
                                                                (char)((ulonglong)uVar4 >> 0x30)),
                                                       (char)((ulonglong)uVar2 >> 0x38)),
                                              (char)((ulonglong)uVar4 >> 0x28)),
                                     (char)((ulonglong)uVar3 >> 0x30)),
                            CONCAT11((char)((ulonglong)uVar4 >> 0x20),
                                     (char)((ulonglong)uVar2 >> 0x30)));
      param_1 = param_1 + 2;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      param_4 = param_4 + 4;
      iVar9 = iVar10 + -0x10;
      bVar8 = 0xf < iVar10;
      iVar10 = iVar9;
    } while (bVar8);
  }
  iVar10 = iVar9 + 0xe;
  if (-0xf < iVar9) {
    do {
      uVar5 = *(undefined1 *)param_2;
      uVar6 = *(undefined1 *)param_3;
      uVar7 = *(undefined1 *)param_1;
      param_2 = (undefined8 *)((int)param_2 + 1);
      puVar1 = (undefined1 *)((int)param_1 + 1);
      param_3 = (undefined8 *)((int)param_3 + 1);
      param_1 = (undefined8 *)((int)param_1 + 2);
      *(uint *)param_4 = CONCAT22(CONCAT11(*puVar1,uVar6),CONCAT11(uVar7,uVar5));
      param_4 = (undefined8 *)((int)param_4 + 4);
      bVar8 = 1 < iVar10;
      iVar10 = iVar10 + -2;
    } while (bVar8);
  }
  return;
}


