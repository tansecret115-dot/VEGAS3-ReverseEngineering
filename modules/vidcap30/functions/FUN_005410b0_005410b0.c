/* Module: vidcap30.exe
   Function: FUN_005410b0
   Address: 005410b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005410b0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = param_1;
  if (*(int *)(param_1 + 0x50) == 0) {
    local_10 = *(undefined4 *)(param_1 + 0x48);
    local_c = *(undefined4 *)(param_1 + 0x4c);
    local_8 = local_10;
    local_4 = local_c;
    iVar3 = _SfList_AllocAndInsertItem_20
                      (*(undefined4 *)(param_1 + 0x44),&local_10,0x10,0xffffffff,&param_1);
    if (-1 < iVar3) {
      *(undefined4 *)(iVar2 + 0x50) =
           *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x44) + 8) + param_1 * 4);
    }
  }
  piVar1 = *(int **)(iVar2 + 0x50);
  if (piVar1 != (int *)0x0) {
    iVar3 = param_2;
    if ((*(uint *)(iVar2 + 0x164) & 0x100) == 0) {
      piVar1[2] = *piVar1;
      iVar3 = *piVar1;
    }
    if (((*(uint *)(iVar2 + 0x164) & 0x200) == 0) ||
       (iVar4 = param_3, (*(byte *)(iVar2 + 0x168) & 8) != 0)) {
      piVar1[3] = piVar1[1];
      iVar4 = piVar1[1];
    }
    if (iVar3 == 0xffff) {
      if ((iVar4 != 0xffff) && ((*(byte *)(iVar2 + 0x164) & 0x40) == 0)) {
        iVar3 = *(int *)(iVar2 + 200);
      }
    }
    else if ((iVar4 == 0xffff) && ((*(byte *)(iVar2 + 0x164) & 0x20) == 0)) {
      iVar4 = *(int *)(iVar2 + 0xb8);
    }
    if ((piVar1[3] != iVar4) || (piVar1[2] != iVar3)) {
      FUN_00544c30(iVar2,piVar1,iVar3,iVar4);
      piVar1[2] = iVar3;
      piVar1[3] = iVar4;
      if ((iVar4 != piVar1[1]) || (iVar3 != *piVar1)) {
        FUN_005413f0(iVar2,2);
      }
      FUN_00540a60(iVar2,0xb);
    }
  }
  return;
}


