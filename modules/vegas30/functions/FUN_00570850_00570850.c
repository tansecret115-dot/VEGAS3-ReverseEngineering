/* Module: vegas30.exe
   Function: FUN_00570850
   Address: 00570850
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00570850(HDC param_1,int *param_2,int param_3)

{
  int iVar1;
  HIMAGELIST p_Var2;
  
  if ((param_3 != 0) && (*(int *)(param_3 + 8) != 1)) {
    if (*(int *)(param_3 + 8) == 4) {
      iVar1 = FUN_00568df0(param_3);
      p_Var2 = DAT_0064b450;
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_3 + 0x224) + -1;
      }
      else {
        iVar1 = 0x1a;
      }
    }
    else {
      iVar1 = *(int *)(param_3 + 0x224);
      p_Var2 = DAT_0064b460;
    }
    ImageList_Draw(p_Var2,iVar1,param_1,*param_2,param_2[1],0);
  }
  return;
}


