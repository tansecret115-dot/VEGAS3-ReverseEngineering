/* Module: vegas30.exe
   Function: FUN_00541c10
   Address: 00541c10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00541c10(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_8;
  int local_4;
  
  iVar6 = param_2;
  piVar2 = param_1;
  iVar3 = FUN_0057c190(*param_1,param_2 + 0x30,8);
  iVar4 = *piVar2;
  *piVar2 = iVar4 + iVar3;
  iVar3 = FUN_0057c190(iVar4 + iVar3,iVar6 + 0x3c,4);
  iVar4 = *piVar2;
  *piVar2 = iVar4 + iVar3;
  iVar4 = FUN_0057c190(iVar4 + iVar3,iVar6 + 0xb4,4);
  *piVar2 = *piVar2 + iVar4;
  piVar1 = *(int **)(iVar6 + 0x140);
  if (piVar1 != (int *)0x0) {
    local_4 = *piVar1;
    iVar4 = 0;
    if (0 < local_4) {
      do {
        iVar6 = *(int *)(piVar1[2] + iVar4 * 4);
        iVar5 = FUN_0057c190(*piVar2,iVar6 + 0x7c,4);
        iVar3 = *piVar2;
        *piVar2 = iVar3 + iVar5;
        iVar6 = FUN_0057c190(iVar3 + iVar5,iVar6,0x10);
        iVar4 = iVar4 + 1;
        *piVar2 = *piVar2 + iVar6;
        iVar6 = param_2;
      } while (iVar4 < local_4);
    }
  }
  piVar1 = *(int **)(iVar6 + 0x200);
  if (piVar1 != (int *)0x0) {
    local_4 = *piVar1;
    iVar4 = 0;
    if (0 < local_4) {
      do {
        iVar6 = *(int *)(piVar1[2] + iVar4 * 4);
        iVar5 = FUN_0057c190(*piVar2,iVar6 + 0x7c,4);
        iVar3 = *piVar2;
        *piVar2 = iVar3 + iVar5;
        iVar6 = FUN_0057c190(iVar3 + iVar5,iVar6,0x10);
        iVar4 = iVar4 + 1;
        *piVar2 = *piVar2 + iVar6;
        iVar6 = param_2;
      } while (iVar4 < local_4);
    }
  }
  piVar1 = *(int **)(iVar6 + 0x204);
  if (piVar1 != (int *)0x0) {
    local_4 = *piVar1;
    iVar4 = 0;
    if (0 < local_4) {
      do {
        iVar6 = *(int *)(piVar1[2] + iVar4 * 4);
        iVar5 = FUN_0057c190(*piVar2,iVar6 + 0x7c,4);
        iVar3 = *piVar2;
        *piVar2 = iVar3 + iVar5;
        iVar6 = FUN_0057c190(iVar3 + iVar5,iVar6,0x10);
        iVar4 = iVar4 + 1;
        *piVar2 = *piVar2 + iVar6;
        iVar6 = param_2;
      } while (iVar4 < local_4);
    }
  }
  local_8 = *(int *)(iVar6 + 0x1e4);
  if (local_8 == 0) {
    local_8 = 1;
  }
  iVar4 = FUN_0057c190(*piVar2,&local_8,4);
  param_1 = (int *)0xffffffff;
  *piVar2 = *piVar2 + iVar4;
  if ((*(int *)(iVar6 + 0x50) != 0) &&
     (local_4 = *(int *)(*(int *)(iVar6 + 0x50) + 0x18), local_4 != 0)) {
    piVar1 = *(int **)(local_4 + 0x138);
    if (piVar1 != (int *)0x0) {
      param_2 = *piVar1;
      iVar4 = 0;
      if (0 < param_2) {
        do {
          iVar6 = *(int *)(piVar1[2] + iVar4 * 4);
          iVar5 = FUN_0057c190(*piVar2,iVar6 + 0x7c,4);
          iVar3 = *piVar2;
          *piVar2 = iVar3 + iVar5;
          iVar6 = FUN_0057c190(iVar3 + iVar5,iVar6,0x10);
          iVar4 = iVar4 + 1;
          *piVar2 = *piVar2 + iVar6;
        } while (iVar4 < param_2);
      }
    }
    iVar4 = local_4;
    if ((*(uint *)(local_4 + 0x134) & 0x400) != 0) {
      iVar6 = 0;
      if (*(undefined4 **)(local_4 + 0x4c0) == (undefined4 *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        param_1 = (int *)**(undefined4 **)(local_4 + 0x4c0);
      }
      iVar3 = FUN_0057c190(*piVar2,&param_1,4);
      *piVar2 = *piVar2 + iVar3;
      if (((*(int **)(iVar4 + 0x4bc) != (int *)0x0) &&
          (piVar1 = (int *)**(int **)(iVar4 + 0x4bc), piVar1 != (int *)0x0)) &&
         (param_2 = *piVar1, 0 < param_2)) {
        do {
          iVar4 = *(int *)(piVar1[2] + iVar6 * 4);
          iVar5 = FUN_0057c190(*piVar2,iVar4 + 0x7c,4);
          iVar3 = *piVar2;
          *piVar2 = iVar3 + iVar5;
          iVar4 = FUN_0057c190(iVar3 + iVar5,iVar4,0x10);
          iVar6 = iVar6 + 1;
          *piVar2 = *piVar2 + iVar4;
        } while (iVar6 < param_2);
      }
    }
  }
  return;
}


