/* Module: vegas30.exe
   Function: FUN_00489cc0
   Address: 00489cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00489cc0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x130);
  switch(*(undefined4 *)(param_1 + 0x94)) {
  case 5:
  case 7:
    FUN_00453070(DAT_00647630);
  case 1:
  case 3:
  case 4:
  case 6:
    FUN_004eb2b0(uVar1);
  default:
    return;
  }
}


