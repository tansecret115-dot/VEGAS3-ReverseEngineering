/* Module: vegas30k.dll
   Function: FUN_0119ffc0
   Address: 0119ffc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0119ffc0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x640);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  do {
    (**(code **)(*(int *)*puVar1 + 0x8c))((int *)*puVar1,0x30,param_2);
    puVar1 = (undefined4 *)puVar1[0xd];
  } while (puVar1 != (undefined4 *)0x0);
  return 0;
}


