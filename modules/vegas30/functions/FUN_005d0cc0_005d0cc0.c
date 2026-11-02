/* Module: vegas30.exe
   Function: FUN_005d0cc0
   Address: 005d0cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_005d0cc0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *local_4;
  
  if (DAT_0064ab78 != 0) {
    _fpreset();
  }
  piVar1 = (int *)0x0;
  local_4 = (int *)0x0;
  piVar3 = *(int **)(param_1 + 0x234);
  if (piVar3 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar3;
  }
  if ((param_2 < 0) || (iVar2 + -1 < param_2)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(piVar3[2] + param_2 * 4);
  }
  if (iVar2 != 0) {
    piVar3 = *(int **)(iVar2 + 4);
    if (piVar3 != (int *)0x0) {
      (**(code **)*piVar3)(piVar3,&DAT_0062f6f8,&local_4);
      return piVar3;
    }
    local_4 = *(int **)(iVar2 + 0x1c);
    if (local_4 != (int *)0x0) {
      piVar1 = local_4;
      (**(code **)(*local_4 + 4))();
    }
  }
  return piVar1;
}


