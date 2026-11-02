/* Module: vegas30.exe
   Function: FUN_00440b10
   Address: 00440b10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_00440b10(undefined4 *param_1,uchar *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  
  param_1[1] = 1;
  *param_1 = &PTR_LAB_00611ff4;
  *(undefined2 *)(param_1 + 0x48) = 1;
  *(undefined2 *)((int)param_1 + 0x122) = 2;
  param_1[0x49] = 0xac44;
  *(undefined2 *)((int)param_1 + 0x12e) = 0x10;
  *(undefined2 *)(param_1 + 0x4b) = 4;
  param_1[0x4a] = 0x2b110;
  *(undefined2 *)(param_1 + 0x4c) = 0;
  _mbscpy((uchar *)(param_1 + 2),param_2);
  param_1[0x44] = param_3;
  param_1[0x4d] = 0xffffffff;
  param_1[0x45] = param_4;
  uVar1 = ftol();
  *(undefined8 *)(param_1 + 0x46) = uVar1;
  param_1[0x4e] = param_5;
  param_1[0x4f] = param_6;
  uVar1 = ftol();
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  return param_1;
}


