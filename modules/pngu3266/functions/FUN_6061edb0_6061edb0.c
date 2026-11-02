/* Module: pngu3266.dll
   Function: FUN_6061edb0
   Address: 6061edb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6061edb0(int *param_1)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((int *)*param_1 != (int *)0x0) {
    local_14 = 0x4c8;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    iVar1 = (**(code **)(*(int *)*param_1 + 0x24))(&local_14,0);
    if (iVar1 == 0) {
      (**(code **)(*(int *)param_1[1] + 0x10))(0xffffffff);
    }
    (**(code **)(*(int *)*param_1 + 0x1c))(0);
    if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*param_1)(1);
    }
    *param_1 = 0;
  }
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  return 0;
}


