/* Module: vegas30.exe
   Function: FUN_005477f0
   Address: 005477f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005477f0(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 != param_1[0x11]) {
    if (param_1[0x11] != 0) {
      uVar1 = (**(code **)(*param_1 + 0x18))();
      param_1[0x11] = param_2;
      return uVar1;
    }
    uVar1 = (**(code **)(*param_1 + 0x40))();
    param_1[0x11] = param_2;
  }
  return uVar1;
}


