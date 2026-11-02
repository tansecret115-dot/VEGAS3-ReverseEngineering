/* Module: rmto3260.dll
   Function: FUN_662ea580
   Address: 662ea580
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_662ea580(void *this,uint *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  iVar4 = 0;
  if (*(int *)((int)this + 0x88) == 0) {
    iVar4 = FUN_662e4d90(this);
  }
  if (iVar4 != 0) {
    return 0;
  }
  if (*(int *)((int)this + 0x88) == 0) {
    return 0;
  }
  uVar6 = 0;
  if (*(int *)((int)this + 0x186) == 0) {
    uVar5 = (**(code **)(*(int *)this + 0x70))((int)this + 0x17c,(int)this + 0x18a);
    *(undefined4 *)((int)this + 0x186) = uVar5;
  }
  puVar3 = param_1;
  if (*(int *)((int)this + 0x1aa) == 0) {
    if (*(int *)((int)this + 0x186) == 0) goto LAB_662ea72d;
    *param_1 = *(uint *)((int)this + 0x17c);
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)((int)this + 0x180);
    *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)((int)this + 0x182);
    *(undefined2 *)(param_1 + 2) = *(undefined2 *)((int)this + 0x184);
    *param_2 = *(int *)((int)this + 0x18a);
    uVar6 = *(uint *)((int)this + 0x186);
    iVar4 = *(int *)this;
  }
  else {
    if (*(int *)((int)this + 0x1b8) == 0) {
      uVar5 = (**(code **)(*(int *)this + 0x6c))((int)this + 0x1ae,(int)this + 0x1bc);
      *(undefined4 *)((int)this + 0x1b8) = uVar5;
    }
    if ((*(int *)((int)this + 0x186) == 0) ||
       (*(uint *)((int)this + 0x1ae) <= *(uint *)((int)this + 0x17c))) {
      if (*(int *)((int)this + 0x1b8) != 0) {
        *puVar3 = *(uint *)((int)this + 0x1ae);
        *(undefined2 *)(puVar3 + 1) = *(undefined2 *)((int)this + 0x1b2);
        *(undefined2 *)((int)puVar3 + 6) = *(undefined2 *)((int)this + 0x1b4);
        *(undefined2 *)(puVar3 + 2) = *(undefined2 *)((int)this + 0x1b6);
        *param_2 = *(int *)((int)this + 0x1bc);
        uVar6 = *(uint *)((int)this + 0x1b8);
        uVar5 = (**(code **)(*(int *)this + 0x6c))((int)this + 0x1ae,(int *)((int)this + 0x1bc));
        *(undefined4 *)((int)this + 0x1b8) = uVar5;
      }
      goto LAB_662ea72d;
    }
    *puVar3 = *(uint *)((int)this + 0x17c);
    *(undefined2 *)(puVar3 + 1) = *(undefined2 *)((int)this + 0x180);
    *(undefined2 *)((int)puVar3 + 6) = *(undefined2 *)((int)this + 0x182);
    *(undefined2 *)(puVar3 + 2) = *(undefined2 *)((int)this + 0x184);
    *param_2 = *(int *)((int)this + 0x18a);
    uVar6 = *(uint *)((int)this + 0x186);
    iVar4 = *(int *)this;
  }
  uVar5 = (**(code **)(iVar4 + 0x70))((int)this + 0x17c,(int)this + 0x18a);
  *(undefined4 *)((int)this + 0x186) = uVar5;
LAB_662ea72d:
  if (((uVar6 != 0) && (*(int *)((int)this + 0x84) == 0)) && (*(int *)((int)this + 0x7c) != 0)) {
    piVar1 = *(int **)((int)this + 4);
    uVar2 = *(uint *)(piVar1[8] + 0xc);
    if ((uVar2 == uVar6) || ((uVar2 < uVar6 && (uVar6 < (uint)piVar1[6])))) {
      piVar1 = (int *)(piVar1[8] + 0x14);
      *piVar1 = *piVar1 + -1;
    }
    else {
      (**(code **)(*piVar1 + 0x28))(uVar6);
    }
    iVar4 = (**(code **)(*(int *)this + 0x18))(*(undefined4 *)((int)this + 0x80),&param_1);
    if (iVar4 != 0) {
      return 0;
    }
    if ((*(int *)((int)this + 0x84) == 0) && (*(int *)((int)this + 0x7c) != 0)) {
      *(undefined4 *)((int)this + 0x24) = 0x40040;
      return 0;
    }
    uVar6 = (**(code **)(*(int *)this + 0x10))(puVar3,param_2);
  }
  return uVar6;
}


