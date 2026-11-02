/* Module: vegas30.exe
   Function: FUN_0050c0d0
   Address: 0050c0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0050c0d0(int param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x98) == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x90);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0050af10(*(int *)(param_1 + 0x98));
    uVar2 = *(undefined4 *)(param_1 + 0x90);
  }
  FUN_0053ec50(uVar2,uVar1);
  FUN_0053eb20(*(undefined4 *)(param_1 + 0x90));
  InvalidateRect(*(HWND *)(*(int *)(param_1 + 0x90) + 4),(RECT *)0x0,0);
  return;
}


