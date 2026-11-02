/* Module: sfcdi.dll
   Function: FUN_5bf0d890
   Address: 5bf0d890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf0d890(HANDLE param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uchar local_88 [8];
  uchar local_80 [128];
  
  uVar1 = param_3 - param_4;
  if (-1 < (int)uVar1) {
    do {
      uVar2 = 0;
      local_80[0] = '\0';
      if (param_4 != 0) {
        do {
          FUN_5bf25750(local_88,(BYTE *)"%02x ");
          _mbscat(local_80,local_88);
          uVar2 = uVar2 + 1;
        } while (uVar2 < param_4);
      }
      FUN_5bf0d7a0(param_1,(LPCSTR)local_80);
      uVar1 = uVar1 - param_4;
      param_2 = param_2 + param_4;
    } while (uVar1 < 0x80000000);
  }
  if (param_3 % param_4 != 0) {
    FUN_5bf0d820(param_1,param_2,param_3 % param_4);
  }
  return 0;
}


