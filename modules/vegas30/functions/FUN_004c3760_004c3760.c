/* Module: vegas30.exe
   Function: FUN_004c3760
   Address: 004c3760
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c3760(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(param_2 + 0x69c) + 0x54);
  uVar2 = ftol();
  _TrackbarInst_Message_16(*(undefined4 *)(iVar1 + 0x134),0x60e,0,0);
  _TrackbarInst_Message_16(*(undefined4 *)(iVar1 + 0x134),0x60f,0,500);
  _TrackbarInst_Message_16(*(undefined4 *)(iVar1 + 0x134),0x610,1,uVar2);
  return;
}


