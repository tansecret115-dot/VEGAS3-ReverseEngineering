/* Module: encn3260.dll
   Function: FUN_6648db30
   Address: 6648db30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6648db30(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  void *this_00;
  int iVar4;
  undefined4 *puVar5;
  char local_108;
  undefined4 local_107;
  int *local_8;
  
  *(undefined4 *)((int)this + 0x48) = 1;
  if (*(int *)((int)this + 0x30) != 0) {
    *(undefined4 *)((int)this + 0x34) = param_1;
    return 0;
  }
  local_108 = '\0';
  puVar5 = &local_107;
  for (iVar4 = 0x3f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  iVar4 = *(int *)((int)this + 0x2c);
  local_8 = (int *)0x0;
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  iVar4 = FUN_6648d1b0(iVar4);
  piVar3 = *(int **)((int)this + 0x18);
  if (piVar3 == (int *)0x0) {
    return -0x7fffbffb;
  }
  iVar1 = (**(code **)(*piVar3 + 0x6c))(piVar3,param_1,&local_8);
  if (iVar1 == 0) {
    if (iVar4 != 0) {
      do {
        uVar2 = (**(code **)(*local_8 + 0x1c))(local_8,*(undefined2 *)(iVar4 + 0x10));
        sprintf(&local_108,s__s_Stream_d_664e2f60,uVar2);
        piVar3 = (int *)(**(code **)(**(int **)((int)this + 0x18) + 0x70))
                                  (*(int **)((int)this + 0x18),&local_108);
        if (piVar3 == (int *)0x0) {
          return -0x7fffbffb;
        }
        this_00 = operator_new(0x54);
        if (this_00 == (void *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = FUN_664d1aa0(this_00,*(int **)((int)this + 0x18),piVar3);
        }
        *(int **)(iVar4 + 0x1e) = piVar3;
        iVar4 = FUN_6648d220(*(int *)((int)this + 0x2c));
      } while (iVar4 != 0);
      (**(code **)(*local_8 + 8))(local_8);
      return 0;
    }
    (**(code **)(*local_8 + 8))(local_8);
    iVar1 = 0;
  }
  return iVar1;
}


