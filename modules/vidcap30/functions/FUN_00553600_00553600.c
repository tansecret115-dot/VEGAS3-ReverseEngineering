/* Module: vidcap30.exe
   Function: FUN_00553600
   Address: 00553600
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00553600(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x112);
  *(undefined1 *)(iVar1 + 0x111) = 0;
  return;
}


