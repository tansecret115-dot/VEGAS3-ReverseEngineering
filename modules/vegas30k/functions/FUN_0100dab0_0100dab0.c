/* Module: vegas30k.dll
   Function: FUN_0100dab0
   Address: 0100dab0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0100dab0(byte *param_1,byte *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = (uint)*param_1 - (uint)*param_2;
  param_3 = param_3 & 0xff;
  iVar3 = 0xff - param_3;
  iVar1 = ((iVar1 * iVar1) / 0xff) * param_3 + iVar3 * (uint)*param_1;
  *param_1 = ((char)(iVar1 / 0xff) + (char)(iVar1 >> 0x1f)) -
             (char)((longlong)iVar1 * 0x80808081 >> 0x3f);
  iVar1 = (uint)param_1[1] - (uint)param_2[1];
  iVar1 = ((iVar1 * iVar1) / 0xff) * param_3 + (uint)param_1[1] * iVar3;
  param_1[1] = ((char)(iVar1 / 0xff) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x80808081 >> 0x3f);
  iVar1 = (uint)param_1[2] - (uint)param_2[2];
  iVar1 = ((iVar1 * iVar1) / 0xff) * param_3 + (uint)param_1[2] * iVar3;
  param_1[2] = ((char)(iVar1 / 0xff) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x80808081 >> 0x3f);
  uVar2 = (uint)param_1[3] + (uint)param_2[3];
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  param_1[3] = (byte)uVar2;
  return;
}


