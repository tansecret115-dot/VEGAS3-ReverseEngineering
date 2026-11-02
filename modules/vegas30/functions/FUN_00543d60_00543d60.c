/* Module: vegas30.exe
   Function: FUN_00543d60
   Address: 00543d60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00543d60(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_4;
  
  piVar1 = *(int **)(param_1 + 8);
  local_4 = -1;
  EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 3));
  iVar2 = *piVar1;
  iVar4 = iVar2 + -1;
  if (-1 < iVar4) {
    piVar5 = (int *)(piVar1[2] + iVar4 * 4);
    do {
      iVar3 = *piVar5;
      if ((*(int *)(iVar3 + 0x14) == 0) && (*(int *)(iVar3 + 0x1c) != 0)) {
        *(undefined4 *)(iVar3 + 8) = 0xffffffff;
        *(undefined4 *)(iVar3 + 0x10) = 0;
        *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
        *(undefined4 *)(iVar3 + 0x18) = 1;
        local_4 = iVar4;
        goto LAB_00543e45;
      }
      iVar4 = iVar4 + -1;
      piVar5 = piVar5 + -1;
    } while (-1 < iVar4);
  }
  if ((param_2 == 0) && (iVar4 = 0, 0 < iVar2)) {
    piVar5 = (int *)piVar1[2];
    do {
      if ((*(int *)(*piVar5 + 0x14) == 0) && (*(int *)(*piVar5 + 0x18) == 0)) {
        local_4 = iVar4;
        if (-1 < iVar4) {
          iVar4 = ((int *)piVar1[2])[iVar4];
          *(undefined4 *)(iVar4 + 8) = 0xffffffff;
          *(undefined4 *)(iVar4 + 0x10) = 0;
          *(undefined4 *)(iVar4 + 0xc) = 0xffffffff;
          *(undefined4 *)(iVar4 + 0x18) = 1;
          goto LAB_00543e45;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < iVar2);
  }
  iVar4 = 0;
  if (0 < iVar2) {
    piVar5 = (int *)piVar1[2];
    do {
      iVar3 = *piVar5;
      if (*(int *)(iVar3 + 0x14) == 0) {
        *(undefined4 *)(iVar3 + 8) = 0xffffffff;
        *(undefined4 *)(iVar3 + 0x10) = 0;
        *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
        *(undefined4 *)(iVar3 + 0x18) = 1;
        local_4 = iVar4;
        break;
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < iVar2);
  }
LAB_00543e45:
  LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 3));
  return local_4;
}


