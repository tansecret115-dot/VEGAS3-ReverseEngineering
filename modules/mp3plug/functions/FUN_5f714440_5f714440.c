/* Module: mp3plug.dll
   Function: FUN_5f714440
   Address: 5f714440
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5f714440(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  iVar2 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10);
  iVar3 = 0;
  iVar2 = (int)(iVar2 + ((uint)(iVar2 >> 2) >> 0x1d)) >> 3;
  if (*(int *)(param_1 + 4) != 0) {
    if (0 < iVar2) {
      local_8 = 0;
      do {
        iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x14);
        iVar4 = iVar2;
        if (iVar3 < iVar2) {
          iVar4 = iVar3;
        }
        (**(code **)(**(int **)(param_1 + 4) + 4))
                  (*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x14),iVar4,&local_c);
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + local_c * 8;
        iVar2 = iVar2 - iVar4;
        iVar3 = local_8 + local_c;
        *(uint *)(param_1 + 0x14) = local_c + *(int *)(param_1 + 0x14) & *(int *)(param_1 + 8) - 1U;
        local_8 = iVar3;
      } while ((iVar4 <= local_c) && (0 < iVar2));
    }
    cVar1 = (**(code **)(**(int **)(param_1 + 4) + 8))();
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    return iVar3;
  }
  return 0;
}


