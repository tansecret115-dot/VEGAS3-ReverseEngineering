/* Module: rmto3260.dll
   Function: FUN_662fa3b0
   Address: 662fa3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_662fa3b0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 0x7c);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x7c);
  iVar2 = FUN_662f2c20(*(uint *)(param_1 + 0x7c));
  *piVar1 = iVar2;
  iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x20))(*(undefined4 *)(param_1 + 0x80),0);
  if (iVar2 == 0) {
    iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x30))(piVar1,4);
    if (iVar3 != 4) {
      iVar2 = (**(code **)(**(int **)(param_1 + 4) + 4))();
    }
  }
  *piVar1 = 0;
  return iVar2;
}


