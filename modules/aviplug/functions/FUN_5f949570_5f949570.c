/* Module: aviplug.dll
   Function: FUN_5f949570
   Address: 5f949570
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5f949570(int param_1)

{
  undefined4 *puVar1;
  undefined4 local_4;
  
  local_4 = 0;
  puVar1 = *(undefined4 **)(param_1 + -0x194);
  (**(code **)*puVar1)(puVar1,&DAT_5f9d9c70,&local_4);
  return puVar1;
}


