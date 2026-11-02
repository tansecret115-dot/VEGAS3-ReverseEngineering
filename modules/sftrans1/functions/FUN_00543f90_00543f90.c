/* Module: sftrans1.dll
   Function: FUN_00543f90
   Address: 00543f90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00543f90(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x90);
  if (iVar2 <= *(int *)(param_1 + 100)) {
    do {
      *(int *)(param_1 + 0x90) = iVar2 + 4;
      pvVar1 = realloc(*(void **)(param_1 + 0x8c),(iVar2 + 4) * 0x22);
      *(void **)(param_1 + 0x8c) = pvVar1;
      iVar2 = *(int *)(param_1 + 0x90) + -4;
      if (iVar2 < *(int *)(param_1 + 0x90)) {
        iVar3 = iVar2 * 0x22;
        do {
          iVar2 = iVar2 + 1;
          *(undefined1 *)(*(int *)(param_1 + 0x8c) + iVar3) = 0;
          iVar3 = iVar3 + 0x22;
        } while (iVar2 < *(int *)(param_1 + 0x90));
      }
      iVar2 = *(int *)(param_1 + 0x90);
    } while (iVar2 <= *(int *)(param_1 + 100));
  }
  if (param_2 == 0x3b) {
    *(undefined2 *)(*(int *)(param_1 + 0x8c) + 0x20 + *(int *)(param_1 + 100) * 0x22) =
         *(undefined2 *)(param_1 + 0x74);
    return 0;
  }
  iVar2 = lstrlenA((LPCSTR)(*(int *)(param_1 + 0x8c) + *(int *)(param_1 + 100) * 0x22));
  *(char *)(*(int *)(param_1 + 0x8c) + *(int *)(param_1 + 100) * 0x22 + iVar2) = (char)param_2;
  *(undefined1 *)(*(int *)(param_1 + 0x8c) + *(int *)(param_1 + 100) * 0x22 + 1 + iVar2) = 0;
  return 0;
}


