/* Module: vegas30.exe
   Function: FUN_004d3740
   Address: 004d3740
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d3740(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  double dVar2;
  int iVar3;
  
  dVar2 = (double)CONCAT44(param_3,param_2);
  iVar1 = *(int *)(param_1 + 0x5d0);
  if ((_DAT_00610fd8 < dVar2) && (dVar2 <= _DAT_006128e0)) {
    *(double *)(iVar1 + 600) = dVar2;
    iVar3 = FUN_004cdf50((float)dVar2);
    _TrackbarInst_Message_16
              (*(undefined4 *)(iVar1 + 0x180),0x610,1,(int)(iVar3 + (iVar3 >> 0x1f & 0x7fU)) >> 7);
    iVar3 = Transport_IsAnyPlaying();
    if (iVar3 != 0) {
      FUN_004ce070(param_1,param_2,param_3);
      InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(iVar1 + 0x60),0);
      FUN_005fb0e0(*(undefined4 *)(iVar1 + 0x158),*(undefined4 *)(iVar1 + 0x15c),0);
      return;
    }
  }
  return;
}


