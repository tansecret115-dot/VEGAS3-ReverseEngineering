/* Module: rmbe3260.dll
   Function: FUN_6602a870
   Address: 6602a870
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6602a870(void *this,undefined4 param_1,int *param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  
  piVar1 = *(int **)((int)this + 0x14);
  bVar2 = 0;
  if (piVar1 == (int *)0x0) {
    bVar2 = 1;
  }
  else {
    iVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,param_1,param_2,&param_2);
    if (-1 < iVar3) {
      bVar2 = 1;
      (**(code **)(*param_2 + 8))(param_2);
    }
  }
  return (-(uint)bVar2 & 0x7ffbfdae) + 0x80040252;
}


