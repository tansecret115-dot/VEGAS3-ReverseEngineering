/* Module: vidcap30.exe
   Function: FUN_00446410
   Address: 00446410
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00446410(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_005bb838;
  if (param_1 != 0) {
    FUN_0042f1b0(DAT_005bb838,param_1 + 0x90);
  }
  *(undefined4 *)(iVar1 + 0x638) = 1;
  return;
}


