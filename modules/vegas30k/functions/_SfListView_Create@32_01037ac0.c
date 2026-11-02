/* Module: vegas30k.dll
   Function: _SfListView_Create@32
   Address: 01037ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


HWND _SfListView_Create_32
               (HWND param_1,int *param_2,HMENU param_3,tSFLIST *param_4,_sfviewfield *param_5,
               _spreadcol *param_6,char *param_7,uint param_8)

{
  int Y;
  int X;
  HINSTANCE hInstance;
  HWND pHVar1;
  LPVOID lpParam;
  
                    /* 0x37ac0  1056  _SfListView_Create@32 */
  lpParam = (LPVOID)0x0;
  Y = param_2[1];
  X = *param_2;
  hInstance = (HINSTANCE)GetWindowLongA(param_1,-6);
  pHVar1 = CreateWindowExA(0x204,"SfKrn_Spread_Class","",0x50a381a1,X,Y,param_2[2] - X,
                           param_2[3] - Y,param_1,param_3,hInstance,lpParam);
  if (pHVar1 != (HWND)0x0) {
    SfListView_SetupSpread(pHVar1,param_4,param_5,param_6,param_7,param_8);
  }
  return pHVar1;
}


