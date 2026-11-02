/* Module: vegas30k.dll
   Function: FUN_01039510
   Address: 01039510
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01039510(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = _SfGetString2_8(*param_2,param_2[3]);
  if (iVar1 == 0) {
    iVar1 = _SfGetString_8(*param_2,param_2[3]);
  }
  SfSetDlgItemText(param_1,0x3ec,iVar1);
  return;
}


