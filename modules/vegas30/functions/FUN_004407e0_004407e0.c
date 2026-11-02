/* Module: vegas30.exe
   Function: FUN_004407e0
   Address: 004407e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_004407e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  
  param_1[1] = 1;
  *param_1 = &PTR_LAB_00611fd4;
  *(undefined2 *)(param_1 + 8) = 1;
  *(undefined2 *)((int)param_1 + 0x22) = 2;
  param_1[9] = 0xac44;
  *(undefined2 *)((int)param_1 + 0x2e) = 0x10;
  *(undefined2 *)(param_1 + 0xb) = 4;
  param_1[10] = 0x2b110;
  *(undefined2 *)(param_1 + 0xc) = 0;
  param_1[4] = param_3;
  param_1[2] = param_2;
  param_1[5] = param_4;
  uVar1 = ftol();
  *(undefined8 *)(param_1 + 6) = uVar1;
  param_1[0x10] = param_6;
  param_1[0x11] = param_7;
  uVar1 = ftol();
  *(undefined8 *)(param_1 + 0x12) = uVar1;
  return param_1;
}


