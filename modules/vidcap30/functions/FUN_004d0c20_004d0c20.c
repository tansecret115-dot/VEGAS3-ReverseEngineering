/* Module: vidcap30.exe
   Function: FUN_004d0c20
   Address: 004d0c20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004d0c20(int param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  int iVar3;
  HGLOBAL pvVar4;
  uint uVar5;
  int iVar6;
  
  if ((*(int *)(param_1 + 0x6c) != 0) && (*(int *)(param_1 + 0x70) != 0)) {
    uVar5 = 0;
    if (*(int *)(param_1 + 0x70) != 0) {
      iVar6 = 0;
      do {
        iVar3 = *(int *)(param_1 + 0x6c) + iVar6;
        piVar1 = *(int **)(iVar3 + 0x20);
        if (piVar1 != (int *)0x0) {
          if (*(int *)(iVar3 + 0x34) != 0) {
            (**(code **)(*piVar1 + 0x14))(piVar1);
          }
          piVar1 = *(int **)(iVar6 + 0x20 + *(int *)(param_1 + 0x6c));
          (**(code **)(*piVar1 + 8))(piVar1);
          *(undefined4 *)(iVar6 + 0x20 + *(int *)(param_1 + 0x6c)) = 0;
        }
        pvVar2 = *(LPVOID *)(iVar6 + 4 + *(int *)(param_1 + 0x6c));
        if (pvVar2 != (LPVOID)0x0) {
          CoTaskMemFree(pvVar2);
        }
        *(undefined4 *)(iVar6 + 4 + *(int *)(param_1 + 0x6c)) = 0;
        pvVar2 = *(LPVOID *)(iVar6 + 0x10 + *(int *)(param_1 + 0x6c));
        if (pvVar2 != (LPVOID)0x0) {
          CoTaskMemFree(pvVar2);
        }
        *(undefined4 *)(iVar6 + 0x10 + *(int *)(param_1 + 0x6c)) = 0;
        pvVar2 = *(LPVOID *)(iVar6 + 0x14 + *(int *)(param_1 + 0x6c));
        if (pvVar2 != (LPVOID)0x0) {
          CoTaskMemFree(pvVar2);
        }
        uVar5 = uVar5 + 1;
        *(undefined4 *)(iVar6 + 0x14 + *(int *)(param_1 + 0x6c)) = 0;
        iVar6 = iVar6 + 0x3c;
      } while (uVar5 < *(uint *)(param_1 + 0x70));
    }
    pvVar4 = GlobalHandle(*(LPCVOID *)(param_1 + 0x6c));
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(*(LPCVOID *)(param_1 + 0x6c));
    GlobalFree(pvVar4);
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  return;
}


