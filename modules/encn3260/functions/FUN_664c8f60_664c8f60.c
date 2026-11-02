/* Module: encn3260.dll
   Function: FUN_664c8f60
   Address: 664c8f60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_664c8f60(void *this,undefined4 param_1,undefined2 *param_2,undefined4 param_3,undefined2 param_4
            )

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  (**(code **)(**(int **)((int)this + 0x44) + 4))();
  iVar5 = *(int *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0xac) = 0;
  if (iVar5 == 0) {
    puVar1 = operator_new(10);
    puVar2 = operator_new(0x28);
    if (puVar2 == (undefined4 *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_664bad50(puVar2);
    }
    *puVar1 = piVar3;
    (**(code **)(*piVar3 + 4))(piVar3);
    (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1,param_1,*param_2);
    puVar1[1] = param_3;
    *(undefined2 *)(puVar1 + 2) = param_4;
    FUN_664baab0((void *)((int)this + 0x6c),puVar1);
    iVar5 = 0;
  }
  if ((iVar5 == 0) && (*(int *)((int)this + 0xb0) == 0)) {
    if (this == (void *)0xffffff94) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)((int)this + 0x7c);
    }
    if ((0 < iVar4) && (*(int *)((int)this + 0x8c) != 0)) {
      *(undefined4 *)((int)this + 0xb0) = 1;
      (**(code **)(*(int *)this + 0x1c))();
    }
  }
  if ((*(int *)((int)this + 0xc) == 0) && (*(int *)((int)this + 0x90) == 0)) {
    FUN_664c9d40((int)this);
  }
  (**(code **)(**(int **)((int)this + 0x44) + 8))();
  return iVar5;
}


