/* Module: aviplug.dll
   Function: FUN_5f9713d0
   Address: 5f9713d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f9713d0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  
  FUN_5f971210(param_1);
  iVar1 = 2;
  do {
    uVar3 = packssdw(CONCAT44((int)((ulonglong)param_1[8] >> 0x20) +
                              (int)((ulonglong)param_1[0x18] >> 0x20),
                              (int)param_1[8] + (int)param_1[0x18]),
                     CONCAT44((int)((ulonglong)*param_1 >> 0x20) +
                              (int)((ulonglong)param_1[0x10] >> 0x20),
                              (int)*param_1 + (int)param_1[0x10]));
    uVar4 = pshufw(uVar3,uVar3,0xd8);
    uVar3 = pmaddwd(DAT_5f9da958,uVar4);
    uVar9 = packssdw(CONCAT44((int)((ulonglong)param_1[0xc] >> 0x20) +
                              (int)((ulonglong)param_1[0x1c] >> 0x20),
                              (int)param_1[0xc] + (int)param_1[0x1c]),
                     CONCAT44((int)((ulonglong)param_1[4] >> 0x20) +
                              (int)((ulonglong)param_1[0x14] >> 0x20),
                              (int)param_1[4] + (int)param_1[0x14]));
    uVar10 = pshufw(uVar9,uVar9,0xd8);
    uVar9 = pmaddwd(DAT_5f9da960,uVar10);
    uVar4 = pmaddwd(uVar4,DAT_5f9da970);
    uVar10 = pmaddwd(uVar10,DAT_5f9da980);
    iVar6 = (int)uVar9 + (int)uVar3;
    iVar2 = (int)((ulonglong)uVar3 >> 0x20);
    iVar7 = (int)((ulonglong)uVar9 >> 0x20) + iVar2;
    param_1 = param_1 + 1;
    iVar8 = (int)uVar10 + (int)uVar4;
    iVar5 = (int)((ulonglong)uVar4 >> 0x20);
    iVar11 = (int)((ulonglong)uVar10 >> 0x20) + iVar5;
    iVar1 = iVar1 + -1;
    *param_2 = CONCAT44(iVar7 >> 0xf,iVar6 >> 0xf);
    param_2[0xc] = CONCAT44(iVar2 * 2 - iVar7 >> 0xf,(int)uVar3 * 2 - iVar6 >> 0xf);
    param_2[4] = CONCAT44(iVar11 >> 0xf,iVar8 >> 0xf);
    param_2[8] = CONCAT44(iVar5 * 2 - iVar11 >> 0xf,(int)uVar4 * 2 - iVar8 >> 0xf);
    param_2 = param_2 + 1;
  } while (iVar1 != 0);
  return;
}


