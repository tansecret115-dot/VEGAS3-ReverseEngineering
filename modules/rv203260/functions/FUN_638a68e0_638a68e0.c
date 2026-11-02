/* Module: rv203260.dll
   Function: FUN_638a68e0
   Address: 638a68e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_638a68e0(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  switch(param_1) {
  case 0x10007:
    if (*param_2 == 0) {
      *(undefined4 *)((int)this + 0x17a) = 1;
      return 0;
    }
    break;
  case 0x10009:
    if (*param_2 == 0) {
      *(undefined4 *)((int)this + 0x17e) = 1;
      return 0;
    }
    break;
  case 0x1001a:
    piVar2 = (int *)((int)this + 0x192);
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar2 = *param_2;
      param_2 = param_2 + 1;
      piVar2 = piVar2 + 1;
    }
    return 0;
  case 0x1001c:
    piVar2 = (int *)((int)this + 0x1a6);
    for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar2 = *param_2;
      param_2 = param_2 + 1;
      piVar2 = piVar2 + 1;
    }
    return 0;
  case 0x1001d:
    iVar1 = *param_2;
    param_2 = (int *)0x14;
    FUN_638a8020(this,&param_2);
    if (*(int *)((int)this + 0xae) != 0) {
      (**(code **)(**(int **)((int)this + 0x10) + 0x1c))(*(int *)((int)this + 0xae));
      *(undefined4 *)((int)this + 0xae) = 0;
    }
    *(int *)((int)this + 0xa2) = iVar1;
    *(int *)((int)this + 0x9e) = iVar1;
    *(int *)((int)this + 0xa6) = iVar1;
    *(int *)((int)this + 0xaa) = iVar1;
    *(undefined4 *)((int)this + 0x13e) = 0;
    *(undefined4 *)((int)this + 0x136) = 1;
    *(undefined4 *)((int)this + 0x13a) = 0;
    *(undefined4 *)((int)this + 0x166) = 0;
    *(undefined4 *)((int)this + 0x162) = 0;
    *(undefined4 *)((int)this + 0x16a) = 0;
    return 0;
  case 0x1001e:
    if (*param_2 == 0) {
      *(undefined4 *)((int)this + 0x182) = 1;
      return 0;
    }
    break;
  case 0x1002b:
    *(int *)((int)this + 0xbce) = *param_2;
  }
  return 0;
}


