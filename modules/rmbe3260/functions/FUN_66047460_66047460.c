/* Module: rmbe3260.dll
   Function: FUN_66047460
   Address: 66047460
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66047460(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_660681d0;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  if (*(void **)((int)param_1 + 0x67) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x67));
  }
  if (*(void **)((int)param_1 + 0x6b) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x6b));
  }
  if (*(void **)((int)param_1 + 0x6f) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x6f));
  }
  if (*(void **)((int)param_1 + 0x73) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x73));
  }
  if ((void *)param_1[0x2c] != (void *)0x0) {
    operator_delete((void *)param_1[0x2c]);
  }
  if ((void *)param_1[0x2b] != (void *)0x0) {
    operator_delete((void *)param_1[0x2b]);
  }
  if ((undefined4 *)param_1[0x2a] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2a])(1);
  }
  if ((void *)param_1[0x1e] != (void *)0x0) {
    operator_delete((void *)param_1[0x1e]);
  }
  return;
}


