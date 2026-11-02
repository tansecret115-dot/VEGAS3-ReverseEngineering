/* Module: vegas30.exe
   Function: FUN_00453cb0
   Address: 00453cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00453e06) */
/* WARNING: Removing unreachable block (ram,0x00453d20) */

void FUN_00453cb0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  SHORT SVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  
  uVar1 = *(undefined4 *)(param_1 + 0x98);
  lVar10 = *(longlong *)(param_1 + 0x98);
  if ((*(uint *)(param_1 + 0x18) & 0x8000) == 0) {
    SVar3 = GetKeyState(0x10);
    lVar9 = ftol();
    lVar9 = lVar9 + *(longlong *)(param_1 + 0xb88);
    if (-1 < SVar3) {
      lVar9 = FUN_004957e0(param_1,&param_2,lVar9);
    }
    if ((lVar9 < 0x100000000) && (lVar9 < 0)) {
      lVar9 = 0;
    }
    else if (*(longlong *)(param_1 + 0x600) < lVar9) {
      lVar9 = *(longlong *)(param_1 + 0x600);
    }
    lVar9 = lVar9 - *(longlong *)(param_1 + 0x98);
  }
  else {
    lVar9 = ftol();
    lVar9 = lVar9 + *(longlong *)(param_1 + 0xb88);
    if (lVar9 < lVar10) {
      iVar8 = 1;
    }
    else {
      iVar8 = -1;
    }
    lVar10 = FUN_004bbb60(param_1,uVar1,*(undefined4 *)(param_1 + 0x9c),iVar8,0);
    iVar5 = (int)((ulonglong)lVar10 >> 0x20);
    uVar11 = FUN_004bbb60(param_1,lVar9,-iVar8,0);
    iVar6 = (int)((ulonglong)uVar11 >> 0x20);
    iVar4 = (uint)uVar11 - (uint)lVar10;
    uVar2 = (uint)((uint)uVar11 < (uint)lVar10);
    iVar8 = iVar6 - iVar5;
    iVar7 = iVar8 - uVar2;
    lVar9 = CONCAT44(iVar7,iVar4);
    if ((-1 < iVar7) &&
       ((iVar7 != 0 && SBORROW4(iVar6,iVar5) == SBORROW4(iVar8,uVar2) || (iVar4 != 0)))) {
      lVar10 = lVar10 + lVar9;
      lVar9 = CONCAT44(-(iVar7 + (uint)(iVar4 != 0)),-iVar4);
    }
  }
  uVar11 = 0;
  if (lVar9 != 0) {
    lVar10 = lVar9 + lVar10;
    uVar11 = CONCAT44(-((int)((ulonglong)lVar9 >> 0x20) + (uint)((int)lVar9 != 0)),-(int)lVar9);
  }
  FUN_00453340(param_1,lVar10,uVar11,param_4 != 0 | 0x60);
  return;
}


