/* Module: vegas30.exe
   Function: FUN_0049d060
   Address: 0049d060
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0049d060(int param_1,undefined4 *param_2,int param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = **(int **)(param_1 + 0xcd0);
  if (iVar2 != 0) {
    FUN_005c9070(*(undefined4 *)(param_1 + 0xbc8),*(int **)(param_1 + 0xcd0),0,0x10);
    _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0xcd0),0,iVar2,0);
  }
  *(undefined4 *)(param_1 + 0xcf8) = *param_2;
  if (((int)param_4 < 1) && ((int)param_4 < 0)) {
    if (*(int *)(param_1 + 0xbc8) == 0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
    }
    iVar2 = 0;
    if (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
    }
    if ((*(int *)(param_1 + 0xcf8) < 0) || (iVar2 + -1 < *(int *)(param_1 + 0xcf8))) {
      iVar2 = 0;
    }
    else if (*(int *)(param_1 + 0xbc8) == 0) {
      iVar2 = *(int *)(_DAT_00000008 + *(int *)(param_1 + 0xcf8) * 4);
    }
    else {
      iVar2 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      iVar2 = *(int *)(*(int *)(iVar2 + 8) + *(int *)(param_1 + 0xcf8) * 4);
    }
    if (iVar2 != 0) {
      piVar1 = *(int **)(iVar2 + 0x24);
      iVar2 = param_2[2];
      if (piVar1 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar1;
      }
      if ((iVar2 < 0) || (iVar3 + -1 < iVar2)) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(piVar1[2] + iVar2 * 4);
      }
      if (iVar2 != 0) {
        if ((param_4 < 0x80000000) || ((-2 < (int)param_4 && (param_3 == -1)))) {
          param_3 = *(int *)(iVar2 + 0x18);
          param_4 = *(uint *)(iVar2 + 0x1c);
        }
        else {
          param_3 = *(uint *)(iVar2 + 0x20) + *(uint *)(iVar2 + 0x18);
          param_4 = *(int *)(iVar2 + 0x24) + *(int *)(iVar2 + 0x1c) +
                    (uint)CARRY4(*(uint *)(iVar2 + 0x20),*(uint *)(iVar2 + 0x18));
        }
      }
    }
    if (((int)param_4 < 1) && ((int)param_4 < 0)) {
      param_3 = 0;
      param_4 = 0;
    }
  }
  *(int *)(param_1 + 0xd00) = param_3;
  *(undefined4 *)(param_1 + 0xd10) = 0xffffffff;
  *(uint *)(param_1 + 0xd04) = param_4;
  *(undefined4 *)(param_1 + 0xd08) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd14) = 0xffffffff;
  if (param_2[1] != 0) {
    FUN_004cb540(param_1,*param_2,4,0);
  }
  iVar2 = param_2[3];
  if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0x10) & 0x400) == 0)) {
    FUN_0049ce10(param_1,iVar2);
  }
  FUN_0048f940(*(undefined4 *)(param_1 + 0xbc8),*(undefined4 *)(param_1 + 0xcd0),2);
  FUN_005da080(*(undefined4 *)(param_1 + 0xbc8),*(undefined4 *)(param_1 + 0xcd0));
  DAT_0064767c = DAT_0064767c | 4;
  return param_2[3] != 0;
}


