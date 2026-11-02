/* Module: vidcap30.exe
   Function: FUN_0057cc40
   Address: 0057cc40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0057cc40(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0058459b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[5] = 1;
  FUN_0057b660(0);
  *param_1 = &PTR_LAB_005a5ca0;
  local_4 = 0;
  (**(code **)(*(int *)(param_1[3] + 0xc) + 4))((int *)(param_1[3] + 0xc));
  if (param_2 == 0) {
    uVar1 = (**(code **)(*(int *)param_1[3] + 0x14))();
    param_1[4] = uVar1;
    uVar1 = (**(code **)(*(int *)param_1[3] + 0x18))();
    param_1[2] = uVar1;
  }
  else {
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    FUN_0057b950(param_2 + 0x18);
  }
  ExceptionList = param_1;
  return param_1;
}


