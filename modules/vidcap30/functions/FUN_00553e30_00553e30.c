/* Module: vidcap30.exe
   Function: FUN_00553e30
   Address: 00553e30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00553e30(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  iVar6 = 0;
  if (0 < *(int *)((int)param_1 + 0x71)) {
    puVar4 = (undefined4 *)(*(int *)((int)param_1 + 0x79) + 0x10);
    do {
      iVar2 = FUN_00553f20(param_1,*puVar4);
      iVar5 = iVar5 + iVar2;
      iVar6 = iVar6 + 1;
      puVar4 = (undefined4 *)((int)puVar4 + 0x51);
    } while (iVar6 < *(int *)((int)param_1 + 0x71));
  }
  if (((*(char *)((int)param_1 + 0xe6) == '\0') && ((char)param_1[0x41] == '\0')) &&
     (*(int *)((int)param_1 + 0x6d) == 8)) {
    iVar6 = *(int *)((int)param_1 + 0x71);
    bVar1 = true;
    if (0 < iVar6) {
      piVar3 = (int *)(*(int *)((int)param_1 + 0x79) + 0x18);
      do {
        if ((1 < piVar3[-1]) || (1 < *piVar3)) {
          bVar1 = false;
        }
        piVar3 = (int *)((int)piVar3 + 0x51);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if ((iVar5 != 0) && (bVar1)) {
      bVar1 = false;
      *(undefined4 *)(*param_1 + 0x14) = 0x4a;
      (**(code **)(*param_1 + 4))(param_1,0);
    }
  }
  else {
    bVar1 = false;
  }
  if (*(char *)((int)param_1 + 0xe6) != '\0') {
    FUN_00553ff0(param_1,0xc9);
    return;
  }
  if ((char)param_1[0x41] != '\0') {
    FUN_00553ff0(param_1,0xc2);
    return;
  }
  if (bVar1) {
    FUN_00553ff0(param_1,0xc0);
    return;
  }
  FUN_00553ff0(param_1,0xc1);
  return;
}


