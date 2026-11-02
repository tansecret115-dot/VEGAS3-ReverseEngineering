/* Module: vegas30.exe
   Function: FUN_00497f60
   Address: 00497f60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00497fda) */
/* WARNING: Removing unreachable block (ram,0x00497ff2) */

void FUN_00497f60(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  
  iVar9 = 0;
  lVar11 = CONCAT44(param_3,param_2);
  if (param_4 == 0) {
    uVar10 = *(uint *)(param_1 + 0x98) - *(uint *)(param_1 + 0x1a0);
    iVar8 = (*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x1a4)) -
            (uint)(*(uint *)(param_1 + 0x98) < *(uint *)(param_1 + 0x1a0));
    lVar11 = FUN_00495b80(param_1,*(undefined4 *)(param_1 + 0xcec),uVar10 + param_2,
                          iVar8 + param_3 + (uint)CARRY4(uVar10,param_2));
    lVar11 = lVar11 - CONCAT44(iVar8,uVar10);
  }
  uVar5 = *(undefined4 *)(param_1 + 0x1ac);
  uVar7 = *(undefined4 *)(param_1 + 0x1a8);
  if (*(longlong *)(param_1 + 0x1a8) <= lVar11) {
    uVar5 = *(undefined4 *)(param_1 + 0x1b4);
    uVar7 = *(undefined4 *)(param_1 + 0x1b0);
    if (lVar11 <= *(longlong *)(param_1 + 0x1b0)) goto LAB_00498000;
  }
  lVar11 = CONCAT44(uVar5,uVar7);
LAB_00498000:
  lVar3 = lVar11 - *(longlong *)(param_1 + 0x198);
  if (lVar3 != 0) {
    bVar2 = false;
    iVar8 = **(int **)(param_1 + 0xcd8);
    if (0 < iVar8) {
      do {
        iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0xcd8) + 8) + iVar9 * 4);
        uVar10 = *(uint *)(iVar1 + 0x10);
        if ((((uVar10 & 8) == 0) && ((uVar10 & 0x100000) == 0)) &&
           ((DAT_00649e0c == 0 || ((uVar10 & 0x1000000) == 0)))) {
          lVar4 = lVar3 + *(longlong *)(iVar1 + 0x18);
          if (((int)((ulonglong)lVar4 >> 0x20) < 1) && (lVar4 < 0)) {
            lVar4 = 0;
          }
          FUN_005c97b0(*(undefined4 *)(param_1 + 0xbc8),iVar1,lVar4,0);
          bVar2 = true;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar8);
    }
    if (DAT_0064778c != 0) {
      if (*(int *)(param_1 + 0xbc8) == 0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      }
      iVar9 = *piVar6;
      FUN_005b83b0(*(undefined4 *)(param_1 + 0xbc8),1);
      iVar8 = 0;
      if (0 < iVar9) {
        do {
          iVar1 = *(int *)(piVar6[2] + iVar8 * 4);
          if (((*(uint *)(iVar1 + 0x10) & 0x100000) != 0) &&
             (FUN_0047f4f0(iVar1,lVar11), *(int *)(iVar1 + 4) == 3)) {
            DAT_0064767c = DAT_0064767c | 0x40000;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar9);
      }
      FUN_005b84d0(*(undefined4 *)(param_1 + 0xbc8),1);
    }
    if (bVar2) {
      FUN_004eb2b0(*(undefined4 *)(param_1 + 0xbc8));
    }
    *(longlong *)(param_1 + 0x198) = lVar11;
  }
  return;
}


