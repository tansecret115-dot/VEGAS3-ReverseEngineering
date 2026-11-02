/* Module: vegas30.exe
   Function: FUN_00580d20
   Address: 00580d20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_00580d20(int *param_1,uint param_2,undefined4 *param_3,uint param_4,undefined4 *param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_4 + param_2 != 0) {
    FUN_00580920(param_4 + param_2);
    puVar2 = (undefined4 *)*param_1;
    for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = *param_3;
      param_3 = param_3 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)param_3;
      param_3 = (undefined4 *)((int)param_3 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    puVar2 = (undefined4 *)(*param_1 + param_2);
    for (uVar1 = param_4 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = *param_5;
      param_5 = param_5 + 1;
      puVar2 = puVar2 + 1;
    }
    for (param_4 = param_4 & 3; param_4 != 0; param_4 = param_4 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)param_5;
      param_5 = (undefined4 *)((int)param_5 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
  }
  return;
}


