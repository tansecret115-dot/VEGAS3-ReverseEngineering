/* Module: rmme3260.dll
   Function: FUN_662063e0
   Address: 662063e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662063e0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_6626b408;
  if (*(void **)((int)param_1 + 0x46) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x46));
    *(undefined4 *)((int)param_1 + 0x46) = 0;
    *(undefined2 *)(param_1 + 0x14) = 0;
    *(undefined2 *)((int)param_1 + 0x4e) = 0;
  }
  if (*(void **)((int)param_1 + 0x4a) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x4a));
    *(undefined4 *)((int)param_1 + 0x4a) = 0;
    *(undefined2 *)(param_1 + 0x14) = 0;
    *(undefined2 *)((int)param_1 + 0x4e) = 0;
  }
  piVar1 = *(int **)((int)param_1 + 0x5a);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x5a) = 0;
  }
  FUN_66217f60(param_1);
  return;
}


