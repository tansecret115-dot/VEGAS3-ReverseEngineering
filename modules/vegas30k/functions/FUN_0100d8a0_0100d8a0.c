/* Module: vegas30k.dll
   Function: FUN_0100d8a0
   Address: 0100d8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0100d8a0(byte *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = (uint)*param_1 - (uint)*param_2;
  param_3 = param_3 & 0xff;
  uVar3 = (int)uVar1 >> 0x1f;
  iVar4 = 0xff - param_3;
  iVar2 = ((uVar1 ^ uVar3) - uVar3) * param_3 + iVar4 * (uint)*param_1;
  *param_1 = ((char)(iVar2 / 0xff) + (char)(iVar2 >> 0x1f)) -
             (char)((longlong)iVar2 * 0x80808081 >> 0x3f);
  uVar1 = (uint)param_1[1] - (uint)param_2[1];
  uVar3 = (int)uVar1 >> 0x1f;
  iVar2 = ((uVar1 ^ uVar3) - uVar3) * param_3 + (uint)param_1[1] * iVar4;
  param_1[1] = ((char)(iVar2 / 0xff) + (char)(iVar2 >> 0x1f)) -
               (char)((longlong)iVar2 * 0x80808081 >> 0x3f);
  uVar1 = (uint)param_1[2] - (uint)param_2[2];
  uVar3 = (int)uVar1 >> 0x1f;
  iVar2 = ((uVar1 ^ uVar3) - uVar3) * param_3 + (uint)param_1[2] * iVar4;
  param_1[2] = ((char)(iVar2 / 0xff) + (char)(iVar2 >> 0x1f)) -
               (char)((longlong)iVar2 * 0x80808081 >> 0x3f);
  uVar1 = (uint)param_2[3] + (uint)param_1[3];
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  param_1[3] = (byte)uVar1;
  return;
}


