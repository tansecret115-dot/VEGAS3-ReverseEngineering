/* Module: vidcap30.exe
   Function: FUN_0057fc80
   Address: 0057fc80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0057fc80(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0xd4);
  if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0xd0) != 0)) {
    if (param_1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = param_1 + 0xc;
    }
    uVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,iVar3,0,param_2,0,*(int *)(param_1 + 0xd0),2);
    return uVar2;
  }
  return 0x80004005;
}


