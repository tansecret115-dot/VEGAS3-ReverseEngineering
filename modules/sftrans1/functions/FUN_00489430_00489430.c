/* Module: sftrans1.dll
   Function: FUN_00489430
   Address: 00489430
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00489430(int param_1)

{
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(int *)(param_1 + 0x114) != 0) {
    FUN_004874c0(0,0xffffffff);
  }
  if (((*(int *)(param_1 + 0xdc) == 5) && (*(int *)(param_1 + 0xe0) == 0)) ||
     (*(int *)(param_1 + 0xc4) == 3)) {
    InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)0x0,0);
  }
  return;
}


