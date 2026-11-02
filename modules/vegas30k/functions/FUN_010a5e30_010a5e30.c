/* Module: vegas30k.dll
   Function: FUN_010a5e30
   Address: 010a5e30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010a5e30(undefined4 *param_1,uint param_2,int param_3)

{
  bool bVar1;
  
  if (param_2 < 2) {
    bVar1 = param_2 == 2;
    param_2 = 2;
    if (bVar1) {
LAB_010a5e59:
      param_1[0x26] = param_2;
      if (param_3 != 0) {
        InvalidateRect((HWND)*param_1,(RECT *)0x0,1);
        UpdateWindow((HWND)*param_1);
      }
      return param_1[0x26];
    }
  }
  else if (param_2 <= (uint)param_1[0x27]) goto LAB_010a5e59;
  return 0;
}


