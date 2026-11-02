/* Module: vegas30.exe
   Function: FUN_004be970
   Address: 004be970
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004bea57) */
/* WARNING: Removing unreachable block (ram,0x004bea17) */
/* WARNING: Removing unreachable block (ram,0x004bea73) */

longlong FUN_004be970(int param_1,uint param_2,int param_3,int param_4,undefined4 param_5,
                     int param_6)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 local_4;
  
  iVar6 = *(int *)(param_1 + 0x1ac);
  puVar2 = *(uint **)(param_1 + 0xc40);
  uVar3 = *(uint *)(param_1 + 0x1a8);
  if ((iVar6 < param_3) || ((iVar6 <= param_3 && (uVar3 <= param_2)))) {
    iVar5 = *(int *)(param_1 + 0x1b4);
    iVar6 = param_3;
    uVar3 = param_2;
    if ((iVar5 <= param_3) && ((iVar5 < param_3 || (*(uint *)(param_1 + 0x1b0) < param_2)))) {
      iVar6 = iVar5;
      uVar3 = *(uint *)(param_1 + 0x1b0);
    }
  }
  param_2 = uVar3;
  lVar4 = CONCAT44(iVar6,param_2);
  iVar5 = *(uint *)(param_1 + 0x98) + param_2;
  iVar6 = *(int *)(param_1 + 0x9c) + iVar6 + (uint)CARRY4(*(uint *)(param_1 + 0x98),param_2);
  lVar8 = CONCAT44(iVar6,iVar5);
  if (param_6 == 2) {
    lVar8 = FUN_0043e4c0(iVar5,iVar6);
    uVar7 = *(undefined4 *)(param_1 + 0x98);
    local_4 = *(undefined4 *)(param_1 + 0x9c);
    lVar8 = lVar8 - *(longlong *)(param_1 + 0x98);
    lVar4 = *(longlong *)(param_1 + 0x1a8);
    if (*(longlong *)(param_1 + 0x1a8) <= lVar8) {
LAB_004bea61:
      lVar4 = lVar8;
      if (*(longlong *)(param_1 + 0x1b0) < lVar8) {
        lVar4 = *(longlong *)(param_1 + 0x1b0);
      }
    }
LAB_004bea85:
    lVar8 = lVar4 + CONCAT44(local_4,uVar7);
  }
  else if (param_4 == 0) {
    lVar9 = FUN_004955e0(param_1,iVar5,iVar6);
    plVar1 = (longlong *)(param_1 + 0x98);
    uVar7 = *(undefined4 *)plVar1;
    local_4 = *(undefined4 *)(param_1 + 0x9c);
    lVar8 = lVar9 - *plVar1;
    lVar4 = *(longlong *)(param_1 + 0x1a8);
    if (*(longlong *)(param_1 + 0x1a8) <= lVar9 - *plVar1) goto LAB_004bea61;
    goto LAB_004bea85;
  }
  uVar3 = puVar2[8];
  if ((uVar3 & 0x40000) == 0) {
    if ((uVar3 & 0x80000) == 0) goto LAB_004bebcc;
    uVar3 = puVar2[2];
    lVar8 = lVar8 - CONCAT44(puVar2[3] + puVar2[1] + (uint)CARRY4(uVar3,*puVar2),uVar3 + *puVar2);
    if (lVar8 == 0) goto LAB_004bebcc;
    if ((puVar2[8] & 0x100000) == 0) {
      *(longlong *)(puVar2 + 2) = lVar8 + *(longlong *)(puVar2 + 2);
    }
    else {
      *(longlong *)puVar2 = lVar8 + *(longlong *)puVar2;
    }
  }
  else {
    lVar8 = lVar8 - *(longlong *)puVar2;
    if (lVar8 == 0) goto LAB_004bebcc;
    *(longlong *)puVar2 = lVar8 + *(longlong *)puVar2;
    if (((uVar3 & 1) != 0) && ((uVar3 & 0x100000) == 0)) {
      uVar3 = puVar2[2];
      puVar2[2] = uVar3 - (uint)lVar8;
      puVar2[3] = (puVar2[3] - (int)((ulonglong)lVar8 >> 0x20)) - (uint)(uVar3 < (uint)lVar8);
    }
  }
  if (((*(int *)(param_1 + 0xbc8) != 0) && (DAT_0064cb8c != 0)) && (DAT_0064cb90 != 0)) {
    FUN_004eb2b0(*(int *)(param_1 + 0xbc8));
    *(uint *)**(undefined4 **)(param_1 + 0xbc8) =
         *(uint *)**(undefined4 **)(param_1 + 0xbc8) | 0x10000;
  }
  iVar6 = FUN_004e4c90();
  if (iVar6 == param_1) {
    FUN_004e4cd0(1);
  }
  FUN_004530a0(param_1,5);
LAB_004bebcc:
  *(longlong *)(param_1 + 0x198) = lVar4;
  return lVar4;
}


