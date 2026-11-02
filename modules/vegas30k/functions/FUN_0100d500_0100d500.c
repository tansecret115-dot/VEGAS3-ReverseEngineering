/* Module: vegas30k.dll
   Function: FUN_0100d500
   Address: 0100d500
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0100d500(byte *param_1,byte *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  param_3 = param_3 & 0xff;
  iVar3 = 0xff - param_3;
  iVar1 = (int)((uint)*param_2 * (uint)*param_1 * param_3) / (int)((iVar3 - (uint)*param_2) + 0x100)
  ;
  iVar1 = ((int)(iVar1 + (iVar1 >> 0x1f & 0xffU)) >> 8) + (uint)*param_1;
  if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  *param_1 = (byte)iVar1;
  iVar1 = (int)((uint)param_2[1] * (uint)param_1[1] * param_3) /
          (int)((iVar3 - (uint)param_2[1]) + 0x100);
  iVar1 = ((int)(iVar1 + (iVar1 >> 0x1f & 0xffU)) >> 8) + (uint)param_1[1];
  if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  param_1[1] = (byte)iVar1;
  iVar1 = (int)((uint)param_2[2] * (uint)param_1[2] * param_3) /
          (int)((iVar3 - (uint)param_2[2]) + 0x100);
  iVar1 = ((int)(iVar1 + (iVar1 >> 0x1f & 0xffU)) >> 8) + (uint)param_1[2];
  if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  param_1[2] = (byte)iVar1;
  uVar2 = (uint)param_2[3] + (uint)param_1[3];
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  param_1[3] = (byte)uVar2;
  return;
}


