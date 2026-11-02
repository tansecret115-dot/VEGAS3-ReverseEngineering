/* Module: vegas30k.dll
   Function: FUN_0119e490
   Address: 0119e490
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0119e490(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x134))(0,param_2);
  if (-1 < iVar1) {
    param_1[0x147] = 0;
    param_1[0x148] = 0;
    FUN_011aaf10(param_1);
    uVar2 = FUN_011aaf10(param_1);
    FUN_011aaee0(param_1,uVar2 & 0xfffffffe);
    param_1[8] = param_1[8] & 0xfffffffe;
  }
  return iVar1;
}


