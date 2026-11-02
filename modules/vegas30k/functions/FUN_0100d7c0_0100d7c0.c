/* Module: vegas30k.dll
   Function: FUN_0100d7c0
   Address: 0100d7c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0100d7c0(byte *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  
  bVar1 = *param_1;
  bVar3 = *param_2;
  if (*param_2 < bVar1) {
    bVar3 = bVar1;
  }
  param_3 = param_3 & 0xff;
  iVar4 = 0xff - param_3;
  iVar2 = (uint)bVar1 * iVar4 + bVar3 * param_3;
  bVar1 = param_1[1];
  *param_1 = ((char)(iVar2 / 0xff) + (char)(iVar2 >> 0x1f)) -
             (char)((longlong)iVar2 * 0x80808081 >> 0x3f);
  bVar3 = param_2[1];
  if (param_2[1] < bVar1) {
    bVar3 = bVar1;
  }
  iVar2 = (uint)bVar1 * iVar4 + bVar3 * param_3;
  bVar1 = param_1[2];
  param_1[1] = ((char)(iVar2 / 0xff) + (char)(iVar2 >> 0x1f)) -
               (char)((longlong)iVar2 * 0x80808081 >> 0x3f);
  bVar3 = param_2[2];
  if (param_2[2] < bVar1) {
    bVar3 = bVar1;
  }
  iVar2 = (uint)bVar1 * iVar4 + bVar3 * param_3;
  param_1[2] = ((char)(iVar2 / 0xff) + (char)(iVar2 >> 0x1f)) -
               (char)((longlong)iVar2 * 0x80808081 >> 0x3f);
  if (param_1[3] < param_2[3]) {
    param_1[3] = param_2[3];
    return;
  }
  param_1[3] = param_1[3];
  return;
}


