/* Module: mp3rw.dll
   Function: FUN_00453460
   Address: 00453460
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00453460(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x81);
  *(undefined1 *)(iVar1 + 0x80) = 0;
  return;
}


