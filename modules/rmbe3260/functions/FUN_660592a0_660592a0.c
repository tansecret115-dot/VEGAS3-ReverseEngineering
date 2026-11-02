/* Module: rmbe3260.dll
   Function: FUN_660592a0
   Address: 660592a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_660592a0(int param_1,undefined4 *param_2,undefined2 *param_3,undefined2 *param_4,
            undefined4 *param_5,undefined2 *param_6,undefined2 *param_7)

{
  undefined4 uVar1;
  
  uVar1 = 0x80004003;
  if ((((param_2 != (undefined4 *)0x0) && (param_5 != (undefined4 *)0x0)) &&
      (param_3 != (undefined2 *)0x0)) &&
     (((param_6 != (undefined2 *)0x0 && (param_4 != (undefined2 *)0x0)) &&
      (param_7 != (undefined2 *)0x0)))) {
    *param_2 = *(undefined4 *)(param_1 + 8);
    *param_5 = *(undefined4 *)(param_1 + 0xc);
    *param_3 = *(undefined2 *)(param_1 + 0x10);
    *param_6 = *(undefined2 *)(param_1 + 0x12);
    *param_4 = *(undefined2 *)(param_1 + 0x14);
    *param_7 = *(undefined2 *)(param_1 + 0x16);
    uVar1 = 0;
  }
  return uVar1;
}


