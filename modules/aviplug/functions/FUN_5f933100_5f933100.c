/* Module: aviplug.dll
   Function: FUN_5f933100
   Address: 5f933100
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f933100(int param_1,wchar_t *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x228) != 0) {
    uVar1 = 0x80070961;
  }
  wcsncpy((wchar_t *)(param_1 + 0x14),param_2,0x104);
  *(undefined4 *)(param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 0x250) = 1;
  return uVar1;
}


