/* Module: vegas30k.dll
   Function: FUN_0119b590
   Address: 0119b590
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0119b590(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_1[0x187] == 0) {
    return -0x7fff0001;
  }
  iVar1 = (**(code **)(*param_1 + 0x168))(param_3,param_4,1);
  if ((-1 < iVar1) && (param_1[0x189] == 0)) {
    uVar2 = FUN_011aaf10(param_1);
    FUN_011aaee0(param_1,uVar2 | 0x40);
    param_1[8] = param_1[8] | 0x40;
  }
  return iVar1;
}


