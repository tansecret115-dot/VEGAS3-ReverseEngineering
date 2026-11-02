/* Module: dnet3260.dll
   Function: FUN_63051bf0
   Address: 63051bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_63051bf0(int param_1)

{
  undefined4 *puVar1;
  
  if ((*(int *)(param_1 + 0xe) != 0) && (*(code **)(param_1 + 0x1a) != (code *)0x0)) {
    (**(code **)(param_1 + 0x1a))(*(int *)(param_1 + 0xe));
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  if ((*(int *)(param_1 + 0x12) != 0) && (*(code **)(param_1 + 0x22) != (code *)0x0)) {
    (**(code **)(param_1 + 0x22))(*(int *)(param_1 + 0x12));
    *(undefined4 *)(param_1 + 0x12) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 6);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_63052b20(puVar1);
    operator_delete(puVar1);
    *(undefined4 *)(param_1 + 6) = 0;
    *(undefined4 *)(param_1 + 0x16) = 0;
    *(undefined4 *)(param_1 + 0x1a) = 0;
    *(undefined4 *)(param_1 + 0x26) = 0;
    *(undefined4 *)(param_1 + 0x2a) = 0;
    *(undefined4 *)(param_1 + 0x2e) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 10);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_63052b20(puVar1);
    operator_delete(puVar1);
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined4 *)(param_1 + 0x1e) = 0;
    *(undefined4 *)(param_1 + 0x22) = 0;
    *(undefined4 *)(param_1 + 0x32) = 0;
    *(undefined4 *)(param_1 + 0x36) = 0;
    *(undefined4 *)(param_1 + 0x3a) = 0;
  }
  return;
}


