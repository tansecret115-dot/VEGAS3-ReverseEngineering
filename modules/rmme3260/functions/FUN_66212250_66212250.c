/* Module: rmme3260.dll
   Function: FUN_66212250
   Address: 66212250
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66212250(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_6626b6c0;
  if (*(void **)((int)param_1 + 0x4e) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x4e));
    *(undefined4 *)((int)param_1 + 0x4e) = 0;
    *(undefined4 *)((int)param_1 + 0x52) = 0;
  }
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[1] = 0;
  }
  FUN_66217f60(param_1 + 2);
  return;
}


