/* Module: vegas30k.dll
   Function: FUN_0114e940
   Address: 0114e940
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0114e940(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined1 local_10 [16];
  
  FUN_0114efb0(param_1);
  if (param_2 == 0xffff) {
    if (param_3 == 0xffff) {
      if ((*(byte *)(param_1 + 0x168) & 2) == 0) {
        if ((*(uint *)(param_1 + 0x164) & 0x300) != 0) {
          iVar3 = FUN_0114e640(param_1,0xffff,0xffff);
          if (iVar3 == 0) goto LAB_0114e9b9;
        }
        param_2 = *(int *)(param_1 + 200);
        goto LAB_0114e9b3;
      }
    }
    else if ((*(byte *)(param_1 + 0x164) & 0x40) == 0) {
      param_2 = *(int *)(param_1 + 200);
    }
  }
  else if ((param_3 == 0xffff) && ((*(byte *)(param_1 + 0x164) & 0x20) == 0)) {
LAB_0114e9b3:
    param_3 = *(int *)(param_1 + 0xb8);
  }
LAB_0114e9b9:
  uVar4 = *(uint *)(param_1 + 0x164) & 0xf0;
  if (uVar4 == 0x20) {
    param_3 = 0xffff;
  }
  else if (uVar4 == 0x40) {
    param_2 = 0xffff;
  }
  piVar5 = (int *)0x0;
  bVar2 = false;
  if (param_4 != 0) {
    iVar3 = **(int **)(param_1 + 0x44);
    if ((((iVar3 != 1) || (piVar1 = *(int **)(*(int **)(param_1 + 0x44))[2], *piVar1 != param_2)) ||
        (piVar1[1] != param_3)) || ((piVar1[2] != param_2 || (piVar1[3] != param_3)))) {
      bVar2 = true;
      FUN_01152bc0(param_1);
      if (iVar3 != 1) {
        _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x44),0,0xffffffff,0);
        iVar3 = _SfList_AllocAndInsertItem_20
                          (*(undefined4 *)(param_1 + 0x44),local_10,0x10,0xffffffff,0);
        if (iVar3 < 0) goto LAB_0114ea66;
      }
    }
    piVar5 = (int *)**(int **)(*(int *)(param_1 + 0x44) + 8);
    *piVar5 = param_2;
    piVar5[1] = param_3;
    piVar5[2] = param_2;
    piVar5[3] = param_3;
    *(int *)(param_1 + 0x48) = param_2;
    *(int *)(param_1 + 0x4c) = param_3;
    *(int **)(param_1 + 0x50) = piVar5;
  }
LAB_0114ea66:
  if ((*(int *)(param_1 + 0x40) != param_3) || (*(int *)(param_1 + 0x3c) != param_2)) {
    FUN_01152d10(param_1);
    FUN_0114edf0(param_1,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),0x60);
    *(int *)(param_1 + 0x3c) = param_2;
    *(int *)(param_1 + 0x40) = param_3;
    if ((param_4 != 0) && (piVar5 != (int *)0x0)) {
      piVar5[2] = param_2;
      piVar5[3] = param_3;
    }
    FUN_01152d10(param_1);
    FUN_0114edf0(param_1,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),0x60);
    FUN_0114e690(param_1,1);
  }
  if ((param_4 != 0) && (bVar2)) {
    FUN_0114e690(param_1,0xb);
  }
  return;
}


