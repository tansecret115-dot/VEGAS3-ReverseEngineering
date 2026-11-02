/* Module: vegas30k.dll
   Function: FUN_0100d310
   Address: 0100d310
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0100d310(byte *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = *param_2;
  if (bVar1 < 0x80) {
    uVar3 = (uint)*param_1;
    uVar2 = (bVar1 * uVar3 * 2) / 0xff;
  }
  else {
    uVar3 = (uint)*param_1;
    uVar2 = (int)((0xff - (uint)bVar1) * (uVar3 - 0xff) * 2) / 0xff + 0xff;
  }
  param_3 = param_3 & 0xff;
  iVar5 = 0xff - param_3;
  iVar4 = uVar2 * param_3 + iVar5 * uVar3;
  *param_1 = ((char)(iVar4 / 0xff) + (char)(iVar4 >> 0x1f)) -
             (char)((longlong)iVar4 * 0x80808081 >> 0x3f);
  bVar1 = param_2[1];
  if (bVar1 < 0x80) {
    uVar3 = (uint)param_1[1];
    uVar2 = (bVar1 * uVar3 * 2) / 0xff;
  }
  else {
    uVar3 = (uint)param_1[1];
    uVar2 = (int)((0xff - (uint)bVar1) * (uVar3 - 0xff) * 2) / 0xff + 0xff;
  }
  iVar4 = uVar2 * param_3 + uVar3 * iVar5;
  param_1[1] = ((char)(iVar4 / 0xff) + (char)(iVar4 >> 0x1f)) -
               (char)((longlong)iVar4 * 0x80808081 >> 0x3f);
  bVar1 = param_2[2];
  if (bVar1 < 0x80) {
    uVar3 = (uint)param_1[2];
    uVar2 = (bVar1 * uVar3 * 2) / 0xff;
  }
  else {
    uVar3 = (uint)param_1[2];
    uVar2 = (int)((0xff - (uint)bVar1) * (uVar3 - 0xff) * 2) / 0xff + 0xff;
  }
  iVar4 = uVar2 * param_3 + uVar3 * iVar5;
  param_1[2] = ((char)(iVar4 / 0xff) + (char)(iVar4 >> 0x1f)) -
               (char)((longlong)iVar4 * 0x80808081 >> 0x3f);
  uVar2 = (uint)param_1[3] + (uint)param_2[3];
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  param_1[3] = (byte)uVar2;
  return;
}


