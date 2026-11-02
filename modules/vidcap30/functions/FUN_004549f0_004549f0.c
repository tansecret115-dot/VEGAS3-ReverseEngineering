/* Module: vidcap30.exe
   Function: FUN_004549f0
   Address: 004549f0
   Source: Ghidra pseudocode (Stage 10 batch) */


HIMAGELIST FUN_004549f0(int param_1,int param_2,HIMAGELIST param_3)

{
  HIMAGELIST himl;
  HIMAGELIST p_Var1;
  
  himl = param_3;
  p_Var1 = (HIMAGELIST)0x0;
  if (param_2 == 0) {
    p_Var1 = *(HIMAGELIST *)(param_1 + 0x44);
    *(HIMAGELIST *)(param_1 + 0x44) = param_3;
    if (param_3 == (HIMAGELIST)0x0) {
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    else {
      param_2 = 0;
      param_3 = (HIMAGELIST)0x0;
      ImageList_GetIconSize(himl,&param_2,(int *)&param_3);
      *(int *)(param_1 + 0x50) = param_2;
      *(HIMAGELIST *)(param_1 + 0x54) = param_3;
    }
  }
  else if (param_2 == 1) {
    p_Var1 = *(HIMAGELIST *)(param_1 + 0x48);
    *(HIMAGELIST *)(param_1 + 0x48) = param_3;
  }
  else if (param_2 == 2) {
    p_Var1 = *(HIMAGELIST *)(param_1 + 0x4c);
    *(HIMAGELIST *)(param_1 + 0x4c) = param_3;
  }
  if (himl != p_Var1) {
    FUN_004544d0(param_1,0);
    if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
      InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)(param_1 + 0x14),1);
    }
  }
  return p_Var1;
}


