/* Module: rnco3260.dll
   Function: FUN_6375f5e0
   Address: 6375f5e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6375f5e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
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
    uVar5 = *(undefined1 *)param_1;
    puVar1 = (undefined1 *)((int)param_1 + 1);
    uVar6 = *(undefined1 *)param_2;
    uVar7 = *(undefined1 *)param_3;
    param_1 = (undefined8 *)((int)param_1 + 2);
    param_2 = (undefined8 *)((int)param_2 + 1);
    param_3 = (undefined8 *)((int)param_3 + 1);
    *(uint *)param_4 = CONCAT22(CONCAT11(uVar7,*puVar1),CONCAT11(uVar6,uVar5));
    param_5 = param_5 + -2;
  }
  iVar9 = param_5 + -0x10;
  iVar10 = iVar9;
  if (0xd < param_5 + -2) {
    do {
      uVar2 = *param_1;
      uVar3 = *param_2;
      uVar4 = *param_3;
      *param_4 = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)((ulonglong)uVar4 >> 8)
                                                                       ,(char)((ulonglong)uVar2 >>
                                                                              0x18)),
                                                              (char)((ulonglong)uVar3 >> 8)),
                                                     (char)((ulonglong)uVar2 >> 0x10)),(char)uVar4),
                                   (char)((ulonglong)uVar2 >> 8)),CONCAT11((char)uVar3,(char)uVar2))
      ;
      param_4[1] = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)((ulonglong)uVar4 >>
                                                                               0x18),
                                                                         (char)((ulonglong)uVar2 >>
                                                                               0x38)),
                                                                (char)((ulonglong)uVar3 >> 0x18)),
                                                       (char)((ulonglong)uVar2 >> 0x30)),
                                              (char)((ulonglong)uVar4 >> 0x10)),
                                     (char)((ulonglong)uVar2 >> 0x28)),
                            CONCAT11((char)((ulonglong)uVar3 >> 0x10),
                                     (char)((ulonglong)uVar2 >> 0x20)));
      uVar2 = param_1[1];
      param_4[2] = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)((ulonglong)uVar4 >>
                                                                               0x28),
                                                                         (char)((ulonglong)uVar2 >>
                                                                               0x18)),
                                                                (char)((ulonglong)uVar3 >> 0x28)),
                                                       (char)((ulonglong)uVar2 >> 0x10)),
                                              (char)((ulonglong)uVar4 >> 0x20)),
                                     (char)((ulonglong)uVar2 >> 8)),
                            CONCAT11((char)((ulonglong)uVar3 >> 0x20),(char)uVar2));
      param_4[3] = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)((ulonglong)uVar4 >>
                                                                               0x38),
                                                                         (char)((ulonglong)uVar2 >>
                                                                               0x38)),
                                                                (char)((ulonglong)uVar3 >> 0x38)),
                                                       (char)((ulonglong)uVar2 >> 0x30)),
                                              (char)((ulonglong)uVar4 >> 0x30)),
                                     (char)((ulonglong)uVar2 >> 0x28)),
                            CONCAT11((char)((ulonglong)uVar3 >> 0x30),
                                     (char)((ulonglong)uVar2 >> 0x20)));
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
      uVar5 = *(undefined1 *)param_1;
      puVar1 = (undefined1 *)((int)param_1 + 1);
      uVar6 = *(undefined1 *)param_2;
      uVar7 = *(undefined1 *)param_3;
      param_1 = (undefined8 *)((int)param_1 + 2);
      param_2 = (undefined8 *)((int)param_2 + 1);
      param_3 = (undefined8 *)((int)param_3 + 1);
      *(uint *)param_4 = CONCAT22(CONCAT11(uVar7,*puVar1),CONCAT11(uVar6,uVar5));
      param_4 = (undefined8 *)((int)param_4 + 4);
      bVar8 = 1 < iVar10;
      iVar10 = iVar10 + -2;
    } while (bVar8);
  }
  return;
}


