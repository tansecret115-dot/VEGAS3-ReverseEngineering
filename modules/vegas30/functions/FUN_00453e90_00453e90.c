/* Module: vegas30.exe
   Function: FUN_00453e90
   Address: 00453e90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00453e90(int param_1)

{
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffff3fff;
  FUN_00453a50(param_1,*(undefined4 *)(param_1 + 0xb70),*(undefined4 *)(param_1 + 0xb74),0,0);
  if (DAT_00647794 == 1) {
    FUN_00454140(param_1,*(undefined4 *)(param_1 + 0xb60),*(undefined4 *)(param_1 + 0xb64),
                 *(undefined4 *)(param_1 + 0xb50),*(undefined4 *)(param_1 + 0xb54));
  }
  return;
}


