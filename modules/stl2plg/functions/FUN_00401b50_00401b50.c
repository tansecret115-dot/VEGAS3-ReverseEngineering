/* Module: stl2plg.dll
   Function: FUN_00401b50
   Address: 00401b50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00401b50(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int unaff_retaddr;
  
  piVar1 = param_1;
  iVar2 = (**(code **)(*param_1 + 0x3c))(param_1,&param_1);
  if (-1 < iVar2) {
    if (unaff_retaddr != 0) {
      return -0x7ff8ffa9;
    }
    if (piVar1[0xea] == 0) {
      iVar2 = FUN_004018b0(piVar1);
    }
    if (-1 < iVar2) {
      (**(code **)(**(int **)(piVar1[0xea] + 400) + 0x18))
                (*(int **)(piVar1[0xea] + 400),param_1,param_2,0);
    }
  }
  return iVar2;
}


