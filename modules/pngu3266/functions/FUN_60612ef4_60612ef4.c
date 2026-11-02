/* Module: pngu3266.dll
   Function: FUN_60612ef4
   Address: 60612ef4
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_60612ef4(int param_1,HDC param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  *param_4 = *param_4 + 1;
  if (*param_4 == param_4[1]) {
    local_2c = 0x28;
    iVar1 = FUN_6061264e(param_1,&local_2c);
    if (iVar1 != 0) {
      param_4[7] = local_14;
      param_4[4] = local_20;
      param_4[6] = local_18;
      param_4[2] = local_28;
      param_4[5] = local_1c;
      param_4[8] = local_10;
      param_4[3] = local_24;
      param_4[9] = local_c;
      param_4[10] = local_20 - local_28;
      param_4[0xb] = local_1c - local_24;
      iVar2 = GetDeviceCaps(param_2,0xc);
      param_4[0xe] = (int)param_2;
      param_4[0xc] = iVar2;
      param_4[0xd] = 1;
    }
    param_4[0xf] = iVar1;
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


