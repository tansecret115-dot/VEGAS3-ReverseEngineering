/* Module: vegas30k.dll
   Function: FUN_011c7f40
   Address: 011c7f40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_011c7f40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0x284); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[3]) {
    switch(param_2) {
    case 0:
      (**(code **)(*(int *)*puVar1 + 0xc))((int *)*puVar1,param_1,puVar1[2]);
      break;
    case 1:
      (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1,param_1,puVar1[2]);
      break;
    case 2:
      (**(code **)(*(int *)*puVar1 + 0x14))((int *)*puVar1,param_1,param_3,param_4,puVar1[2]);
      break;
    case 3:
      (**(code **)(*(int *)*puVar1 + 0x18))((int *)*puVar1,param_1,param_3,param_4,puVar1[2]);
      break;
    case 4:
      (**(code **)(*(int *)*puVar1 + 0x1c))((int *)*puVar1,param_1,param_3,param_4,puVar1[2]);
      break;
    case 5:
      (**(code **)(*(int *)*puVar1 + 0x20))((int *)*puVar1,param_1,0,param_3,param_4,puVar1[2]);
    }
  }
  return;
}


