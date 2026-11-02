/* Module: erv23260.dll
   Function: FUN_63805fe0
   Address: 63805fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_63805fe0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_6382d918;
  param_1[0x19] = &PTR_FUN_6382d8f0;
  param_1[0x1a] = &PTR_LAB_6382d8e0;
  param_1[0x1b] = &PTR_FUN_6382d8d0;
  param_1[0x1c] = &PTR_FUN_6382d8b8;
  param_1[0x1d] = &PTR_LAB_6382d8a0;
  if ((undefined4 *)param_1[0x22a] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x22a])(1);
  }
  param_1[0x22a] = 0;
  if ((int *)param_1[0x234] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x234] + 0x2c))(1);
  }
  param_1[0x234] = 0;
  if (param_1[0x22d] != 0) {
    FUN_63806690((int)param_1);
    param_1[0x22d] = 0;
  }
  FUN_63808ef0((int)(param_1 + 0x21));
  FUN_637f2340(param_1);
  return;
}


