/* Module: vegas30.exe
   Function: FUN_004d37e0
   Address: 004d37e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d37e0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  LONG local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  undefined1 local_50 [80];
  
  iVar1 = *(int *)(param_1 + 0x5d0);
  local_60 = ((RECT *)(iVar1 + 0x60))->left;
  local_5c = *(undefined4 *)(iVar1 + 100);
  local_58 = *(int *)(iVar1 + 0x68);
  local_54 = *(undefined4 *)(iVar1 + 0x6c);
  piVar2 = (int *)_SfGetUIFontSize_4(100);
  iVar4 = *piVar2;
  uVar3 = ftol();
  SfPrintF(local_50,&DAT_00613a40,uVar3);
  local_60 = local_58 + iVar4 * -4;
  iVar4 = FUN_00404d90(*(undefined4 *)(param_1 + 4),0xffffffff,&local_60,100,local_50,0x50);
  if (iVar4 == 0) {
    fVar5 = (float10)_SfTextToDoubleToken_8(local_50,0);
    if (((float10)_DAT_00610fd8 < fVar5) && (fVar5 <= (float10)_DAT_006128e0)) {
      *(double *)(iVar1 + 600) = (double)fVar5;
      iVar4 = FUN_004cdf50((float)fVar5);
      _TrackbarInst_Message_16
                (*(undefined4 *)(iVar1 + 0x180),0x610,1,(int)(iVar4 + (iVar4 >> 0x1f & 0x7fU)) >> 7)
      ;
      FUN_004ce070(param_1,(double)fVar5);
      InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(iVar1 + 0x60),0);
      iVar4 = Transport_IsAnyPlaying();
      if (iVar4 != 0) {
        FUN_005fb0e0(*(undefined4 *)(iVar1 + 0x158),*(undefined4 *)(iVar1 + 0x15c),0);
        return;
      }
      FUN_004583a0(param_1,0);
      return;
    }
  }
  return;
}


