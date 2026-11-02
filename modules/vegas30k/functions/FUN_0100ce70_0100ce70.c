/* Module: vegas30k.dll
   Function: FUN_0100ce70
   Address: 0100ce70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0100ce70(byte *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (0xff - (uint)*param_2) * (uint)*param_1;
  param_3 = param_3 & 0xff;
  iVar2 = 0xff - param_3;
  iVar3 = (byte)((((char)(iVar3 / 0xff) + (char)(iVar3 >> 0x1f)) -
                 (char)((longlong)iVar3 * 0x80808081 >> 0x3f)) + *param_2) * param_3 +
          iVar2 * (uint)*param_1;
  *param_1 = ((char)(iVar3 / 0xff) + (char)(iVar3 >> 0x1f)) -
             (char)((longlong)iVar3 * 0x80808081 >> 0x3f);
  iVar3 = (0xff - (uint)param_2[1]) * (uint)param_1[1];
  iVar3 = (byte)((((char)(iVar3 / 0xff) + (char)(iVar3 >> 0x1f)) -
                 (char)((longlong)iVar3 * 0x80808081 >> 0x3f)) + param_2[1]) * param_3 +
          (uint)param_1[1] * iVar2;
  param_1[1] = ((char)(iVar3 / 0xff) + (char)(iVar3 >> 0x1f)) -
               (char)((longlong)iVar3 * 0x80808081 >> 0x3f);
  iVar3 = (0xff - (uint)param_2[2]) * (uint)param_1[2];
  iVar3 = (byte)((((char)(iVar3 / 0xff) + (char)(iVar3 >> 0x1f)) -
                 (char)((longlong)iVar3 * 0x80808081 >> 0x3f)) + param_2[2]) * param_3 +
          (uint)param_1[2] * iVar2;
  param_1[2] = ((char)(iVar3 / 0xff) + (char)(iVar3 >> 0x1f)) -
               (char)((longlong)iVar3 * 0x80808081 >> 0x3f);
  uVar1 = (uint)param_1[3] + (uint)param_2[3];
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  param_1[3] = (byte)uVar1;
  return;
}


