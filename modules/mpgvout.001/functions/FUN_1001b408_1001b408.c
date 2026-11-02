/* Module: mpgvout.001
   Function: FUN_1001b408
   Address: 1001b408
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_1001b408(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,int param_4,int param_5,
            int param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  
  do {
    uVar1 = *param_2;
    uVar2 = *(undefined8 *)(param_6 + (int)param_2);
    uVar3 = *param_1;
    uVar4 = *(undefined8 *)(param_5 + (int)param_1);
    uVar7 = pavgb((char)uVar1,(char)uVar3);
    uVar8 = pavgb((char)((ulonglong)uVar1 >> 8),(char)((ulonglong)uVar3 >> 8));
    uVar9 = pavgb((char)((ulonglong)uVar1 >> 0x10),(char)((ulonglong)uVar3 >> 0x10));
    uVar10 = pavgb((char)((ulonglong)uVar1 >> 0x18),(char)((ulonglong)uVar3 >> 0x18));
    uVar11 = pavgb((char)((ulonglong)uVar1 >> 0x20),(char)((ulonglong)uVar3 >> 0x20));
    uVar12 = pavgb((char)((ulonglong)uVar1 >> 0x28),(char)((ulonglong)uVar3 >> 0x28));
    uVar13 = pavgb((char)((ulonglong)uVar1 >> 0x30),(char)((ulonglong)uVar3 >> 0x30));
    uVar14 = pavgb((char)((ulonglong)uVar1 >> 0x38),(char)((ulonglong)uVar3 >> 0x38));
    uVar15 = pavgb((char)uVar2,(char)uVar4);
    uVar16 = pavgb((char)((ulonglong)uVar2 >> 8),(char)((ulonglong)uVar4 >> 8));
    uVar17 = pavgb((char)((ulonglong)uVar2 >> 0x10),(char)((ulonglong)uVar4 >> 0x10));
    uVar18 = pavgb((char)((ulonglong)uVar2 >> 0x18),(char)((ulonglong)uVar4 >> 0x18));
    uVar19 = pavgb((char)((ulonglong)uVar2 >> 0x20),(char)((ulonglong)uVar4 >> 0x20));
    uVar20 = pavgb((char)((ulonglong)uVar2 >> 0x28),(char)((ulonglong)uVar4 >> 0x28));
    uVar21 = pavgb((char)((ulonglong)uVar2 >> 0x30),(char)((ulonglong)uVar4 >> 0x30));
    uVar22 = pavgb((char)((ulonglong)uVar2 >> 0x38),(char)((ulonglong)uVar4 >> 0x38));
    *param_2 = CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,CONCAT13(uVar10,
                                                  CONCAT12(uVar9,CONCAT11(uVar8,uVar7)))))));
    *(ulonglong *)(param_6 + (int)param_2) =
         CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18,CONCAT12(
                                                  uVar17,CONCAT11(uVar16,uVar15)))))));
    param_4 = param_4 + -4;
    puVar5 = (undefined8 *)((int)param_1 + param_5 * 2);
    puVar6 = (undefined8 *)((int)param_2 + param_6 * 2);
    uVar1 = *puVar6;
    uVar2 = *(undefined8 *)(param_6 + (int)puVar6);
    uVar3 = *puVar5;
    uVar4 = *(undefined8 *)(param_5 + (int)puVar5);
    uVar7 = pavgb((char)uVar1,(char)uVar3);
    uVar8 = pavgb((char)((ulonglong)uVar1 >> 8),(char)((ulonglong)uVar3 >> 8));
    uVar9 = pavgb((char)((ulonglong)uVar1 >> 0x10),(char)((ulonglong)uVar3 >> 0x10));
    uVar10 = pavgb((char)((ulonglong)uVar1 >> 0x18),(char)((ulonglong)uVar3 >> 0x18));
    uVar11 = pavgb((char)((ulonglong)uVar1 >> 0x20),(char)((ulonglong)uVar3 >> 0x20));
    uVar12 = pavgb((char)((ulonglong)uVar1 >> 0x28),(char)((ulonglong)uVar3 >> 0x28));
    uVar13 = pavgb((char)((ulonglong)uVar1 >> 0x30),(char)((ulonglong)uVar3 >> 0x30));
    uVar14 = pavgb((char)((ulonglong)uVar1 >> 0x38),(char)((ulonglong)uVar3 >> 0x38));
    uVar15 = pavgb((char)uVar2,(char)uVar4);
    uVar16 = pavgb((char)((ulonglong)uVar2 >> 8),(char)((ulonglong)uVar4 >> 8));
    uVar17 = pavgb((char)((ulonglong)uVar2 >> 0x10),(char)((ulonglong)uVar4 >> 0x10));
    uVar18 = pavgb((char)((ulonglong)uVar2 >> 0x18),(char)((ulonglong)uVar4 >> 0x18));
    uVar19 = pavgb((char)((ulonglong)uVar2 >> 0x20),(char)((ulonglong)uVar4 >> 0x20));
    uVar20 = pavgb((char)((ulonglong)uVar2 >> 0x28),(char)((ulonglong)uVar4 >> 0x28));
    uVar21 = pavgb((char)((ulonglong)uVar2 >> 0x30),(char)((ulonglong)uVar4 >> 0x30));
    uVar22 = pavgb((char)((ulonglong)uVar2 >> 0x38),(char)((ulonglong)uVar4 >> 0x38));
    *puVar6 = CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,CONCAT13(uVar10,
                                                  CONCAT12(uVar9,CONCAT11(uVar8,uVar7)))))));
    *(ulonglong *)(param_6 + (int)puVar6) =
         CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18,CONCAT12(
                                                  uVar17,CONCAT11(uVar16,uVar15)))))));
    param_1 = (undefined8 *)((int)puVar5 + param_5 * 2);
    param_2 = (undefined8 *)((int)puVar6 + param_6 * 2);
  } while (param_4 != 0);
  return;
}


