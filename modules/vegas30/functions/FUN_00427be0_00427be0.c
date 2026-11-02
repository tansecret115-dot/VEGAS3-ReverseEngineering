/* Module: vegas30.exe
   Function: FUN_00427be0
   Address: 00427be0
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 FUN_00427be0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  undefined4 local_18 [6];
  
  if (((DAT_0064762c != 0) && (iVar1 = *(int *)(DAT_0064762c + 0x80), iVar1 != 0)) &&
     (*(int **)(iVar1 + 0x94) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar1 + 0x94) + 0x68))(local_18);
    if ((double)CONCAT44(local_18[0],unaff_ESI) != (double)CONCAT44(param_1,unaff_retaddr)) {
      (**(code **)(**(int **)(iVar1 + 0x94) + 0x58))(unaff_retaddr,param_1);
      FUN_00427a70(2,1);
    }
    return (float10)(double)CONCAT44(local_18[0],unaff_ESI);
  }
  return (float10)(double)CONCAT44(param_2,param_1);
}


