/* Module: rmme3260.dll
   Function: FUN_66234a20
   Address: 66234a20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66234a20(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 8) != 0) &&
     (piVar1 = *(int **)(*(int *)(param_1 + 8) + 0x1c), piVar1 != (int *)0x0)) {
    uVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,param_2);
    return uVar2;
  }
  return 0x80004001;
}


