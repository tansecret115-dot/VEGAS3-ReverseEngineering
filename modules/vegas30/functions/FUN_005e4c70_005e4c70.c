/* Module: vegas30.exe
   Function: FUN_005e4c70
   Address: 005e4c70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005e4c70(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_1;
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 == (int *)0x0) {
    return -0x7fff0001;
  }
  param_1 = 0x30;
  iVar3 = (**(code **)(*piVar1 + 0x20))(piVar1,iVar2 + 0x30,&param_1);
  if ((-1 < iVar3) && (*(int *)(iVar2 + 0x10) != 0)) {
    iVar4 = FUN_005e5450();
    if (iVar4 != 0) {
      *(undefined4 *)(iVar2 + 0x24) = 0;
    }
  }
  return iVar3;
}


