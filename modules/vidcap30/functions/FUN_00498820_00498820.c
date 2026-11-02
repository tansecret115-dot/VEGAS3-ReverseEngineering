/* Module: vidcap30.exe
   Function: FUN_00498820
   Address: 00498820
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00498820(int param_1,int param_2,int param_3)

{
  HWND hWndTo;
  
  hWndTo = *(HWND *)(param_1 + 4);
  MapWindowPoints((HWND)0x0,hWndTo,(LPPOINT)&param_2,1);
  ImageList_DragEnter(hWndTo,param_2,param_3);
  return;
}


