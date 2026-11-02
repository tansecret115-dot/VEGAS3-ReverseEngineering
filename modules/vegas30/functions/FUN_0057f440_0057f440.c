/* Module: vegas30.exe
   Function: FUN_0057f440
   Address: 0057f440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0057f440(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(DAT_0065a054 + 0x44) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(DAT_0065a054 + 0x44) + 8);
  }
  return uVar1;
}


