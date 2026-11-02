/* Module: sfpaplug.dll
   Function: FUN_0040bb10
   Address: 0040bb10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040bb10(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int unaff_retaddr;
  
  piVar1 = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  if (piVar1 != (int *)0x0) {
    param_1 = piVar1;
    iVar2 = FUN_0042a470(*(int **)(unaff_retaddr + 0x218),-1,(int *)&param_1,1);
    return iVar2;
  }
  return -0x7ff8fff2;
}


