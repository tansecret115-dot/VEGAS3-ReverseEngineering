/* Module: vegas30k.dll
   Function: FUN_01053550
   Address: 01053550
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01053550(int param_1,int param_2,int param_3)

{
  MapWindowPoints((HWND)0x0,*(HWND *)(param_1 + 4),(LPPOINT)&param_2,1);
  ImageList_DragMove(param_2,param_3);
  return;
}


