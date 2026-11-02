/* Module: vidcap30.exe
   Function: FUN_00404270
   Address: 00404270
   Source: Ghidra pseudocode (Stage 10 batch) */


BOOL FUN_00404270(HWND param_1,HMENU param_2,int *param_3,uint param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  int y;
  int x;
  
  BVar1 = 0;
  if (param_2 != (HMENU)0x0) {
    if (param_3 == (int *)0x0) {
      DVar2 = GetMessagePos();
      x = (int)(short)DVar2;
      y = (int)(short)(DVar2 >> 0x10);
    }
    else {
      x = *param_3;
      y = param_3[1];
    }
    BVar1 = TrackPopupMenu(param_2,param_4 | 0x180,x,y,0,param_1,(RECT *)0x0);
    DestroyMenu(param_2);
  }
  return BVar1;
}


