/* Module: vegas30.exe
   Function: FUN_0049ce10
   Address: 0049ce10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0049ce10(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = param_2;
  uVar1 = *(undefined4 *)(param_1 + 0xcd0);
  puVar2 = *(undefined4 **)(param_1 + 0xbc8);
  iVar3 = _SfList_FindSpecificItemRange_16(uVar1,0,0xffffffff,param_2);
  if ((iVar3 < 0) && ((*(uint *)(iVar7 + 0x10) & 0x400) == 0)) {
    param_1 = iVar7;
    iVar3 = _SfList_InsertList_16(uVar1,0xffffffff,&param_1,1);
    if (iVar3 < 0) goto LAB_0049ce6d;
    uVar6 = *(uint *)(iVar7 + 0x10);
  }
  else {
    uVar6 = *(uint *)(iVar7 + 0x10);
    if ((uVar6 & 0x400) == 0) goto LAB_0049ce6d;
  }
  *(uint *)(iVar7 + 0x10) = uVar6 | 0x10;
LAB_0049ce6d:
  if ((((DAT_00649e0c == 0) && (0 < *(int *)(iVar7 + 0x38))) &&
      (piVar4 = (int *)FUN_005d9be0(puVar2,0,iVar7), piVar4 != (int *)0x0)) &&
     ((*(byte *)(piVar4 + 1) & 2) != 0)) {
    if ((int *)*piVar4 == (int *)0x0) {
      param_1 = 0;
    }
    else {
      param_1 = *(int *)*piVar4;
    }
    iVar7 = 0;
    if (0 < param_1) {
      do {
        iVar3 = *(int *)(*piVar4 + 8);
        iVar5 = *(int *)(*piVar4 + 4) * iVar7;
        iVar3 = FUN_005d9aa0(puVar2,0,*(undefined4 *)(iVar5 + iVar3),
                             *(undefined4 *)(iVar5 + 4 + iVar3));
        if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x10) & 0x10) == 0)) {
          iVar5 = _SfList_FindSpecificItemRange_16(uVar1,0,0xffffffff,iVar3);
          if ((iVar5 < 0) && ((*(uint *)(iVar3 + 0x10) & 0x400) == 0)) {
            param_2 = iVar3;
            iVar5 = _SfList_InsertList_16(uVar1,0xffffffff,&param_2,1);
            if (-1 < iVar5) {
              uVar6 = *(uint *)(iVar3 + 0x10);
LAB_0049cf27:
              *(uint *)(iVar3 + 0x10) = uVar6 | 0x10;
            }
          }
          else {
            uVar6 = *(uint *)(iVar3 + 0x10);
            if ((uVar6 & 0x400) != 0) goto LAB_0049cf27;
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < param_1);
    }
  }
  *(uint *)*puVar2 = *(uint *)*puVar2 | 0x80;
  return;
}


