/* Module: vegas30.exe
   Function: FUN_00458200
   Address: 00458200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_00458200(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x18) & 2) == 0) {
      uVar1 = *(undefined4 *)(param_1 + 0xb70);
      uVar2 = *(undefined4 *)(param_1 + 0xb74);
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0xb30);
      uVar2 = *(undefined4 *)(param_1 + 0xb34);
    }
    if ((param_2 != (undefined1 *)0x0) && (*(int *)(param_1 + 0xab4) != 0)) {
      (**(code **)(*(int *)(param_1 + 0xab4) + 0x24))(param_1,uVar1,uVar2,param_2);
    }
    return CONCAT44(uVar2,uVar1);
  }
  return 0;
}


