/* Module: vidcap30.exe
   Function: FUN_00471030
   Address: 00471030
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00471030(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_4;
  
  iVar4 = 0;
  local_4 = 0;
  if ((*(byte *)(param_1 + 0x124) & 1) == 0) {
    InterlockedIncrement(&DAT_005bc41c);
    if ((*(int **)(param_1 + 0x120) != (int *)0x0) &&
       (iVar1 = **(int **)(param_1 + 0x120), 0 < iVar1)) {
      do {
        iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x120) + 8) + iVar4 * 4);
        if ((*(int *)(iVar2 + 4) == 1) && ((param_2 != 0 && ((*(byte *)(iVar2 + 0x8c) & 4) != 0))))
        {
          FUN_00474880();
        }
        if ((*(int *)(param_1 + 0x128) == 0) && ((*(uint *)(iVar2 + 0x8c) & 0x10) != 0)) {
          *(uint *)(iVar2 + 0x8c) = *(uint *)(iVar2 + 0x8c) & 0xffffffec;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    piVar3 = *(int **)(param_1 + 0x134);
    if ((piVar3 == (int *)0x0) || (local_4 = (**(code **)(*piVar3 + 0x24))(piVar3), -1 < local_4)) {
      *(uint *)(param_1 + 0x124) = *(uint *)(param_1 + 0x124) | 0x30;
    }
    InterlockedDecrement(&DAT_005bc41c);
    return local_4;
  }
  return -0x7ffb1f56;
}


