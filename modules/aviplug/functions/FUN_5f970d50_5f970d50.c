/* Module: aviplug.dll
   Function: FUN_5f970d50
   Address: 5f970d50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f970d50(int *param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  
  FUN_5f970980(param_1);
  uVar1 = DAT_5f9da950;
  iVar2 = 2;
  do {
    uVar3 = CONCAT44((int)((ulonglong)*(undefined8 *)param_1 >> 0x20) << 0x10,
                     (int)*(undefined8 *)param_1 << 0x10) | *(ulonglong *)(param_1 + 0x10) & uVar1;
    uVar4 = pmaddwd(uVar3,DAT_5f9da958);
    uVar8 = CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20) << 0x10,
                     (int)*(undefined8 *)(param_1 + 8) << 0x10) |
            *(ulonglong *)(param_1 + 0x18) & uVar1;
    uVar6 = pmaddwd(uVar3,DAT_5f9da970);
    uVar9 = pmaddwd(uVar8,DAT_5f9da960);
    uVar11 = pmaddwd(uVar8,DAT_5f9da980);
    iVar5 = (int)((ulonglong)uVar4 >> 0x20);
    iVar10 = (int)((ulonglong)uVar9 >> 0x20);
    iVar7 = (int)((ulonglong)uVar6 >> 0x20);
    iVar12 = (int)((ulonglong)uVar11 >> 0x20);
    *(ulonglong *)(param_1 + 0x30) = CONCAT44(iVar5 - iVar10 >> 0xf,(int)uVar4 - (int)uVar9 >> 0xf);
    *(ulonglong *)param_1 = CONCAT44(iVar10 + iVar5 >> 0xf,(int)uVar9 + (int)uVar4 >> 0xf);
    *(ulonglong *)(param_1 + 0x20) = CONCAT44(iVar7 - iVar12 >> 0xf,(int)uVar6 - (int)uVar11 >> 0xf)
    ;
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(iVar12 + iVar7 >> 0xf,(int)uVar11 + (int)uVar6 >> 0xf)
    ;
    param_1 = param_1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


