/* Module: vegas30.exe
   Function: FUN_00450520
   Address: 00450520
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00450520(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  HIMAGELIST p_Var3;
  
  *(int *)(param_1 + 0x2ac) = *(int *)(*(int *)(param_1 + 0x274) + 8) / 2;
  uVar1 = FUN_0044f5d0(param_1 + 0x274,param_1 + 0x2a8,1);
  *(undefined4 *)(param_1 + 0x2b0) = uVar1;
  uVar1 = FUN_0044f5d0(param_1 + 0x274,param_1 + 0x2a8,0);
  *(undefined4 *)(param_1 + 0x2b4) = uVar1;
  if (*(HIMAGELIST *)(param_1 + 0x2b0) != (HIMAGELIST)0x0) {
    iVar2 = ImageList_GetImageCount(*(HIMAGELIST *)(param_1 + 0x2b0));
    *(int *)(param_1 + 0x2a4) = iVar2;
  }
  *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(*(int *)(param_1 + 0x284) + 8);
  p_Var3 = (HIMAGELIST)FUN_0044f5d0(param_1 + 0x284,param_1 + 0x2c0,0);
  *(HIMAGELIST *)(param_1 + 0x2c8) = p_Var3;
  if (p_Var3 != (HIMAGELIST)0x0) {
    iVar2 = ImageList_GetImageCount(p_Var3);
    *(int *)(param_1 + 700) = iVar2;
  }
  *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(*(int *)(param_1 + 0x294) + 8);
  p_Var3 = (HIMAGELIST)FUN_0044f5d0(param_1 + 0x294,param_1 + 0x2d0,0);
  *(HIMAGELIST *)(param_1 + 0x2d8) = p_Var3;
  if (p_Var3 != (HIMAGELIST)0x0) {
    iVar2 = ImageList_GetImageCount(p_Var3);
    *(int *)(param_1 + 0x2cc) = iVar2;
  }
  return;
}


