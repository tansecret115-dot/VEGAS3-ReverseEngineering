/* Module: vidcap30.exe
   Function: FUN_00498870
   Address: 00498870
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00498870(int param_1,int param_2,int param_3)

{
  MapWindowPoints((HWND)0x0,*(HWND *)(param_1 + 4),(LPPOINT)&param_2,1);
  ImageList_DragMove(param_2,param_3);
  return;
}


