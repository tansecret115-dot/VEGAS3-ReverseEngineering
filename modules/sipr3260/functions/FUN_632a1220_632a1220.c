/* Module: sipr3260.dll
   Function: FUN_632a1220
   Address: 632a1220
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_632a1220(int param_1)

{
  undefined4 *puVar1;
  
  if ((*(int *)(param_1 + 0x41) != 0) && (*(code **)(param_1 + 0x4d) != (code *)0x0)) {
    (**(code **)(param_1 + 0x4d))(*(int *)(param_1 + 0x41));
    *(undefined4 *)(param_1 + 0x41) = 0;
  }
  if ((*(int *)(param_1 + 0x45) != 0) && (*(code **)(param_1 + 0x55) != (code *)0x0)) {
    (**(code **)(param_1 + 0x55))(*(int *)(param_1 + 0x45));
    *(undefined4 *)(param_1 + 0x45) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x39);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_632a25f0(puVar1);
    operator_delete(puVar1);
    *(undefined4 *)(param_1 + 0x39) = 0;
    *(undefined4 *)(param_1 + 0x49) = 0;
    *(undefined4 *)(param_1 + 0x4d) = 0;
    *(undefined4 *)(param_1 + 0x5d) = 0;
    *(undefined4 *)(param_1 + 0x61) = 0;
    *(undefined4 *)(param_1 + 0x65) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x3d);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_632a25f0(puVar1);
    operator_delete(puVar1);
    *(undefined4 *)(param_1 + 0x3d) = 0;
    *(undefined4 *)(param_1 + 0x51) = 0;
    *(undefined4 *)(param_1 + 0x55) = 0;
    *(undefined4 *)(param_1 + 0x6d) = 0;
    *(undefined4 *)(param_1 + 0x71) = 0;
    *(undefined4 *)(param_1 + 0x75) = 0;
  }
  return;
}


