/* Module: erv23260.dll
   Function: FUN_637f5040
   Address: 637f5040
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall
FUN_637f5040(void *this,int *param_1,int *param_2,int param_3,int param_4,int *param_5)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  
  bVar2 = false;
  piVar1 = (int *)((int)this + 0x2f4);
  piVar3 = (int *)*piVar1;
  if ((piVar3 == (int *)0x0) ||
     ((((piVar3 == param_1 || (piVar4 = piVar3, piVar3 == param_2)) &&
       ((piVar4 = (int *)piVar3[0x24], piVar4 == param_1 || (piVar4 == param_2)))) &&
      ((piVar4 = (int *)piVar3[0x23], piVar4 == param_1 || (piVar4 == param_2)))))) {
    bVar2 = true;
    piVar4 = (int *)0x0;
  }
  if (bVar2) {
    piVar3 = FUN_637f3230((int *)0x0,param_3,param_4,*(undefined4 *)((int)this + 700),param_5);
    if (*param_5 != 0) {
      return piVar4;
    }
    FUN_637f7da0(piVar1,(int)piVar3);
    piVar4 = piVar3;
  }
  else {
    piVar3 = FUN_637f3230(piVar4,param_3,param_4,*(undefined4 *)((int)this + 700),param_5);
    if (*param_5 != 0) {
      return piVar4;
    }
    if (piVar4 != piVar3) {
      FUN_637f97a0((int)piVar4,(int)piVar3);
      FUN_637f1080(piVar4);
      piVar4 = piVar3;
    }
  }
  piVar4[0x20] = 1;
  if (param_2 != (int *)0x0) {
    piVar4[0x1f] = param_2[0x1f];
  }
  *piVar1 = piVar4[0x24];
  return piVar4;
}


