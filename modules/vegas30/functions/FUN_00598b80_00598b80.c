/* Module: vegas30.exe
   Function: FUN_00598b80
   Address: 00598b80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00598b80(int param_1)

{
  HIMAGELIST p_Var1;
  HICON hicon;
  
  p_Var1 = ImageList_Create(0x10,0x10,1,1,1);
  *(HIMAGELIST *)(param_1 + 8) = p_Var1;
  hicon = (HICON)_SfLoadIcon_8(DAT_00647204,0xdd);
  ImageList_ReplaceIcon(*(HIMAGELIST *)(param_1 + 8),-1,hicon);
  return;
}


