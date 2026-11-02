/* Module: mp3plug.dll
   Function: FUN_5f71e100
   Address: 5f71e100
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_5f71e100(void *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_10;
  
  iVar1 = (int)(param_2 + ((uint)((int)param_2 >> 2) >> 0x1d)) >> 3;
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      uVar2 = FUN_5f714080(param_1,8);
      iVar3 = iVar3 + 1;
      param_3 = (param_3 & 0xff) << 8 ^
                *(uint *)(&DAT_5f769df0 + ((uVar2 ^ param_3 >> 8) & 0xff) * 4);
    } while (iVar3 < iVar1);
  }
  if ((param_2 & 7) != 0) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      local_10 = (uint)((param_3 & 0x8000) != 0);
      uVar2 = FUN_5f714080(param_1,1);
      param_3 = param_3 * 2 & 0xffff;
      if (uVar2 != local_10) {
        param_3 = param_3 ^ 0x8005;
      }
    } while (iVar1 < (int)(param_2 & 7));
  }
  return param_3;
}


