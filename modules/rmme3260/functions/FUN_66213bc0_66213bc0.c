/* Module: rmme3260.dll
   Function: FUN_66213bc0
   Address: 66213bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66213bc0(void *this,int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  
  if (*(int *)((int)this + 0x330) == 3) {
    if (param_1 < 0) {
      *(undefined4 *)((int)this + 0x334) = 8;
      FUN_66216ba0(this);
      return 0;
    }
    piVar1 = *(int **)((int)this + 0x346);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)this + 0x346) = 0;
    }
    *(int **)((int)this + 0x346) = param_3;
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))(param_3);
    }
    *(undefined4 *)((int)this + 0x34a) = *param_2;
    *(undefined4 *)((int)this + 0x34e) = param_2[1];
    *(undefined2 *)((int)this + 0x352) = *(undefined2 *)(param_2 + 2);
    if (*(int *)((int)this + 0x334) == 5) {
      *(undefined4 *)((int)this + 0x334) = 6;
    }
    FUN_66216ba0(this);
  }
  return 0;
}


