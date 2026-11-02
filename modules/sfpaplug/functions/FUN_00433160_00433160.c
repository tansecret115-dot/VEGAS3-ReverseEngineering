/* Module: sfpaplug.dll
   Function: FUN_00433160
   Address: 00433160
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00433160(HWND param_1,int param_2)

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


