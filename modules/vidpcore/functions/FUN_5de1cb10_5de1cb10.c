/* Module: vidpcore.dll
   Function: FUN_5de1cb10
   Address: 5de1cb10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de1cb10(int param_1,undefined4 *param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80070057;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  if (0x20 < param_3) {
    param_3 = 0x20;
  }
  puVar3 = (undefined4 *)(param_1 + 0x98);
  for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  *(undefined4 *)(param_1 + 0xd8) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  piVar1 = *(int **)(param_1 + 300);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  return 0;
}


