/* Module: sftrans1.dll
   Function: FUN_0044f3a0
   Address: 0044f3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0044f3a0(int param_1)

{
  LPCVOID pvVar1;
  int *piVar2;
  HGLOBAL pvVar3;
  undefined4 *puVar4;
  uint uVar5;
  int local_4;
  
  puVar4 = (undefined4 *)(param_1 + 0x54);
  local_4 = 4;
  do {
    pvVar1 = (LPCVOID)*puVar4;
    if (pvVar1 != (LPCVOID)0x0) {
      pvVar3 = GlobalHandle(pvVar1);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(pvVar1);
      GlobalFree(pvVar3);
      *puVar4 = 0;
      puVar4[-1] = 0;
    }
    puVar4 = puVar4 + 2;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  piVar2 = *(int **)(param_1 + 4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      piVar2 = *(int **)(*(int *)(param_1 + 8) + uVar5 * 4);
      (**(code **)(*piVar2 + 8))(piVar2);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0xc));
  }
  pvVar1 = *(LPCVOID *)(param_1 + 8);
  pvVar3 = GlobalHandle(pvVar1);
  GlobalUnlock(pvVar3);
  pvVar3 = GlobalHandle(pvVar1);
  GlobalFree(pvVar3);
  return;
}


