/* Module: vegas30k.dll
   Function: FUN_010609a0
   Address: 010609a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010609a0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_01060b00(1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  iVar1 = FUN_0105fae0();
  if (-1 < iVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar1 = FUN_0105fcb0();
    }
    FUN_01060b00(0);
  }
  return iVar1;
}


