/* Module: rmme3260.dll
   Function: FUN_66215a20
   Address: 66215a20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_66215a20(void *this,char *param_1,int *param_2,undefined2 param_3,int *param_4)

{
  int *piVar1;
  
  if (param_2 == (int *)0x0) {
    return 0x80004005;
  }
  if ((*(int *)((int)this + 0x330) == 0) && (*(int *)((int)this + 0x386) == 0)) {
    piVar1 = *(int **)((int)this + 0x32c);
    *(undefined4 *)((int)this + 0x330) = 2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)this + 0x32c) = 0;
    }
    *(int **)((int)this + 0x32c) = param_4;
    (**(code **)(*param_4 + 4))(param_4);
    FUN_66250410((void *)((int)this + 0x358),param_1);
    piVar1 = *(int **)((int)this + 0x364);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)this + 0x364) = 0;
    }
    *(int **)((int)this + 0x364) = param_2;
    (**(code **)(*param_2 + 4))(param_2);
    *(undefined2 *)((int)this + 0x368) = param_3;
    FUN_66215af0(this);
    return 0;
  }
  return 0x80040009;
}


