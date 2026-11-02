/* Module: vegas30.exe
   Function: FUN_00440320
   Address: 00440320
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_00440320(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_00611f70;
  *(undefined2 *)(param_1 + 6) = 1;
  *(undefined2 *)((int)param_1 + 0x1a) = 2;
  param_1[7] = 0xac44;
  *(undefined2 *)((int)param_1 + 0x26) = 0x10;
  *(undefined2 *)(param_1 + 9) = 4;
  param_1[8] = 0x2b110;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[2] = param_3;
  param_1[1] = param_2;
  param_1[3] = param_4;
  uVar1 = ftol();
  *(undefined8 *)(param_1 + 4) = uVar1;
  return param_1;
}


