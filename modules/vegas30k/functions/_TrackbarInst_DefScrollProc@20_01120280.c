/* Module: vegas30k.dll
   Function: _TrackbarInst_DefScrollProc@20
   Address: 01120280
   Source: Ghidra pseudocode (Stage 10 batch) */


void _TrackbarInst_DefScrollProc_20
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined4 uVar1;
  
                    /* 0x120280  1344  _TrackbarInst_DefScrollProc@20 */
  uVar1 = FUN_0111fba0(param_2,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x10),
                       *(undefined4 *)(param_1 + 0x14),param_4,param_5,
                       (*(int *)(param_1 + 0xc) << 0x1c) >> 0x1f);
  _TrackbarInst_Message_16(param_1,0x610,1,uVar1);
  return;
}


