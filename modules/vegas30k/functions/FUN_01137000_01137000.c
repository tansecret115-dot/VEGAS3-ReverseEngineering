/* Module: vegas30k.dll
   Function: FUN_01137000
   Address: 01137000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_01137000(int param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((*(int *)(param_1 + 0x150) != 0) && (*(int *)(param_1 + 0x154) != 0)) {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x154)) {
      iVar5 = 0;
      do {
        iVar3 = *(int *)(param_1 + 0x150) + iVar5;
        piVar1 = *(int **)(iVar3 + 0x24);
        if (piVar1 != (int *)0x0) {
          if (*(int *)(iVar3 + 0x38) != 0) {
            (**(code **)(*piVar1 + 0x14))(piVar1);
          }
          piVar1 = *(int **)(iVar5 + 0x24 + *(int *)(param_1 + 0x150));
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        pvVar2 = *(LPVOID *)(iVar5 + 4 + *(int *)(param_1 + 0x150));
        if (pvVar2 != (LPVOID)0x0) {
          CoTaskMemFree(pvVar2);
        }
        *(undefined4 *)(iVar5 + 4 + *(int *)(param_1 + 0x150)) = 0;
        pvVar2 = *(LPVOID *)(iVar5 + 0x10 + *(int *)(param_1 + 0x150));
        if (pvVar2 != (LPVOID)0x0) {
          CoTaskMemFree(pvVar2);
        }
        *(undefined4 *)(iVar5 + 0x10 + *(int *)(param_1 + 0x150)) = 0;
        pvVar2 = *(LPVOID *)(iVar5 + 0x14 + *(int *)(param_1 + 0x150));
        if (pvVar2 != (LPVOID)0x0) {
          CoTaskMemFree(pvVar2);
        }
        iVar4 = iVar4 + 1;
        *(undefined4 *)(iVar5 + 0x14 + *(int *)(param_1 + 0x150)) = 0;
        iVar5 = iVar5 + 0x44;
      } while (iVar4 < *(int *)(param_1 + 0x154));
    }
    free(*(void **)(param_1 + 0x150));
    *(undefined4 *)(param_1 + 0x150) = 0;
    *(undefined4 *)(param_1 + 0x154) = 0;
    return 1;
  }
  return 1;
}


