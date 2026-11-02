/* Module: vidcap30.exe
   Function: FUN_005535e0
   Address: 005535e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005535e0(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x81);
  *(undefined1 *)(iVar1 + 0x80) = 0;
  return;
}


