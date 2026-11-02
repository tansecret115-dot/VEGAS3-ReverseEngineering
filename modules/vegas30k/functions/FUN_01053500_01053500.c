/* Module: vegas30k.dll
   Function: FUN_01053500
   Address: 01053500
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01053500(int param_1,int param_2,int param_3)

{
  HWND hWndTo;
  
  hWndTo = *(HWND *)(param_1 + 4);
  MapWindowPoints((HWND)0x0,hWndTo,(LPPOINT)&param_2,1);
  ImageList_DragEnter(hWndTo,param_2,param_3);
  return;
}


