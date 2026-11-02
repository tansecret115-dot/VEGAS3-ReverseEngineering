/* Module: rmme3260.dll
   Function: FUN_662216c0
   Address: 662216c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662216c0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_6626bc80;
  if ((void *)param_1[0x55] != (void *)0x0) {
    operator_delete((void *)param_1[0x55]);
    param_1[0x55] = 0;
  }
  if ((void *)param_1[0x56] != (void *)0x0) {
    operator_delete((void *)param_1[0x56]);
    param_1[0x56] = 0;
  }
  if ((void *)param_1[0x57] != (void *)0x0) {
    operator_delete((void *)param_1[0x57]);
    param_1[0x57] = 0;
  }
  if ((void *)param_1[0x58] != (void *)0x0) {
    operator_delete((void *)param_1[0x58]);
    param_1[0x58] = 0;
  }
  if ((void *)param_1[0x59] != (void *)0x0) {
    operator_delete((void *)param_1[0x59]);
    param_1[0x59] = 0;
  }
  if ((void *)param_1[0x5a] != (void *)0x0) {
    operator_delete((void *)param_1[0x5a]);
    param_1[0x5a] = 0;
  }
  if ((void *)param_1[0x5b] != (void *)0x0) {
    operator_delete((void *)param_1[0x5b]);
    param_1[0x5b] = 0;
  }
  if ((void *)param_1[0x5c] != (void *)0x0) {
    operator_delete((void *)param_1[0x5c]);
    param_1[0x5c] = 0;
  }
  if ((void *)param_1[0x5d] != (void *)0x0) {
    operator_delete((void *)param_1[0x5d]);
    param_1[0x5d] = 0;
  }
  if ((void *)param_1[0x5e] != (void *)0x0) {
    operator_delete((void *)param_1[0x5e]);
    param_1[0x5e] = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x1aa) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x1aa))(1);
    *(undefined4 *)((int)param_1 + 0x1aa) = 0;
  }
  FUN_66250ed0((undefined4 *)((int)param_1 + 0x18e));
  FUN_66208db0(param_1);
  return;
}


