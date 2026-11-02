/* Module: vegas30.exe
   Function: FUN_004e5010
   Address: 004e5010
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004e5010(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(DAT_0064762c + 0x70) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(DAT_0064762c + 0x70) + 0xcb8);
  }
  return uVar1;
}


