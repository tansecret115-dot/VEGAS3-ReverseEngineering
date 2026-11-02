/* Module: encn3260.dll
   Function: FUN_66498ca0
   Address: 66498ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66498ca0(int param_1)

{
  undefined4 *puVar1;
  
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_1 + 0x11),*(undefined4 *)(param_1 + 0x15));
  }
  return 0;
}


