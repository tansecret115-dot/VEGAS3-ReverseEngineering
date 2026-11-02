/* Module: sfnetmedia.dll
   Function: FUN_0040b100
   Address: 0040b100
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040b100(int param_1)

{
  int iVar1;
  LONG LVar2;
  
  if ((*(byte *)(param_1 + 0xb4) & 0x10) == 0) {
    DestroyWindow(*(HWND *)(param_1 + 4));
  }
  else {
    GetWindowLongA(*(HWND *)(param_1 + 4),-4);
    LVar2 = SetWindowLongA(*(HWND *)(param_1 + 4),-4,*(LONG *)(param_1 + 0x1c));
    if (LVar2 != 0) {
      *(code **)(param_1 + 0x1c) = DefWindowProcA_exref;
      iVar1 = *(int *)(param_1 + 4);
      *(undefined4 *)(param_1 + 4) = 0;
      if (iVar1 != 0) {
        *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xffffffef;
        return;
      }
    }
  }
  return;
}


