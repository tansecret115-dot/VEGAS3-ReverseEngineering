/* Module: vegas30.exe
   Function: FUN_0058a5c0
   Address: 0058a5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0058a5c0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((((param_1[0x43] != 0) && (iVar2 = *(int *)(param_1[0x43] + 0x130), iVar2 != 0)) &&
      (iVar2 = **(int **)(iVar2 + 8), iVar2 != 0)) &&
     (piVar1 = *(int **)(iVar2 + 0x60), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(iVar2 + 0x60) = 0;
  }
  FUN_005b83b0(*(undefined4 *)(*param_1 + 8),1);
  if (param_2 == 0) {
    iVar2 = FUN_005ec620();
    if (iVar2 == 0) goto LAB_0058a649;
    iVar2 = param_1[0x43];
  }
  else {
    iVar2 = param_1[0x43];
  }
  FUN_005ed410(iVar2,1,0);
  param_1[0x43] = 0;
LAB_0058a649:
  FUN_005b84d0(*(undefined4 *)(*param_1 + 8),1);
  DeleteFileA((LPCSTR)(param_1 + 2));
  return 0;
}


