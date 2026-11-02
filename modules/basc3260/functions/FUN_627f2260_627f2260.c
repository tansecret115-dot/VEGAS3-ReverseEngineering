/* Module: basc3260.dll
   Function: FUN_627f2260
   Address: 627f2260
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_627f2260(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  char local_404 [1024];
  
  if ((*(int *)(param_1 + 0x6c) == 0) && (*(int *)(param_1 + 0x68) != 0)) {
    piVar1 = (int *)FUN_627f2b10(param_1);
    if (piVar1 == (int *)0x0) {
      return 0x80040009;
    }
    uVar2 = (**(code **)(**(int **)(param_1 + 0x68) + 0x1c))(*(int **)(param_1 + 0x68));
    sprintf(local_404,s_Basic_realm_____512s__627f6224,uVar2);
    FUN_627f1e90(piVar1,s_WWW_Authenticate_627f60bc,local_404);
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  (**(code **)(**(int **)(param_1 + 0x54) + 0xc))
            (*(int **)(param_1 + 0x54),0,*(undefined4 *)(param_1 + 0x58));
  piVar1 = *(int **)(param_1 + 0x58);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x70);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x54);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return 0;
}


