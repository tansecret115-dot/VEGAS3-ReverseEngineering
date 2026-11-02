/* Module: rmto3260.dll
   Function: FUN_662daa70
   Address: 662daa70
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662daa70(void *this,int *param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  void *this_00;
  
  if (param_4 == 0) {
    *(undefined4 *)((int)this + 0x9c) = 1;
  }
  puVar2 = *(undefined4 **)((int)this + 0xc);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_662d8540(puVar2);
    operator_delete(puVar2);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(int **)((int)this + 0x14) = param_1;
  param_4 = 0;
  *(uint *)((int)this + 0x84) = *(uint *)(*param_1 + 0xc) >> 3;
  iVar1 = FUN_662d0e40((void *)*param_1,*param_1,&param_4);
  if ((iVar1 < 0) || (param_4 == 0)) {
    param_4 = 0;
  }
  else {
    *(undefined4 *)((int)this + 0x18) = 2;
  }
  if (-1 < iVar1) {
    if (*(int *)((int)this + 0x18) == 0) {
      iVar1 = FUN_662d0ed0(this_00,*param_1,&param_4);
      if ((iVar1 < 0) || (param_4 == 0)) {
        param_4 = 0;
      }
      else {
        *(undefined4 *)((int)this + 0x18) = 1;
      }
    }
    if (-1 < iVar1) {
      if (*(int *)((int)this + 0x18) == 0) {
        iVar1 = FUN_662d0f60(&param_4,*param_1,&param_4);
        if ((iVar1 < 0) || (param_4 == 0)) {
          param_4 = 0;
        }
        else {
          *(undefined4 *)((int)this + 0x18) = 4;
        }
      }
      if ((((-1 < iVar1) && (*(int *)((int)this + 0x18) == 0)) &&
          (iVar1 = FUN_662d0ff0((void *)*param_1,*param_1,&param_4), -1 < iVar1)) && (param_4 != 0))
      {
        *(undefined4 *)((int)this + 0x18) = 3;
      }
    }
  }
  if ((*(int *)((int)this + 0x18) == 2) && (*(int *)((int)this + 0x9c) == 0)) {
    puVar2 = operator_new(0xca);
    if (puVar2 == (undefined4 *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = (void *)FUN_662d8440(puVar2);
    }
    *(void **)((int)this + 0xc) = pvVar3;
    if (iVar1 < 0) {
      return iVar1;
    }
    iVar1 = FUN_662d8cc0(pvVar3,*param_1,(uint)(*(int *)((int)param_1 + 0x16) == 0));
  }
  if (-1 < iVar1) {
    *(int *)((int)this + 8) = param_3 + 100;
    if (*(void **)((int)this + 4) != (void *)0x0) {
      operator_delete(*(void **)((int)this + 4));
      *(undefined4 *)((int)this + 4) = 0;
    }
    pvVar3 = operator_new(*(uint *)((int)this + 8));
    *(void **)((int)this + 4) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      iVar1 = -0x7ff8fff2;
    }
  }
  return iVar1;
}


