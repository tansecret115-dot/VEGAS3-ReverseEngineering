/* Module: vegas30k.dll
   Function: FUN_0105ad60
   Address: 0105ad60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_0105ad60(undefined4 *param_1,short *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  *param_1 = &PTR_FUN_011e1d08;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  if ((*param_2 == 3) || (*param_2 == 1)) {
    uVar1 = 0x10;
  }
  else {
    uVar1 = (ushort)param_2[8] + 0x12;
    if (0x11 < uVar1) {
      uVar1 = 0x12;
    }
  }
  puVar3 = param_1 + 1;
  for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = *(undefined4 *)param_2;
    param_2 = param_2 + 2;
    puVar3 = puVar3 + 1;
  }
  for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(char *)puVar3 = (char)*param_2;
    param_2 = (short *)((int)param_2 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  param_1[6] = param_4;
  param_1[8] = param_3;
  *(undefined2 *)(param_1 + 5) = 0;
  param_1[7] = param_5;
  return;
}


