/* Module: vegas30.exe
   Function: FUN_005e4cd0
   Address: 005e4cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005e4cd0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  if (param_1[10] != 0) {
    FUN_005e4d20();
  }
  param_1[2] = (int)param_2;
  iVar1 = (**(code **)*param_2)(param_2,&DAT_0060f0d8,param_1 + 10);
  if (iVar1 < 0) {
    return 0x80004002;
  }
  uVar2 = (**(code **)(*param_1 + 0x3c))(param_1);
  return uVar2;
}


