/* Module: vegas30k.dll
   Function: _FaderInst_DefScrollProc@20
   Address: 010adf60
   Source: Ghidra pseudocode (Stage 10 batch) */


void _FaderInst_DefScrollProc_20
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined4 uVar1;
  
                    /* 0xadf60  650  _FaderInst_DefScrollProc@20 */
  uVar1 = FUN_010ad530(param_1,param_2,*(undefined4 *)(param_1 + 0x1c),param_4,param_5);
  _FaderInst_Message_16(param_1,0x610,1,uVar1);
  return;
}


