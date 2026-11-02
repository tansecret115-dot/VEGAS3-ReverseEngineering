/* Module: vegas30k.dll
   Function: FUN_011a0a60
   Address: 011a0a60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_011a0a60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,int param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  iVar2 = param_7;
  iVar4 = 0;
  piVar1 = *(int **)(*(int *)(param_1 + 0x2c) + 0x7f4);
  if (piVar1 == (int *)0x0) {
    local_4 = 0;
  }
  else {
    local_4 = *piVar1;
  }
  if (local_4 < 1) {
    return 0;
  }
  do {
    piVar1 = *(int **)(*(int *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x7f4) + 8) + iVar4 * 4);
    (**(code **)(*piVar1 + 0x20))(piVar1,&param_7);
    if ((param_7 == 3) && (iVar3 = (**(code **)(*piVar1 + 0x28))(piVar1), iVar3 == 0)) {
      FUN_011a10b0(*(undefined4 *)(param_1 + 0x34),4,iVar2,param_2,param_3,param_5);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < local_4);
  return 0;
}


