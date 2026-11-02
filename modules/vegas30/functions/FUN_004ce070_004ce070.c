/* Module: vegas30.exe
   Function: FUN_004ce070
   Address: 004ce070
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ce070(int param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = DAT_00647630;
  puVar1 = *(uint **)(DAT_00647630 + 0x5d0);
  iVar3 = Transport_IsRecording();
  if (iVar3 != 0) {
    *puVar1 = *puVar1 | 0x800;
    InvalidateRect(*(HWND *)(iVar2 + 4),(RECT *)(puVar1 + 0x18),0);
    InvalidateRect(*(HWND *)(iVar2 + 4),(RECT *)(puVar1 + 0x1c),0);
    return;
  }
  *puVar1 = *puVar1 & 0xfffff7ff;
  if ((*(byte *)(param_1 + 0x18) & 8) == 0) {
    puVar1[0x56] = param_2;
    puVar1[0x57] = param_3;
  }
  InvalidateRect(*(HWND *)(iVar2 + 4),(RECT *)(puVar1 + 0x18),0);
  uVar4 = FUN_004cdf50((float)*(double *)(puVar1 + 0x56));
  _TrackbarInst_Message_16(puVar1[0x20],0x610,1,uVar4);
  return;
}


