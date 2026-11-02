/* Module: vegas30k.dll
   Function: _SfViewField_CreateSpread@28
   Address: 010374a0
   Source: Ghidra pseudocode (Stage 10 batch) */


HWND _SfViewField_CreateSpread_28
               (HWND param_1,int *param_2,HMENU param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7)

{
  int Y;
  int X;
  HINSTANCE hInstance;
  HWND pHVar1;
  LPVOID lpParam;
  
                    /* 0x374a0  1283  _SfViewField_CreateSpread@28 */
  lpParam = (LPVOID)0x0;
  Y = param_2[1];
  X = *param_2;
  hInstance = (HINSTANCE)GetWindowLongA(param_1,-6);
  pHVar1 = CreateWindowExA(0x204,"SfKrn_Spread_Class","",0x50a3f014,X,Y,param_2[2] - X,
                           param_2[3] - Y,param_1,param_3,hInstance,lpParam);
  if (pHVar1 != (HWND)0x0) {
    _SfViewField_SetupSpread_20(pHVar1,param_4,param_5,param_6,param_7);
  }
  return pHVar1;
}


