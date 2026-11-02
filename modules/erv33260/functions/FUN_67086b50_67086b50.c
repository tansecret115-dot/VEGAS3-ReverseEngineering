/* Module: erv33260.dll
   Function: FUN_67086b50
   Address: 67086b50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_67086b50(ulonglong *param_1,int param_2,uint param_3)

{
  uint7 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char cVar10;
  char cVar11;
  undefined1 local_5;
  
  local_5 = 0;
  iVar2 = 0xf;
  cVar10 = '\0';
  cVar11 = (char)(param_3 >> 1);
  do {
    uVar3 = *param_1;
    uVar4 = uVar3 >> 8 | param_1[1] << 0x38;
    uVar8 = psubusb(uVar3,uVar4);
    uVar5 = psubusb(uVar4,uVar3);
    uVar4 = psubusb(uVar3,*(undefined8 *)((int)param_1 + param_2));
    uVar3 = psubusb(*(undefined8 *)((int)param_1 + param_2),uVar3);
    uVar6 = paddusb(uVar5 | uVar8,_DAT_67091e18);
    uVar7 = psubusb(uVar6,_DAT_67091e18);
    uVar6 = paddusb(uVar4 | uVar3,_DAT_67091e18);
    uVar6 = psubusb(uVar6,_DAT_67091e18);
    uVar4 = CONCAT17(-(cVar11 < (char)((ulonglong)uVar6 >> 0x38)),
                     CONCAT16(-(cVar11 < (char)((ulonglong)uVar6 >> 0x30)),
                              CONCAT15(-(cVar11 < (char)((ulonglong)uVar6 >> 0x28)),
                                       CONCAT14(-(cVar11 < (char)((ulonglong)uVar6 >> 0x20)),
                                                CONCAT13(-(cVar11 < (char)((ulonglong)uVar6 >> 0x18)
                                                          ),CONCAT12(-(cVar11 < (char)((ulonglong)
                                                                                       uVar6 >> 0x10
                                                                                      )),
                                                                     CONCAT11(-(cVar11 < (char)((
                                                  ulonglong)uVar6 >> 8)),-(cVar11 < (char)uVar6)))))
                                      ))) |
            CONCAT17(-(cVar11 < (char)((ulonglong)uVar7 >> 0x38)),
                     CONCAT16(-(cVar11 < (char)((ulonglong)uVar7 >> 0x30)),
                              CONCAT15(-(cVar11 < (char)((ulonglong)uVar7 >> 0x28)),
                                       CONCAT14(-(cVar11 < (char)((ulonglong)uVar7 >> 0x20)),
                                                CONCAT13(-(cVar11 < (char)((ulonglong)uVar7 >> 0x18)
                                                          ),CONCAT12(-(cVar11 < (char)((ulonglong)
                                                                                       uVar7 >> 0x10
                                                                                      )),
                                                                     CONCAT11(-(cVar11 < (char)((
                                                  ulonglong)uVar7 >> 8)),-(cVar11 < (char)uVar7)))))
                                      )));
    uVar3 = param_1[1];
    uVar6 = *(undefined8 *)((int)param_1 + param_2 + 8);
    uVar9 = psubusb(uVar3,uVar3 >> 8);
    uVar8 = psubusb(uVar3 >> 8,uVar3);
    uVar5 = psubusb(uVar3,uVar6);
    uVar3 = psubusb(uVar6,uVar3);
    uVar6 = paddusb(uVar8 | uVar9,_DAT_67091e18);
    uVar7 = psubusb(uVar6,_DAT_67091e18);
    uVar6 = paddusb(uVar5 | uVar3,_DAT_67091e18);
    uVar6 = psubusb(uVar6,_DAT_67091e18);
    uVar1 = CONCAT16(-(cVar11 < (char)((ulonglong)uVar6 >> 0x30)),
                     CONCAT15(-(cVar11 < (char)((ulonglong)uVar6 >> 0x28)),
                              CONCAT14(-(cVar11 < (char)((ulonglong)uVar6 >> 0x20)),
                                       CONCAT13(-(cVar11 < (char)((ulonglong)uVar6 >> 0x18)),
                                                CONCAT12(-(cVar11 < (char)((ulonglong)uVar6 >> 0x10)
                                                          ),CONCAT11(-(cVar11 < (char)((ulonglong)
                                                                                       uVar6 >> 8)),
                                                                     -(cVar11 < (char)uVar6))))))) |
            CONCAT16(-(cVar11 < (char)((ulonglong)uVar7 >> 0x30)),
                     CONCAT15(-(cVar11 < (char)((ulonglong)uVar7 >> 0x28)),
                              CONCAT14(-(cVar11 < (char)((ulonglong)uVar7 >> 0x20)),
                                       CONCAT13(-(cVar11 < (char)((ulonglong)uVar7 >> 0x18)),
                                                CONCAT12(-(cVar11 < (char)((ulonglong)uVar7 >> 0x10)
                                                          ),CONCAT11(-(cVar11 < (char)((ulonglong)
                                                                                       uVar7 >> 8)),
                                                                     -(cVar11 < (char)uVar7)))))));
    cVar10 = cVar10 + (char)(uVar1 >> 0x30) + (char)(uVar4 >> 0x38) +
                      (char)(uVar1 >> 0x10) + (char)(uVar4 >> 0x18) +
                      (char)(uVar1 >> 0x20) + (char)(uVar4 >> 0x28) +
                      (char)uVar1 + (char)(uVar4 >> 8) +
                      (char)(uVar1 >> 0x28) + (char)(uVar4 >> 0x30) +
                      (char)(uVar1 >> 8) + (char)(uVar4 >> 0x10) +
                      (char)(uVar1 >> 0x18) + (char)(uVar4 >> 0x20) + (char)uVar4;
    if (cVar10 < (char)-*(int *)(&DAT_67092020 + param_3 * 4)) {
      local_5 = 1;
      break;
    }
    param_1 = (ulonglong *)((int)param_1 + param_2);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return CONCAT31((int3)((uint)-*(int *)(&DAT_67092020 + param_3 * 4) >> 8),local_5);
}


