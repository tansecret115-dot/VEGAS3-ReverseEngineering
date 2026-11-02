/* Module: erv33260.dll
   Function: FUN_6708a990
   Address: 6708a990
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall
FUN_6708a990(undefined4 *param_1,undefined8 *param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar6 = *param_1;
  uVar1 = param_1[4];
  uVar7 = packssdw(*param_2,param_2[1]);
  uVar8 = packssdw(param_2[2],param_2[3]);
  uVar7 = paddsw((ulonglong)
                 CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVar6 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar6 >> 0x10),uVar6)) >>
                                                  0x20),uVar6) >> 0x18),
                                          CONCAT12((char)((uint)uVar6 >> 8),(short)uVar6)) >> 0x10),
                          (short)uVar6) & 0xffffffff00ff00ff,uVar7);
  uVar8 = paddsw((ulonglong)
                 CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),
                                          CONCAT12((char)((uint)uVar1 >> 8),(short)uVar1)) >> 0x10),
                          (short)uVar1) & 0xffffffff00ff00ff,uVar8);
  sVar2 = (short)uVar7;
  sVar3 = (short)((ulonglong)uVar7 >> 0x10);
  sVar4 = (short)((ulonglong)uVar7 >> 0x20);
  sVar5 = (short)((ulonglong)uVar7 >> 0x30);
  uVar6 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * (char)((ulonglong)uVar7 >> 0x30) - (0xff < sVar5)
                   ,CONCAT12((0 < sVar4) * (sVar4 < 0x100) * (char)((ulonglong)uVar7 >> 0x20) -
                             (0xff < sVar4),
                             CONCAT11((0 < sVar3) * (sVar3 < 0x100) *
                                      (char)((ulonglong)uVar7 >> 0x10) - (0xff < sVar3),
                                      (0 < sVar2) * (sVar2 < 0x100) * (char)uVar7 - (0xff < sVar2)))
                  );
  sVar2 = (short)uVar8;
  sVar3 = (short)((ulonglong)uVar8 >> 0x10);
  sVar4 = (short)((ulonglong)uVar8 >> 0x20);
  sVar5 = (short)((ulonglong)uVar8 >> 0x30);
  *param_4 = uVar6;
  *(int *)((int)param_4 + param_3) =
       (int)(CONCAT17((0 < sVar5) * (sVar5 < 0x100) * (char)((ulonglong)uVar8 >> 0x30) -
                      (0xff < sVar5),
                      CONCAT16((0 < sVar4) * (sVar4 < 0x100) * (char)((ulonglong)uVar8 >> 0x20) -
                               (0xff < sVar4),
                               CONCAT15((0 < sVar3) * (sVar3 < 0x100) *
                                        (char)((ulonglong)uVar8 >> 0x10) - (0xff < sVar3),
                                        CONCAT14((0 < sVar2) * (sVar2 < 0x100) * (char)uVar8 -
                                                 (0xff < sVar2),uVar6)))) >> 0x20);
  uVar6 = param_1[8];
  uVar1 = param_1[0xc];
  uVar7 = packssdw(param_2[4],param_2[5]);
  uVar8 = packssdw(param_2[6],param_2[7]);
  uVar9 = paddsw((ulonglong)
                 CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVar6 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar6 >> 0x10),uVar6)) >>
                                                  0x20),uVar6) >> 0x18),
                                          CONCAT12((char)((uint)uVar6 >> 8),(short)uVar6)) >> 0x10),
                          (short)uVar6) & 0xffffffff00ff00ff,uVar7);
  uVar7 = paddsw((ulonglong)
                 CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),
                                          CONCAT12((char)((uint)uVar1 >> 8),(short)uVar1)) >> 0x10),
                          (short)uVar1) & 0xffffffff00ff00ff,uVar8);
  sVar2 = (short)uVar9;
  sVar3 = (short)((ulonglong)uVar9 >> 0x10);
  sVar4 = (short)((ulonglong)uVar9 >> 0x20);
  sVar5 = (short)((ulonglong)uVar9 >> 0x30);
  uVar6 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * (char)((ulonglong)uVar9 >> 0x30) - (0xff < sVar5)
                   ,CONCAT12((0 < sVar4) * (sVar4 < 0x100) * (char)((ulonglong)uVar9 >> 0x20) -
                             (0xff < sVar4),
                             CONCAT11((0 < sVar3) * (sVar3 < 0x100) *
                                      (char)((ulonglong)uVar9 >> 0x10) - (0xff < sVar3),
                                      (0 < sVar2) * (sVar2 < 0x100) * (char)uVar9 - (0xff < sVar2)))
                  );
  sVar2 = (short)uVar7;
  sVar3 = (short)((ulonglong)uVar7 >> 0x10);
  sVar4 = (short)((ulonglong)uVar7 >> 0x20);
  sVar5 = (short)((ulonglong)uVar7 >> 0x30);
  *(undefined4 *)((int)param_4 + param_3 * 2) = uVar6;
  *(int *)((int)param_4 + param_3 * 3) =
       (int)(CONCAT17((0 < sVar5) * (sVar5 < 0x100) * (char)((ulonglong)uVar7 >> 0x30) -
                      (0xff < sVar5),
                      CONCAT16((0 < sVar4) * (sVar4 < 0x100) * (char)((ulonglong)uVar7 >> 0x20) -
                               (0xff < sVar4),
                               CONCAT15((0 < sVar3) * (sVar3 < 0x100) *
                                        (char)((ulonglong)uVar7 >> 0x10) - (0xff < sVar3),
                                        CONCAT14((0 < sVar2) * (sVar2 < 0x100) * (char)uVar7 -
                                                 (0xff < sVar2),uVar6)))) >> 0x20);
  return;
}


