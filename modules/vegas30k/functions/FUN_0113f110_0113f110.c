/* Module: vegas30k.dll
   Function: FUN_0113f110
   Address: 0113f110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0113f110(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  size_t _Size;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int local_4;
  
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    free(*(void **)(param_1 + 0x18));
  }
  piVar2 = *(int **)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (piVar2 != (int *)0x0) {
    local_4 = 0;
    if (0 < *piVar2) {
      do {
        iVar3 = *(int *)(piVar2[2] + local_4 * 4);
        if (((iVar3 != 0) && (*(LPCSTR *)(iVar3 + 4) != (LPCSTR)0x0)) &&
           (*(LPCSTR *)(iVar3 + 8) != (LPCSTR)0x0)) {
          if (*(int *)(param_1 + 0x2c) == 0) {
            iVar7 = 2;
            iVar6 = 5;
            if ((*(byte *)(iVar3 + 0xc) & 4) != 0) {
              iVar7 = 1;
              iVar6 = 2;
            }
            iVar4 = lstrlenA(*(LPCSTR *)(iVar3 + 8));
            iVar3 = lstrlenA(*(LPCSTR *)(iVar3 + 4));
            *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + iVar3 * iVar7 + iVar4 + iVar6;
          }
          else {
            iVar3 = lstrlenA(*(LPCSTR *)(iVar3 + 4));
            *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + iVar3 + 1;
          }
        }
        piVar2 = *(int **)(param_1 + 0xc);
        local_4 = local_4 + 1;
      } while (local_4 < *piVar2);
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      _Size = *(int *)(param_1 + 0x1c) + 1;
      *(size_t *)(param_1 + 0x1c) = _Size;
      pcVar5 = calloc(1,_Size);
      *(char **)(param_1 + 0x18) = pcVar5;
      if (pcVar5 == (char *)0x0) {
        return 0x8007000e;
      }
      piVar2 = *(int **)(param_1 + 0xc);
      iVar3 = 0;
      if (0 < *piVar2) {
        do {
          iVar6 = *(int *)(piVar2[2] + iVar3 * 4);
          if (((iVar6 != 0) && (*(int *)(iVar6 + 4) != 0)) && (*(char **)(iVar6 + 8) != (char *)0x0)
             ) {
            if (*(int *)(param_1 + 0x2c) == 0) {
              iVar7 = 0;
              cVar1 = **(char **)(iVar6 + 8);
              while (cVar1 != '\0') {
                *pcVar5 = cVar1;
                pcVar5 = pcVar5 + 1;
                iVar7 = iVar7 + 1;
                cVar1 = *(char *)(*(int *)(iVar6 + 8) + iVar7);
              }
              if ((*(byte *)(iVar6 + 0xc) & 4) == 0) {
                *pcVar5 = ' ';
                iVar7 = 0;
                pcVar5[1] = '(';
                pcVar5 = pcVar5 + 2;
                cVar1 = **(char **)(iVar6 + 4);
                while (cVar1 != '\0') {
                  *pcVar5 = cVar1;
                  pcVar5 = pcVar5 + 1;
                  iVar7 = iVar7 + 1;
                  cVar1 = *(char *)(*(int *)(iVar6 + 4) + iVar7);
                }
                *pcVar5 = ')';
                pcVar5 = pcVar5 + 1;
              }
              *pcVar5 = '\0';
              pcVar5 = pcVar5 + 1;
            }
            iVar7 = 0;
            cVar1 = **(char **)(iVar6 + 4);
            while (cVar1 != '\0') {
              *pcVar5 = cVar1;
              pcVar5 = pcVar5 + 1;
              iVar7 = iVar7 + 1;
              cVar1 = *(char *)(*(int *)(iVar6 + 4) + iVar7);
            }
            *pcVar5 = '\0';
            pcVar5 = pcVar5 + 1;
          }
          piVar2 = *(int **)(param_1 + 0xc);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *piVar2);
      }
      *pcVar5 = '\0';
    }
    return 0;
  }
  return 0;
}


