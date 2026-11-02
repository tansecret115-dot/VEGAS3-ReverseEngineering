/* Module: erv33260.dll
   Function: FUN_67073700
   Address: 67073700
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_67073700(void *this,int param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  void *local_8;
  
  local_8 = this;
  iVar3 = FUN_670728e0((void *)((int)this + -100),param_1,(int *)&local_8,&param_1);
  if (iVar3 != 0) {
    return iVar3;
  }
  iVar3 = *param_2;
  if (((iVar3 == 0) || ((iVar3 == 1 && (param_2[1] != 0)))) && (iVar1 = param_2[2], iVar1 != 0)) {
    if (iVar1 == 3) {
      bVar2 = true;
    }
    else if (((param_2[3] < 0) || (10000 < param_2[3])) ||
            (((iVar1 != 2 && ((iVar1 != 1 || (param_2[4] == 0)))) &&
             ((iVar1 != 0 || (((param_2[4] == 0 || (param_2[5] == 0)) || (param_2[6] == 0)))))))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (((*(int *)((int)this + 0x40) == 1) && (*(int *)((int)this + 0x44) == 1)) &&
         ((iVar3 != 1 || (param_2[1] != 1)))) {
        *(undefined1 *)((int)this + 0x1c8) = 1;
      }
      piVar4 = param_2;
      piVar5 = (int *)((int)this + 0x40);
      for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar5 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      }
      if (*param_2 == 1) {
        *(int *)((int)this + 0x164) = param_2[1];
      }
      else {
        *(undefined4 *)((int)this + 0x164) = 0;
      }
      return (-(uint)(param_2[2] != 1) & 0xfffffffd) + 3;
    }
  }
  return 10;
}


