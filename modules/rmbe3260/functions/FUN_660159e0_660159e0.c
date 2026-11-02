/* Module: rmbe3260.dll
   Function: FUN_660159e0
   Address: 660159e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_660159e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_660664d0;
  if ((undefined4 *)param_1[0x22] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x22])(1);
    param_1[0x22] = 0;
  }
  if ((undefined4 *)param_1[0x24] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x24])(1);
    param_1[0x24] = 0;
  }
  if (*(void **)((int)param_1 + 0x9e) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x9e));
    *(undefined4 *)((int)param_1 + 0x9e) = 0;
    *(undefined4 *)((int)param_1 + 0xa2) = 0;
  }
  FUN_6605b770(param_1 + 0x1e);
  FUN_6605b770(param_1 + 0x1b);
  FUN_6605b770(param_1 + 0x18);
  FUN_6605b770(param_1 + 0x15);
  FUN_6605b770(param_1 + 0x12);
  FUN_66014800(param_1);
  return;
}


