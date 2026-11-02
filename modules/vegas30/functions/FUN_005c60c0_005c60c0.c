/* Module: vegas30.exe
   Function: FUN_005c60c0
   Address: 005c60c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_005c60c0(int param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)(param_1 + 0x480);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = &DAT_006486bc;
  }
  _SfCreateDirectory_8(puVar1,0);
  return puVar1;
}


