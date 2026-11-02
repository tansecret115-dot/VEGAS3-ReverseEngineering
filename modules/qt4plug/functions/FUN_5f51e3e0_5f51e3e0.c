/* Module: qt4plug.dll
   Function: FUN_5f51e3e0
   Address: 5f51e3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f51e3e0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *param_3 = 0x28;
  param_3[1] = (int)*(short *)(*param_1 + 0x20);
  param_3[2] = (int)*(short *)(*param_1 + 0x22);
  *(undefined2 *)(param_3 + 3) = 1;
  *(undefined2 *)((int)param_3 + 0xe) = 0x20;
  param_3[4] = 0;
  param_3[5] = 0;
  uVar1 = ftol();
  param_3[6] = uVar1;
  uVar1 = ftol();
  param_3[7] = uVar1;
  param_3[8] = 0;
  param_3[9] = 0;
  return 0;
}


