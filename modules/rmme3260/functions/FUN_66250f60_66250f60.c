/* Module: rmme3260.dll
   Function: FUN_66250f60
   Address: 66250f60
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_66250f60(void *this,undefined4 param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = (*(code *)**(undefined4 **)this)(param_1);
  uVar1 = uVar1 % *(uint *)((int)this + 8);
  *param_2 = uVar1;
  if ((*(int *)((int)this + 4) != 0) &&
     (piVar3 = *(int **)(*(int *)((int)this + 4) + uVar1 * 4), piVar3 != (int *)0x0)) {
    do {
      iVar2 = (**(code **)(*(int *)this + 4))(piVar3[2],param_1);
      if (iVar2 == 0) {
        return piVar3;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)0x0);
    return (int *)0x0;
  }
  return (int *)0x0;
}


