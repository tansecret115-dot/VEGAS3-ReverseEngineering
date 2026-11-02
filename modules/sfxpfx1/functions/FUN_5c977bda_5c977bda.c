/* Module: sfxpfx1.dll
   Function: FUN_5c977bda
   Address: 5c977bda
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5c977bda(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined8 param_6)

{
  *(undefined4 *)(param_1 + 0x74) = param_2;
  *(undefined4 *)(param_1 + 0x78) = param_3;
  *(undefined4 *)(param_1 + 0x7c) = param_4;
  *(undefined4 *)(param_1 + 0x80) = param_5;
  *(undefined8 *)(param_1 + 0x84) = param_6;
  return 0;
}


