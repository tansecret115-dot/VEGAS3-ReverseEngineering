/* Module: vegas30.exe
   Function: FUN_0049d570
   Address: 0049d570
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0049d570(int param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *local_4;
  
  iVar7 = param_3;
  uVar2 = param_2;
  iVar8 = 0;
  bVar3 = false;
  if (*(int *)(param_1 + 0xbc8) == 0) {
    local_4 = (int *)0x0;
  }
  else {
    local_4 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
  }
  if ((*(int *)(param_1 + 0xbc8) != 0) &&
     (iVar4 = FUN_005b87b0(*(int *)(param_1 + 0xbc8)), iVar4 != 0)) {
    if (*(int *)(param_1 + 0xbc8) == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
    }
    iVar8 = *piVar5;
  }
  if ((param_5 < param_3) || ((param_5 <= param_3 && (param_4 <= param_2)))) {
    param_2 = param_4;
    param_3 = param_5;
  }
  if ((param_5 <= iVar7) && ((param_5 < iVar7 || (param_4 < uVar2)))) {
    param_4 = uVar2;
    param_5 = iVar7;
  }
  iVar7 = param_6;
  if (param_7 <= param_6) {
    iVar7 = param_7;
  }
  if (param_6 <= param_7) {
    param_6 = param_7;
  }
  if (iVar8 <= param_6) {
    param_6 = iVar8 + -1;
  }
  if (iVar7 <= param_6) {
    do {
      if (local_4 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *local_4;
      }
      if ((iVar7 < 0) || (iVar8 + -1 < iVar7)) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(local_4[2] + iVar7 * 4);
      }
      if (iVar8 == 0) break;
      piVar5 = *(int **)(iVar8 + 0x24);
      iVar8 = *piVar5;
      if (param_8 == 0) {
        iVar4 = 0;
        if (0 < iVar8) {
          do {
            iVar1 = *(int *)(piVar5[2] + iVar4 * 4);
            iVar6 = *(int *)(iVar1 + 0x1c);
            uVar2 = *(uint *)(iVar1 + 0x18);
            if ((iVar6 <= param_5) && ((iVar6 < param_5 || (uVar2 < param_4)))) {
              iVar6 = *(int *)(iVar1 + 0x24) + iVar6 + (uint)CARRY4(*(uint *)(iVar1 + 0x20),uVar2);
              if ((param_3 <= iVar6) &&
                 (((param_3 < iVar6 || (param_2 < *(uint *)(iVar1 + 0x20) + uVar2)) &&
                  ((*(byte *)(iVar1 + 0x10) & 0x10) == 0)))) {
                FUN_0049ce10(param_1,iVar1);
                bVar3 = true;
              }
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar8);
        }
      }
      else {
        iVar4 = 0;
        if (0 < iVar8) {
          do {
            iVar1 = *(int *)(piVar5[2] + iVar4 * 4);
            iVar6 = *(int *)(iVar1 + 0x1c);
            uVar2 = *(uint *)(iVar1 + 0x18);
            if ((iVar6 <= param_5) && ((iVar6 < param_5 || (uVar2 < param_4)))) {
              iVar6 = *(int *)(iVar1 + 0x24) + iVar6 + (uint)CARRY4(*(uint *)(iVar1 + 0x20),uVar2);
              if ((param_3 <= iVar6) &&
                 ((param_3 < iVar6 || (param_2 < *(uint *)(iVar1 + 0x20) + uVar2)))) {
                if ((*(byte *)(iVar1 + 0x10) & 0x10) == 0) {
                  FUN_0049ce10(param_1,iVar1);
                }
                else {
                  FUN_0049d000(param_1,iVar1);
                }
                bVar3 = true;
              }
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar8);
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 <= param_6);
    if (bVar3) {
      FUN_004530a0(param_1,0);
      FUN_0048f940(*(undefined4 *)(param_1 + 0xbc8),*(undefined4 *)(param_1 + 0xcd0),2);
      FUN_005da080(*(undefined4 *)(param_1 + 0xbc8),*(undefined4 *)(param_1 + 0xcd0));
      DAT_0064767c = DAT_0064767c | 4;
    }
  }
  return;
}


