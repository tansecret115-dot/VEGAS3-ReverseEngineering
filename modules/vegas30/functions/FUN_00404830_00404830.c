/* Module: vegas30.exe
   Function: FUN_00404830
   Address: 00404830
   Source: Ghidra pseudocode (Stage 10 batch) */


BOOL FUN_00404830(HWND param_1,HMENU param_2,int *param_3,uint param_4)

{
  DWORD DVar1;
  int y;
  int x;
  BOOL BVar2;
  
  BVar2 = 0;
  FUN_0040cc40(param_2);
  if (param_2 != (HMENU)0x0) {
    if (param_3 == (int *)0x0) {
      DVar1 = GetMessagePos();
      x = (int)(short)DVar1;
      y = (int)(short)(DVar1 >> 0x10);
    }
    else {
      x = *param_3;
      y = param_3[1];
    }
    BVar2 = TrackPopupMenu(param_2,param_4 | 0x100,x,y,0,param_1,(RECT *)0x0);
    DestroyMenu(param_2);
  }
  return BVar2;
}


