/* Module: vidcap30.exe
   Function: _SfCheckList_Create@24
   Address: 004ac1f0
   Source: Ghidra pseudocode (Stage 10 batch) */


HWND _SfCheckList_Create_24
               (HWND param_1,int *param_2,HMENU param_3,void *param_4,_sfviewfield *param_5,
               uint param_6)

{
  int Y;
  int X;
  HINSTANCE hInstance;
  HWND pHVar1;
  LPVOID lpParam;
  
                    /* 0xac1f0  262  _SfCheckList_Create@24 */
  lpParam = (LPVOID)0x0;
  Y = param_2[1];
  X = *param_2;
  hInstance = (HINSTANCE)GetWindowLongA(param_1,-6);
  pHVar1 = CreateWindowExA(0x204,"SfKrn_Spread_Class","",0x50a380a1,X,Y,param_2[2] - X,
                           param_2[3] - Y,param_1,param_3,hInstance,lpParam);
  if (pHVar1 != (HWND)0x0) {
    SfCheckList_SetupSpread(pHVar1,param_4,param_5,param_6);
  }
  return pHVar1;
}


