/* Module: rmme3260.dll
   Function: FUN_66243960
   Address: 66243960
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66243960(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)((int)param_1 + 9) = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe;
  (**(code **)(*param_1 + 4))(param_1);
  FUN_662439b0(param_1);
  if (((*(byte *)(param_1 + 2) & 2) == 0) &&
     (piVar1 = *(int **)((int)param_1 + 0xd), piVar1 != (int *)0x0)) {
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 1;
    uVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_1,100);
    *(undefined4 *)((int)param_1 + 9) = uVar2;
  }
  (**(code **)(*param_1 + 8))(param_1);
  return 0;
}


