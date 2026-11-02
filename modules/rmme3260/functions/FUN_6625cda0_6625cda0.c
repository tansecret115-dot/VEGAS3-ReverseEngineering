/* Module: rmme3260.dll
   Function: FUN_6625cda0
   Address: 6625cda0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6625cda0(void *this,char *param_1,undefined2 param_2,uint param_3,int param_4)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined4 local_14;
  void *local_10;
  int *local_c;
  undefined4 local_8;
  
  iVar3 = 0;
  *(int *)((int)this + 0x94) = param_4;
  if (*(int *)((int)this + 0x2e) == 0) {
    puVar1 = FUN_6625f600(param_4,1);
    *(undefined4 **)((int)this + 0x2e) = puVar1;
  }
  pvVar2 = *(void **)((int)this + 0x2e);
  if (pvVar2 == (void *)0x0) {
    iVar3 = -0x7ff8fff2;
  }
  else {
    *(undefined4 *)((int)this + 0x98) = *(undefined4 *)((int)pvVar2 + 4);
    FUN_6625fa50(pvVar2,this);
  }
  if (iVar3 == 0) {
    pvVar2 = operator_new(0x2e);
    if (pvVar2 == (void *)0x0) {
      local_c = (int *)0x0;
    }
    else {
      local_c = FUN_6625e150(pvVar2,this,4);
    }
    FUN_66250410((void *)((int)local_c + 10),param_1);
    *(undefined2 *)((int)local_c + 0x1e) = param_2;
    *(uint *)((int)local_c + 0x16) = param_3 & 0xffff;
    local_c[8] = param_4;
    (**(code **)(*local_c + 4))(local_c);
    local_14 = 0x464;
    local_8 = 0;
    local_10 = this;
    iVar3 = (**(code **)(**(int **)((int)this + 0x3c) + 0x24))(&local_14,0);
  }
  return iVar3;
}


