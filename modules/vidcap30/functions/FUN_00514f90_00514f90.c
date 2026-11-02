/* Module: vidcap30.exe
   Function: FUN_00514f90
   Address: 00514f90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00514f90(int param_1,HDC param_2,int *param_3)

{
  ImageList_Draw(*(HIMAGELIST *)(param_1 + 0xfc),*(int *)(param_1 + 0x154),param_2,*param_3,
                 param_3[1],1);
  return;
}


