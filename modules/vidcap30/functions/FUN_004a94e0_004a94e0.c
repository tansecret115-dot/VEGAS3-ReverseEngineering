/* Module: vidcap30.exe
   Function: FUN_004a94e0
   Address: 004a94e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004a94e0(HWND param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x24);
  if (iVar1 != -1) {
    HideCaret(param_1);
    DestroyCaret();
    *(undefined4 *)(param_2 + 0x24) = 0xffffffff;
  }
  return iVar1;
}


