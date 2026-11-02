/* Module: rmme3260.dll
   Function: thunk_FUN_662338f0
   Address: 662338e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall thunk_FUN_662338f0(int *param_1)

{
  int iVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if ((int *)*param_1 != (int *)0x0) {
    uStack_14 = 0x4c8;
    uStack_10 = 0;
    uStack_c = 0;
    uStack_8 = 0;
    iVar1 = (**(code **)(*(int *)*param_1 + 0x24))(&uStack_14,0);
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


