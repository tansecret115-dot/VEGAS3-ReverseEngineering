/* Module: mp3plug.dll
   Function: FUN_5f70dc20
   Address: 5f70dc20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_5f70dc20(float param_1,float param_2,int param_3,int param_4)

{
  double dVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_24;
  undefined4 uStack_20;
  
  iVar3 = *(int *)(param_4 + param_3 * 4);
  dVar1 = (double)((_DAT_5f763f88 / param_2) * param_1 * (float)iVar3 + _DAT_5f763f8c);
  uStack_20 = (uint)((ulonglong)dVar1 >> 0x20);
  local_24 = SUB84(dVar1,0);
  uVar4 = uStack_20 >> 0x14 & 0x7ff;
  if (uVar4 < 0x3ff) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uStack_20 << 0xb | local_24 >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar4 & 0x1f);
    if ((longlong)dVar1 < 0) {
      uVar4 = -uVar4;
    }
  }
  if (iVar3 <= (int)uVar4) {
    return param_3;
  }
  iVar2 = 0;
  iVar3 = iVar2;
  if (0 < param_3) {
    do {
      iVar3 = iVar2;
      if ((((int)uVar4 < *(int *)(param_4 + 4 + iVar2 * 4)) || (iVar3 = iVar2 + 1, param_3 <= iVar3)
          ) || ((int)uVar4 < *(int *)(param_4 + 4 + iVar3 * 4))) break;
      iVar2 = iVar2 + 2;
      iVar3 = iVar2;
    } while (iVar2 < param_3);
  }
  if ((int)(*(int *)(param_4 + 4 + iVar3 * 4) - uVar4) <
      (int)(uVar4 - *(int *)(param_4 + iVar3 * 4))) {
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}


