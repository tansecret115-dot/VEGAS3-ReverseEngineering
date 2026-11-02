/* Module: encn3260.dll
   Function: FUN_664c3f50
   Address: 664c3f50
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_664c3f50(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_c;
  int local_8;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar2 = (*(code *)**(undefined4 **)this)(param_1);
    uVar2 = uVar2 % *(uint *)((int)this + 8);
    piVar5 = *(int **)(*(int *)((int)this + 4) + uVar2 * 4);
    piVar4 = (int *)(*(int *)((int)this + 4) + uVar2 * 4);
    if (piVar5 != (int *)0x0) {
      do {
        iVar3 = (**(code **)(*(int *)this + 4))(piVar5[2],param_1);
        if (iVar3 == 0) {
          param_1 = piVar5;
          FUN_664c4010(this,(int *)&param_1,&local_c,&local_8);
          *piVar4 = *piVar5;
          FUN_664c3dc0(this,piVar5);
          return param_1;
        }
        piVar1 = (int *)*piVar5;
        piVar4 = piVar5;
        piVar5 = piVar1;
      } while (piVar1 != (int *)0x0);
      return (int *)0x0;
    }
  }
  return (int *)0x0;
}


