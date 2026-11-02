/* Module: vidcap30.exe
   Function: FUN_00474e90
   Address: 00474e90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00474e90(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = _SfGetString2_8(*param_2,param_2[3]);
  if (iVar1 == 0) {
    iVar1 = _SfGetString_8(*param_2,param_2[3]);
  }
  SfSetDlgItemText(param_1,0x3ec,iVar1);
  return;
}


