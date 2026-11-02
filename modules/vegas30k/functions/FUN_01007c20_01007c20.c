/* Module: vegas30k.dll
   Function: FUN_01007c20
   Address: 01007c20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01007c20(byte *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  pbVar2 = param_1;
  bVar1 = *param_1;
  if (bVar1 < 0x80) {
    uVar3 = ((uint)*param_2 * (uint)bVar1 * 2) / 0xff;
  }
  else {
    uVar3 = (int)((0xff - (uint)*param_2) * (bVar1 - 0xff) * 2) / 0xff + 0xff;
  }
  param_1 = (byte *)(uint)bVar1;
  uVar4 = param_3 & 0xff;
  iVar5 = 0xff - uVar4;
  iVar6 = uVar3 * uVar4 + iVar5 * (int)param_1;
  bVar1 = pbVar2[1];
  *pbVar2 = ((char)(iVar6 / 0xff) + (char)(iVar6 >> 0x1f)) -
            (char)((longlong)iVar6 * 0x80808081 >> 0x3f);
  if (bVar1 < 0x80) {
    uVar3 = ((uint)param_2[1] * (uint)bVar1 * 2) / 0xff;
  }
  else {
    uVar3 = (int)((0xff - (uint)param_2[1]) * (bVar1 - 0xff) * 2) / 0xff + 0xff;
  }
  param_3 = (uint)bVar1;
  iVar6 = uVar3 * uVar4 + param_3 * iVar5;
  bVar1 = pbVar2[2];
  pbVar2[1] = ((char)(iVar6 / 0xff) + (char)(iVar6 >> 0x1f)) -
              (char)((longlong)iVar6 * 0x80808081 >> 0x3f);
  if (bVar1 < 0x80) {
    uVar3 = ((uint)param_2[2] * (uint)bVar1 * 2) / 0xff;
  }
  else {
    uVar3 = (int)((0xff - (uint)param_2[2]) * (bVar1 - 0xff) * 2) / 0xff + 0xff;
  }
  param_3 = (uint)bVar1;
  iVar5 = uVar3 * uVar4 + param_3 * iVar5;
  pbVar2[2] = ((char)(iVar5 / 0xff) + (char)(iVar5 >> 0x1f)) -
              (char)((longlong)iVar5 * 0x80808081 >> 0x3f);
  uVar3 = (uint)pbVar2[3] + (uint)param_2[3];
  if (0xff < uVar3) {
    uVar3 = 0xff;
  }
  pbVar2[3] = (byte)uVar3;
  return;
}


