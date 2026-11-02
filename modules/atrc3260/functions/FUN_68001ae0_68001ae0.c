/* Module: atrc3260.dll
   Function: FUN_68001ae0
   Address: 68001ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_68001ae0(int param_1)

{
  undefined4 *puVar1;
  
  if ((*(int *)(param_1 + 0x32) != 0) && (*(code **)(param_1 + 0x3e) != (code *)0x0)) {
    (**(code **)(param_1 + 0x3e))(*(int *)(param_1 + 0x32));
    *(undefined4 *)(param_1 + 0x32) = 0;
  }
  if ((*(int *)(param_1 + 0x36) != 0) && (*(code **)(param_1 + 0x46) != (code *)0x0)) {
    (**(code **)(param_1 + 0x46))(*(int *)(param_1 + 0x36));
    *(undefined4 *)(param_1 + 0x36) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x2a);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_68002ca0(puVar1);
    operator_delete(puVar1);
    *(undefined4 *)(param_1 + 0x2a) = 0;
    *(undefined4 *)(param_1 + 0x3a) = 0;
    *(undefined4 *)(param_1 + 0x3e) = 0;
    *(undefined4 *)(param_1 + 0x4a) = 0;
    *(undefined4 *)(param_1 + 0x4e) = 0;
    *(undefined4 *)(param_1 + 0x52) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x2e);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_68002ca0(puVar1);
    operator_delete(puVar1);
    *(undefined4 *)(param_1 + 0x2e) = 0;
    *(undefined4 *)(param_1 + 0x42) = 0;
    *(undefined4 *)(param_1 + 0x46) = 0;
    *(undefined4 *)(param_1 + 0x56) = 0;
    *(undefined4 *)(param_1 + 0x5a) = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
  }
  return;
}


