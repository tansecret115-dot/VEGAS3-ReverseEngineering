/* Module: rmme3260.dll
   Function: FUN_66263540
   Address: 66263540
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG __fastcall FUN_66263540(void *param_1)

{
  LONG LVar1;
  
  if (*(undefined4 **)((int)param_1 + 0x1c) != (undefined4 *)0x0) {
    FUN_66263eb0(*(undefined4 **)((int)param_1 + 0x1c));
  }
  LVar1 = InterlockedDecrement((LONG *)((int)param_1 + 0x26));
  if (0 < LVar1) {
    return *(LONG *)((int)param_1 + 0x26);
  }
  if (param_1 != (void *)0x0) {
    FUN_662634b0((int)param_1);
    operator_delete(param_1);
  }
  return 0;
}


