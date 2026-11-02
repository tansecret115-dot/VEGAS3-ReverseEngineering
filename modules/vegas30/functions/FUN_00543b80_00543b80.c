/* Module: vegas30.exe
   Function: FUN_00543b80
   Address: 00543b80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00543b80(int param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  GetCurrentThreadId();
  EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 8) + 0xc));
  iVar3 = 0;
  local_20 = 0;
  local_14 = **(int **)(param_1 + 8);
  if (0 < local_14) {
    piVar1 = (int *)(*(int **)(param_1 + 8))[2];
    do {
      iVar7 = *piVar1;
      if (((param_2 == *(uint *)(iVar7 + 8)) && (param_3 == *(int *)(iVar7 + 0xc))) &&
         (*(int *)(iVar7 + 0x1c) == 0)) {
        InterlockedIncrement((LONG *)(iVar7 + 0x14));
        local_20 = iVar7;
        break;
      }
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar3 < local_14);
  }
  if ((local_14 == 0) || (local_20 != 0)) goto LAB_00543d32;
  iVar3 = 0;
  local_18 = 0;
  local_8 = 0xffffffff;
  local_4 = 0x7fffffff;
  local_10 = 0xffffffff;
  local_c = 0x7fffffff;
  iVar7 = 0;
  if (0 < local_14) {
    local_1c = *(int **)(*(int *)(param_1 + 8) + 8);
    do {
      iVar7 = *local_1c;
      uVar2 = param_2 - *(uint *)(iVar7 + 8);
      iVar4 = (param_3 - *(int *)(iVar7 + 0xc)) - (uint)(param_2 < *(uint *)(iVar7 + 8));
      if (param_4 == 2) {
        bVar8 = uVar2 != 0;
        uVar2 = -uVar2;
        iVar4 = -(iVar4 + (uint)bVar8);
      }
      iVar5 = iVar4;
      uVar6 = uVar2;
      if ((iVar4 < 1) && (iVar4 < 0)) {
        iVar5 = -(iVar4 + (uint)(uVar2 != 0));
        uVar6 = -uVar2;
      }
      if ((iVar5 <= local_c) && ((iVar5 < local_c || (uVar6 < local_10)))) {
        iVar3 = iVar7;
        local_10 = uVar6;
        local_c = iVar5;
      }
      if (((-1 < iVar4) && (iVar4 <= local_4)) && ((iVar4 < local_4 || (uVar2 < local_8)))) {
        local_18 = iVar7;
        local_8 = uVar2;
        local_4 = iVar4;
      }
      local_1c = local_1c + 1;
      local_14 = local_14 + -1;
      iVar7 = local_18;
    } while (local_14 != 0);
  }
  if (param_4 == 3) {
    if (iVar3 == 0) goto LAB_00543d32;
    if (*(int *)(iVar3 + 8) == -1) {
      iVar7 = *(int *)(iVar3 + 0xc);
joined_r0x00543d22:
      if (iVar7 == -1) goto LAB_00543d32;
    }
  }
  else {
    if ((iVar7 != 0) && ((*(int *)(iVar7 + 8) != -1 || (*(int *)(iVar7 + 0xc) != -1)))) {
      InterlockedIncrement((LONG *)(iVar7 + 0x14));
      local_20 = iVar7;
      goto LAB_00543d32;
    }
    if (iVar3 == 0) goto LAB_00543d32;
    if (*(int *)(iVar3 + 8) == -1) {
      iVar7 = *(int *)(iVar3 + 0xc);
      goto joined_r0x00543d22;
    }
  }
  InterlockedIncrement((LONG *)(iVar3 + 0x14));
  local_20 = iVar3;
LAB_00543d32:
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 8) + 0xc));
  return local_20;
}


