/* Module: mcmpgdec.dll
   Function: FUN_1000dd34
   Address: 1000dd34
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000dd34(undefined1 *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  for (; ((uint)param_2 & 0x1f) != 0; param_2 = (undefined8 *)((int)param_2 + 1)) {
    param_3 = param_3 - 1;
    *param_1 = *(undefined1 *)param_2;
    param_1 = param_1 + 1;
  }
  puVar9 = (undefined8 *)(param_1 + -0x40);
  for (; 0x3f < param_3; param_3 = param_3 - 0x40) {
    uVar1 = *param_2;
    uVar2 = param_2[4];
    uVar3 = param_2[1];
    uVar4 = param_2[5];
    uVar5 = param_2[2];
    uVar6 = param_2[6];
    uVar7 = param_2[3];
    uVar8 = param_2[7];
    param_2 = param_2 + 8;
    puVar9[8] = uVar1;
    puVar9[9] = uVar3;
    puVar9[10] = uVar5;
    puVar9[0xb] = uVar7;
    puVar9[0xc] = uVar2;
    puVar9[0xd] = uVar4;
    puVar9[0xe] = uVar6;
    puVar9[0xf] = uVar8;
    puVar9 = puVar9 + 8;
  }
  puVar9 = puVar9 + 8;
  for (; 7 < param_3; param_3 = param_3 - 8) {
    *puVar9 = *param_2;
    param_2 = param_2 + 1;
    puVar9 = puVar9 + 1;
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined1 *)puVar9 = *(undefined1 *)param_2;
    param_2 = (undefined8 *)((int)param_2 + 1);
    puVar9 = (undefined8 *)((int)puVar9 + 1);
  }
  return;
}


