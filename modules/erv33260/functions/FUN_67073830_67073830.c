/* Module: erv33260.dll
   Function: FUN_67073830
   Address: 67073830
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_67073830(void *this,int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  void *local_8;
  
  local_8 = this;
  iVar2 = FUN_670728e0((void *)((int)this + -100),param_1,(int *)&local_8,&param_1);
  if (iVar2 == 0) {
    iVar2 = *param_2;
    if (iVar2 == 3) {
      bVar1 = true;
    }
    else if (((param_2[1] < 0) || (10000 < param_2[1])) ||
            (((iVar2 != 2 && ((iVar2 != 1 || (param_2[2] == 0)))) &&
             ((iVar2 != 0 || (((param_2[2] == 0 || (param_2[3] == 0)) || (param_2[4] == 0)))))))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return 10;
    }
    if (iVar2 == 3) {
      return 3;
    }
    if (iVar2 == 0) {
      return 3;
    }
    if (iVar2 == 1) {
      return 3;
    }
    piVar3 = (int *)((int)this + 0x2c);
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *param_2;
      param_2 = param_2 + 1;
      piVar3 = piVar3 + 1;
    }
    iVar2 = 0;
  }
  return iVar2;
}


