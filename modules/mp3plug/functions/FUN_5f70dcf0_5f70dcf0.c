/* Module: mp3plug.dll
   Function: FUN_5f70dcf0
   Address: 5f70dcf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f70dcf0(float param_1,float param_2,int param_3,int param_4)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  uint local_1c;
  uint uStack_18;
  
  dVar1 = (double)((_DAT_5f763f94 / param_2) * param_1 * (float)*(int *)(param_4 + param_3 * 4) +
                  _DAT_5f763f98);
  uStack_18 = (uint)((ulonglong)dVar1 >> 0x20);
  local_1c = SUB84(dVar1,0);
  uVar3 = uStack_18 >> 0x14 & 0x7ff;
  if (uVar3 < 0x3ff) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uStack_18 << 0xb | local_1c >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar3 & 0x1f);
    if ((longlong)dVar1 < 0) {
      uVar3 = -uVar3;
    }
  }
  iVar2 = 0;
  if (0 < param_3) {
    do {
      if ((int)uVar3 < *(int *)(param_4 + 4 + iVar2 * 4)) {
        return;
      }
      if (param_3 <= iVar2 + 1) {
        return;
      }
      if ((int)uVar3 < *(int *)(param_4 + 4 + (iVar2 + 1) * 4)) {
        return;
      }
      iVar2 = iVar2 + 2;
    } while (iVar2 < param_3);
  }
  return;
}


