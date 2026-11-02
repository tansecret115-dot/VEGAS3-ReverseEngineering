/* Module: pngu3266.dll
   Function: FUN_60612e6a
   Address: 60612e6a
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_60612e6a(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint local_2c [9];
  byte local_8;
  
  local_2c[0] = 0x28;
  *param_4 = *param_4 + 1;
  iVar1 = FUN_6061264e(param_1,local_2c);
  uVar2 = 1;
  if ((iVar1 != 0) && ((local_8 & 1) != 0)) {
    param_4[0xf] = 1;
    param_4[1] = *param_4;
    uVar2 = 0;
  }
  return uVar2;
}


