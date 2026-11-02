/* Module: vidpcore.dll
   Function: FUN_5de4f340
   Address: 5de4f340
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de4f340(int param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80070057;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x84));
  if (0x14 < param_3) {
    param_3 = 0x14;
  }
  puVar2 = (undefined4 *)(param_1 + 0x9c);
  for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined1 *)param_2 = *(undefined1 *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x84));
  return 0;
}


