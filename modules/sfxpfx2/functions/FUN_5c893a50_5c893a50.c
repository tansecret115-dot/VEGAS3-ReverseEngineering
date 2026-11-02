/* Module: sfxpfx2.dll
   Function: FUN_5c893a50
   Address: 5c893a50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c893a50(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  puVar2 = (undefined4 *)(param_1 + 0x44);
  for (iVar1 = (param_3 & 0x1fffffff) << 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar2 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  *(uint *)(param_1 + 0x40) = param_3;
  *(undefined4 *)(param_1 + 0x14c) = 1;
  *(undefined4 *)(param_1 + 0x144) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


