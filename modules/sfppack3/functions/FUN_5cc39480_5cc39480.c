/* Module: sfppack3.dll
   Function: FUN_5cc39480
   Address: 5cc39480
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cc39480(int *param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_ESI;
  undefined4 local_10 [4];
  
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) << 2;
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1);
  if (-1 < iVar1) {
    *(int *)param_2 = param_2;
    *(undefined4 **)(param_2 + 4) = local_10;
    *(undefined4 *)(param_2 + 8) = unaff_ESI;
    *(undefined4 *)(param_2 + 0xc) = local_10[0];
    if ((int)local_10 < 0x200) {
      iVar1 = -0x7fffbffb;
    }
  }
  return iVar1;
}


