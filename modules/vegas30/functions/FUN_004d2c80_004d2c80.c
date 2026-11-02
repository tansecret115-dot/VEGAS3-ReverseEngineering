/* Module: vegas30.exe
   Function: FUN_004d2c80
   Address: 004d2c80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004d2c80(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_2 + 0x69c) + 0x54);
  if (*(int *)(iVar1 + 0x134) == 0) {
    *(int *)(iVar1 + 0x134) = iVar1 + 0x138;
    *(undefined4 *)(iVar1 + 0xf4) = 0;
    *(undefined4 *)(iVar1 + 0xf8) = 0;
    *(undefined4 *)(iVar1 + 0xfc) = 0;
    *(undefined4 *)(iVar1 + 0x100) = 0;
    _TrackbarInst_Init_28
              (*(undefined4 *)(iVar1 + 0x134),0x608,(undefined4 *)(iVar1 + 0xf4),
               *(undefined4 *)(param_1 + 4),param_3,&LAB_004d2d50,param_1);
    _TrackbarInst_Message_16(*(undefined4 *)(iVar1 + 0x134),0x60e,0,0);
    _TrackbarInst_Message_16(*(undefined4 *)(iVar1 + 0x134),0x60f,0,500);
    _TrackbarInst_Message_16(*(undefined4 *)(iVar1 + 0x134),0x610,1,0);
    FUN_004c3760(param_1,param_2);
    return;
  }
  _TrackbarInst_SetId_8(*(int *)(iVar1 + 0x134),param_3);
  return;
}


