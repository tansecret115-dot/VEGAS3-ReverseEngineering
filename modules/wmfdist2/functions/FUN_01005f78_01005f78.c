/* Module: wmfdist2.exe
   Function: FUN_01005f78
   Address: 01005f78
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl
FUN_01005f78(undefined *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 *param_9)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)param_1)(0x804);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_0100718c(param_9,5,0);
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[0x22] = 0xffffffff;
    puVar1[1] = param_2;
    puVar1[3] = param_3;
    puVar1[4] = param_4;
    puVar1[5] = param_5;
    puVar1[6] = param_6;
    puVar1[0x21] = 0xffffffff;
    puVar1[7] = param_7;
    puVar1[0x12] = 0;
    puVar1[8] = param_8;
    puVar1[0x11] = 0;
    puVar1[0x13] = 0;
    puVar1[2] = param_1;
    *puVar1 = param_9;
    *(undefined2 *)((int)puVar1 + 0xb2) = 0xf;
    puVar1[0x28] = 0xffff;
    puVar1[0x2a] = 0xffff;
    puVar1[0x29] = 0xffff;
  }
  return puVar1;
}


