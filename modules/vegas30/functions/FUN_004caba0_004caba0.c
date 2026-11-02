/* Module: vegas30.exe
   Function: FUN_004caba0
   Address: 004caba0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004caba0(int param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  iVar4 = param_1;
  iVar7 = 0;
  param_1 = 0;
  local_8 = 0;
  puVar1 = *(uint **)(iVar4 + 0x5d0);
  if (*(int *)(iVar4 + 0xbc8) == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_005b87b0(*(int *)(iVar4 + 0xbc8));
  }
  iVar2 = *piVar5;
  if (0 < iVar2) {
    do {
      iVar6 = *(int *)(piVar5[2] + iVar7 * 4);
      uVar3 = *(uint *)(iVar6 + 0x10);
      if ((uVar3 & 4) == 0) {
        if ((*(int *)(*(int *)(iVar6 + 0x69c) + 0x54) == 0) && ((uVar3 & 0x10000) == 0)) {
          *(uint *)(iVar6 + 0x10) = (*puVar1 & 2) << 0xf | uVar3 & 0xfffeffff;
        }
        if ((*(uint *)(iVar4 + 0x18) & 0x80000) == 0) {
          if ((*(uint *)(iVar6 + 0x10) & 0x10000) == 0) {
            iVar6 = *(int *)(iVar6 + 0x694);
          }
          else {
            iVar6 = 0x18;
          }
        }
        else {
          iVar6 = *(int *)(iVar4 + 0xbac);
        }
        if (local_8 <= iVar6) {
          local_8 = iVar6;
        }
        param_1 = param_1 + iVar6;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar2);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = local_8;
  }
  return param_1;
}


