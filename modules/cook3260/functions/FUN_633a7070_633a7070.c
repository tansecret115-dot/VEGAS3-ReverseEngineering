/* Module: cook3260.dll
   Function: FUN_633a7070
   Address: 633a7070
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_633a7070(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*param_1 != 0) {
    if (param_1[1] != 0) {
      do {
        for (puVar1 = *(undefined4 **)(*param_1 + uVar2 * 4); puVar1 != (undefined4 *)0x0;
            puVar1 = (undefined4 *)*puVar1) {
          thunk_FUN_633a6af0(puVar1 + 2);
          thunk_FUN_633a6af0(puVar1 + 5);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)param_1[1]);
    }
    operator_delete((void *)*param_1);
    *param_1 = 0;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    FUN_633a72a0((undefined4 *)param_1[4]);
    param_1[4] = 0;
  }
  return;
}


