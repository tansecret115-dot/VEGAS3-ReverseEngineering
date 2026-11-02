/* Module: vidcap30.exe
   Function: FUN_0057b8e0
   Address: 0057b8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0057b8e0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[5];
  if (puVar1 != (undefined4 *)0x0) {
    param_1[5] = puVar1[1];
    param_1[4] = param_1[4] + -1;
    if (puVar1 != (undefined4 *)0x0) goto LAB_0057b90d;
  }
  puVar1 = (undefined4 *)FUN_00404b00(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
LAB_0057b90d:
  puVar1[2] = param_2;
  *puVar1 = 0;
  puVar1[1] = *param_1;
  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    param_1[1] = puVar1;
    *param_1 = puVar1;
    param_1[2] = param_1[2] + 1;
    return;
  }
  *(undefined4 *)*param_1 = puVar1;
  *param_1 = puVar1;
  param_1[2] = param_1[2] + 1;
  return;
}


