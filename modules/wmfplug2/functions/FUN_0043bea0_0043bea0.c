/* Module: wmfplug2.dll
   Function: FUN_0043bea0
   Address: 0043bea0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043bea0(HWND param_1,int param_2)

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


