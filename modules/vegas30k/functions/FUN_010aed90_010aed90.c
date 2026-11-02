/* Module: vegas30k.dll
   Function: FUN_010aed90
   Address: 010aed90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010aed90(int param_1,HDC param_2,int *param_3)

{
  ImageList_Draw(*(HIMAGELIST *)(param_1 + 0xfc),*(int *)(param_1 + 0x154),param_2,*param_3,
                 param_3[1],1);
  return;
}


