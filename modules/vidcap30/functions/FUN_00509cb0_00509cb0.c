/* Module: vidcap30.exe
   Function: FUN_00509cb0
   Address: 00509cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00509cb0(HWND param_1,undefined4 param_2)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,4);
  if (*(HGDIOBJ *)(LVar1 + 4) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(LVar1 + 4));
    *(undefined4 *)(LVar1 + 4) = 0;
  }
  *(undefined4 *)(LVar1 + 4) = param_2;
  InvalidateRect(param_1,(RECT *)0x0,1);
  return *(int *)(LVar1 + 4) != 0;
}


