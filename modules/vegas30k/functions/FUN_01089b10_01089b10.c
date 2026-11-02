/* Module: vegas30k.dll
   Function: FUN_01089b10
   Address: 01089b10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01089b10(int param_1,tagVTS_TMAP_SRP *param_2)

{
  short sVar1;
  tagVTS_TMAPTI *ptVar2;
  HGLOBAL hMem;
  uint uVar3;
  tagVTS_TMAP *ptVar4;
  uint local_c;
  uint local_8;
  LPVOID local_4;
  
  ptVar2 = (tagVTS_TMAPTI *)param_2;
  uVar3 = 0;
  SfCdiSwap_VTS_TMAPTI((tagVTS_TMAPTI *)param_2);
  if (*(ushort *)param_2 == 0) {
    return 0;
  }
  SfCdiSwap_VTS_TMAP_SRP(param_2 + 8,*(ushort *)param_2);
  sVar1 = *(short *)param_2;
  param_2 = param_2 + 8;
  if (sVar1 != 0) {
    do {
      ptVar4 = (tagVTS_TMAP *)(ptVar2 + *(int *)param_2);
      SfCdiSwap_VTS_TMAP(ptVar4);
      SfCdiSwap_VTS_MAP_ENT((tagMAP_ENT *)(ptVar4 + 4),*(ushort *)(ptVar4 + 2));
      local_4 = (LPVOID)0x0;
      local_c = (uint)(byte)*ptVar4;
      local_8 = (uint)*(ushort *)(ptVar4 + 2);
      if (*(ushort *)(ptVar4 + 2) != 0) {
        hMem = GlobalAlloc(0x42,(uint)*(ushort *)(ptVar4 + 2) << 2);
        local_4 = GlobalLock(hMem);
        if (local_4 == (LPVOID)0x0) {
          return 0x8007000e;
        }
        memmove(local_4,(tagMAP_ENT *)(ptVar4 + 4),(uint)*(ushort *)(ptVar4 + 2) << 2);
      }
      _SfList_AllocAndInsertItem_20(*(undefined4 *)(param_1 + 0x50),&local_c,0xc,0xffffffff,0);
      uVar3 = uVar3 + 1;
      param_2 = param_2 + 4;
    } while (uVar3 < *(ushort *)ptVar2);
    return 0;
  }
  return 0;
}


