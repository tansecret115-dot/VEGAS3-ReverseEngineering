/* Module: rmto3260.dll
   Function: FUN_662fea60
   Address: 662fea60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662fea60(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x208) != 0) {
    if (*(code **)(param_1 + 0x22f) != (code *)0x0) {
      (**(code **)(param_1 + 0x22f))(*(undefined4 *)(param_1 + 0x227));
    }
    puVar1 = *(undefined4 **)(param_1 + 0x208);
    *(undefined4 *)(param_1 + 0x22b) = 0;
    *(undefined4 *)(param_1 + 0x22f) = 0;
    *(undefined4 *)(param_1 + 0x233) = 0;
    *(undefined4 *)(param_1 + 0x237) = 0;
    *(undefined4 *)(param_1 + 0x23b) = 0;
    *(undefined4 *)(param_1 + 0x23f) = 0;
    *(undefined4 *)(param_1 + 0x243) = 0;
    *(undefined4 *)(param_1 + 0x247) = 0;
    *(undefined4 *)(param_1 + 0x24b) = 0;
    *(undefined4 *)(param_1 + 0x24f) = 0;
    *(undefined4 *)(param_1 + 0x253) = 0;
    *(undefined4 *)(param_1 + 599) = 0;
    *(undefined4 *)(param_1 + 0x25b) = 0;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_662f2c80(puVar1);
      operator_delete(puVar1);
    }
    *(undefined4 *)(param_1 + 0x208) = 0;
  }
  return;
}


