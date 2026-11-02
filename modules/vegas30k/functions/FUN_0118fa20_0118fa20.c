/* Module: vegas30k.dll
   Function: FUN_0118fa20
   Address: 0118fa20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0118fa20(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    uVar1 = (**(code **)**(undefined4 **)(param_1 + 0x38))
                      (*(undefined4 **)(param_1 + 0x38),&DAT_011d9dd0,param_2);
    return uVar1;
  }
  return 0x4e005;
}


