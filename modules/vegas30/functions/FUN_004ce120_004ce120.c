/* Module: vegas30.exe
   Function: FUN_004ce120
   Address: 004ce120
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ce120(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  float10 fVar4;
  uint local_10;
  uint local_c;
  
  puVar1 = *(uint **)(param_3 + 0x5d0);
  if (param_4 == 8) {
    bVar2 = _DAT_00613a18 <= *(double *)(puVar1 + 0x96);
    *puVar1 = *puVar1 & 0xfffffbff;
    if ((bVar2) && (*(double *)(puVar1 + 0x96) <= _DAT_00612af0)) {
      puVar1[0x96] = 0;
      puVar1[0x97] = 0x3ff00000;
      iVar3 = FUN_004cdf50(0x3f800000);
      _TrackbarInst_Message_16(puVar1[0x60],0x610,1,(int)(iVar3 + (iVar3 >> 0x1f & 0x7fU)) >> 7);
    }
    iVar3 = Transport_IsAnyPlaying();
    if (iVar3 == 0) {
      local_10 = 0;
      local_c = 0;
    }
    else {
      local_10 = puVar1[0x96];
      local_c = puVar1[0x97];
    }
    FUN_004ce070(param_3,local_10,local_c);
  }
  else {
    *puVar1 = *puVar1 | 0x400;
    iVar3 = _TrackbarInst_DefScrollProc_20(param_1,param_4,param_5,1,1);
    fVar4 = (float10)FUN_004cdfb0((iVar3 * 0x100) / 2);
    *(double *)(puVar1 + 0x96) = (double)fVar4;
    iVar3 = Transport_IsAnyPlaying();
    if (iVar3 != 0) {
      FUN_004ce070(param_3,puVar1[0x96],puVar1[0x97]);
      FUN_005fb0e0(puVar1[0x56],puVar1[0x57],0);
    }
  }
  if (puVar1[0x5a] != puVar1[0x58] && -1 < (int)(puVar1[0x5a] - puVar1[0x58])) {
    InvalidateRect(*(HWND *)(param_3 + 4),(RECT *)(puVar1 + 0x58),0);
  }
  return;
}


