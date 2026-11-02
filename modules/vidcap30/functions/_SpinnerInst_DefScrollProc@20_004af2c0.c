/* Module: vidcap30.exe
   Function: _SpinnerInst_DefScrollProc@20
   Address: 004af2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SpinnerInst_DefScrollProc_20
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined4 uVar1;
  
                    /* 0xaf2c0  706  _SpinnerInst_DefScrollProc@20 */
  uVar1 = FUN_004aec00(param_2,*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x44),
                       *(undefined4 *)(param_1 + 0x48),param_4,param_5,
                       *(undefined4 *)(param_1 + 0x1c));
  _SpinnerInst_Message_16(param_1,0x610,1,uVar1);
  return;
}


