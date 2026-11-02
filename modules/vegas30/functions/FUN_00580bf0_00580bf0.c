/* Module: vegas30.exe
   Function: FUN_00580bf0
   Address: 00580bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00580bf0(int *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  FUN_00580a60(param_2);
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
  *(uint *)(*param_1 + -8) = param_2;
  *(undefined1 *)(*param_1 + param_2) = 0;
  return;
}


