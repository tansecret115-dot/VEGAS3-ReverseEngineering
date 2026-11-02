/* Module: extmondrv.dll
   Function: FUN_00405730
   Address: 00405730
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00405730(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_2 == (undefined4 *)0x0) {
    CoTaskMemFree(*(LPVOID *)(param_1 + 0x50));
    FUN_00404600((undefined4 *)(param_1 + 0xc));
    return 0;
  }
  puVar1 = (undefined4 *)(param_1 + 0xc);
  puVar4 = param_2;
  puVar5 = puVar1;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar3 = FUN_00404590((int)param_2,(int)puVar1);
  if (-1 < iVar3) {
    piVar2 = *(int **)(param_1 + 0x48);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 8;
    return iVar3;
  }
  FUN_00404600(puVar1);
  *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xfffffff7;
  return iVar3;
}


