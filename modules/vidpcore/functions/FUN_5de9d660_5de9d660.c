/* Module: vidpcore.dll
   Function: FUN_5de9d660
   Address: 5de9d660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5de9d660(int param_1)

{
  int *piVar1;
  int iVar2;
  HGLOBAL pvVar3;
  undefined4 *puVar4;
  int local_8;
  
  puVar4 = (undefined4 *)(param_1 + 0x204);
  local_8 = 0x10;
  iVar2 = local_8;
  do {
    local_8 = iVar2;
    if ((LPCVOID)puVar4[-2] != (LPCVOID)0x0) {
      pvVar3 = GlobalHandle((LPCVOID)puVar4[-2]);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle((LPCVOID)puVar4[-2]);
      GlobalFree(pvVar3);
    }
    puVar4[-2] = 0;
    puVar4[-1] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4 = puVar4 + 7;
    iVar2 = local_8 + -1;
  } while (local_8 + -1 != 0);
  piVar1 = *(int **)(param_1 + 0x1f0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(local_8 + 0x1ef) = 0;
  }
  return 0;
}


