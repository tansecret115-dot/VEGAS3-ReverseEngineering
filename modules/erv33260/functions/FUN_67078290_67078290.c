/* Module: erv33260.dll
   Function: FUN_67078290
   Address: 67078290
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_67078290(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_67090170;
  param_1[0x19] = &PTR_FUN_67090148;
  param_1[0x1a] = &PTR_LAB_67090138;
  param_1[0x1b] = &PTR_FUN_67090128;
  param_1[0x1c] = &PTR_FUN_67090110;
  param_1[0x1d] = &PTR_LAB_670900f8;
  if ((int *)param_1[0xd0] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd0] + 0x2c))(1);
  }
  param_1[0xd0] = 0;
  if (param_1[0xca] != 0) {
    FUN_670787a0((int)param_1);
    param_1[0xca] = 0;
  }
  if ((undefined4 *)param_1[0x5b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x5b])(1);
    param_1[0x5b] = 0;
  }
  FUN_670798d0((int)(param_1 + 0x96));
  FUN_670723f0(param_1);
  return;
}


