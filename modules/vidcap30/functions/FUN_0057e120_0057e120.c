/* Module: vidcap30.exe
   Function: FUN_0057e120
   Address: 0057e120
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_0057e120(int param_1,undefined4 *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0057db00(param_2);
  if (-1 < (int)uVar1) {
    uVar1 = (**(code **)*param_2)(param_2,&DAT_005a1c28,param_1 + 0x9c);
    uVar1 = uVar1 & (-1 < (int)uVar1) - 1;
  }
  return uVar1;
}


