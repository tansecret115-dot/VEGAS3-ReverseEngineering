/* Module: vidcap30.exe
   Function: FUN_005450e0
   Address: 005450e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005450e0(undefined4 *param_1)

{
  LPRECT lprc;
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x58) & 3) != 0) {
    lprc = (LPRECT)(param_1 + 3);
    iVar1 = FUN_00540bd0(param_1,param_1[0x10],lprc);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = FUN_00540c80(param_1,param_1[0xf],lprc);
    if (iVar1 == 0) {
      return;
    }
    InflateRect(lprc,1,1);
  }
  InvalidateRect((HWND)*param_1,(RECT *)(param_1 + 3),1);
  return;
}


