/* Module: vegas30.exe
   Function: FUN_00453ad0
   Address: 00453ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00453c1f) */

void FUN_00453ad0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 uint param_6)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar8;
  bool bVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint uVar7;
  
  *(uint *)(param_1 + 0x18) = (param_2 & 1) << 0xf | *(uint *)(param_1 + 0x18) & 0xffff7fff | 0x4000
  ;
  if (param_2 != 0) {
    lVar10 = ftol();
    lVar10 = lVar10 + *(longlong *)(param_1 + 0xb88);
    *(longlong *)(param_1 + 0x98) = lVar10;
    lVar10 = FUN_004bbb60(param_1,*(undefined4 *)(param_1 + 0x98),(int)((ulonglong)lVar10 >> 0x20),
                          0xffffffff,0);
    iVar6 = (int)((ulonglong)lVar10 >> 0x20);
    uVar11 = FUN_004bbb60(param_1,*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c),1,
                          0);
    iVar3 = (int)((ulonglong)uVar11 >> 0x20);
    uVar2 = (uint)uVar11 - (uint)lVar10;
    uVar7 = (uint)((uint)uVar11 < (uint)lVar10);
    iVar5 = iVar3 - iVar6;
    iVar4 = iVar5 - uVar7;
    if ((-1 < iVar4) &&
       ((iVar4 != 0 && SBORROW4(iVar3,iVar6) == SBORROW4(iVar5,uVar7) || (uVar2 != 0)))) {
      lVar10 = lVar10 + CONCAT44(iVar4,uVar2);
      bVar8 = uVar2 != 0;
      uVar2 = -uVar2;
      iVar4 = -(iVar4 + (uint)bVar8);
    }
    goto LAB_00453c5a;
  }
  if ((param_6 & 0xffff) == 0xfd) {
    iVar4 = *(int *)(param_1 + 0xb7c);
    puVar1 = (uint *)(param_1 + 0xb70);
    uVar7 = *puVar1;
    iVar5 = *(int *)(param_1 + 0xb74);
    uVar2 = *(uint *)(param_1 + 0xb78);
    lVar10 = *(longlong *)puVar1;
    if ((-1 < iVar4) && ((0 < iVar4 || (lVar10 = *(longlong *)puVar1, uVar2 != 0)))) {
LAB_00453c43:
      bVar8 = CARRY4(uVar7,uVar2);
      iVar6 = uVar7 + uVar2;
      iVar5 = iVar5 + iVar4;
      bVar9 = uVar2 != 0;
      uVar2 = -uVar2;
      iVar4 = -(iVar4 + (uint)bVar9);
      lVar10 = CONCAT44(iVar5 + (uint)bVar8,iVar6);
    }
  }
  else if ((param_6 & 0xffff) == 0xfe) {
    iVar4 = *(int *)(param_1 + 0xb7c);
    puVar1 = (uint *)(param_1 + 0xb70);
    uVar7 = *puVar1;
    iVar5 = *(int *)(param_1 + 0xb74);
    uVar2 = *(uint *)(param_1 + 0xb78);
    lVar10 = *(longlong *)puVar1;
    if ((iVar4 < 1) && (lVar10 = *(longlong *)puVar1, iVar4 < 0)) goto LAB_00453c43;
  }
  else {
    lVar10 = ftol();
    lVar10 = FUN_004957e0(param_1,&param_4,lVar10 + *(longlong *)(param_1 + 0xb88));
    uVar2 = 0;
    iVar4 = 0;
  }
  *(longlong *)(param_1 + 0x98) = lVar10;
LAB_00453c5a:
  *(undefined4 *)(param_1 + 0xb60) = *(undefined4 *)(param_1 + 0xb48);
  *(undefined4 *)(param_1 + 0xb64) = *(undefined4 *)(param_1 + 0xb4c);
  *(undefined4 *)(param_1 + 0xb68) = *(undefined4 *)(param_1 + 0xb50);
  *(undefined4 *)(param_1 + 0xb6c) = *(undefined4 *)(param_1 + 0xb54);
  if (uVar2 != 0 || iVar4 != 0) {
    lVar10 = lVar10 + CONCAT44(iVar4,uVar2);
    bVar8 = uVar2 != 0;
    uVar2 = -uVar2;
    iVar4 = -(iVar4 + (uint)bVar8);
  }
  FUN_00453340(param_1,lVar10,uVar2,iVar4,0x20);
  return;
}


