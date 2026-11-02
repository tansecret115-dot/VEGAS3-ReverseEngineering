/* Module: vegas30k.dll
   Function: FUN_0100d600
   Address: 0100d600
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0100d600(byte *param_1,byte *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  param_3 = param_3 & 0xff;
  iVar2 = 0xff - param_3;
  iVar1 = (int)((0xff - (uint)*param_2) * (0xff - (uint)*param_1) * param_3) /
          (int)(*param_2 + 1 + iVar2);
  iVar1 = (uint)*param_1 - ((int)(iVar1 + (iVar1 >> 0x1f & 0xffU)) >> 8);
  *param_1 = (iVar1 < 0) - 1U & (byte)iVar1;
  iVar1 = (int)((0xff - (uint)param_2[1]) * (0xff - (uint)param_1[1]) * param_3) /
          (int)(param_2[1] + 1 + iVar2);
  iVar1 = (uint)param_1[1] - ((int)(iVar1 + (iVar1 >> 0x1f & 0xffU)) >> 8);
  param_1[1] = (iVar1 < 0) - 1U & (byte)iVar1;
  iVar1 = (int)((0xff - (uint)param_2[2]) * (0xff - (uint)param_1[2]) * param_3) /
          (int)(param_2[2] + 1 + iVar2);
  iVar1 = (uint)param_1[2] - ((int)(iVar1 + (iVar1 >> 0x1f & 0xffU)) >> 8);
  param_1[2] = (iVar1 < 0) - 1U & (byte)iVar1;
  return;
}


