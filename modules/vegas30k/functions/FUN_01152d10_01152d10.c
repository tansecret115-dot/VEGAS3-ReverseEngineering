/* Module: vegas30k.dll
   Function: FUN_01152d10
   Address: 01152d10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01152d10(undefined4 *param_1)

{
  LPRECT lprc;
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x58) & 3) != 0) {
    lprc = (LPRECT)(param_1 + 3);
    iVar1 = FUN_0114e800(param_1,param_1[0x10],lprc);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = FUN_0114e8b0(param_1,param_1[0xf],lprc);
    if (iVar1 == 0) {
      return;
    }
    InflateRect(lprc,1,1);
  }
  InvalidateRect((HWND)*param_1,(RECT *)(param_1 + 3),1);
  return;
}


