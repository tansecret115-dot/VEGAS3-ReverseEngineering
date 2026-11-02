/* Module: sfcdi.dll
   Function: FUN_5bf0bd10
   Address: 5bf0bd10
   Source: Ghidra pseudocode (Stage 10 batch) */


LPVOID FUN_5bf0bd10(int param_1,uint param_2,undefined4 *param_3)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  
  if ((param_2 != 0) && ((param_2 & param_2 - 1) == 0)) {
    param_2 = param_2 - 1;
  }
  if (param_2 < 0xfff) {
    param_2 = 0xfff;
  }
  hMem = GlobalAlloc(0x42,param_1 + param_2);
  pvVar1 = GlobalLock(hMem);
  *param_3 = pvVar1;
  if (param_2 != 0) {
    pvVar1 = (LPVOID)((int)pvVar1 + param_2 & ~param_2);
  }
  return pvVar1;
}


