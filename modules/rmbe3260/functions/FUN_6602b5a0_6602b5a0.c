/* Module: rmbe3260.dll
   Function: FUN_6602b5a0
   Address: 6602b5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6602b5a0(void *this,undefined4 param_1,int param_2)

{
  *(undefined4 *)((int)this + 0x1c) = 0;
  switch(*(undefined4 *)(*(int *)((int)this + 0x20) + param_2 * 4)) {
  case 1:
    (**(code **)(**(int **)((int)this + 100) + 0x4c))
              (*(int **)((int)this + 100),param_1,*(undefined4 *)((int)this + 0x18));
    return;
  case 2:
    *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0x54);
    (**(code **)(**(int **)((int)this + 0x7c) + 0x4c))
              (*(int **)((int)this + 0x7c),param_1,*(undefined4 *)((int)this + 0x54));
    return;
  case 3:
    (**(code **)(**(int **)((int)this + 100) + 0x4c))
              (*(int **)((int)this + 100),param_1,*(undefined4 *)((int)this + 0x18));
    *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0x54);
    (**(code **)(**(int **)((int)this + 0x7c) + 0x4c))
              (*(int **)((int)this + 0x7c),param_1,*(undefined4 *)((int)this + 0x54));
    return;
  case 4:
    *(undefined4 *)((int)this + 0x1c) = param_1;
    return;
  case 5:
    (**(code **)(**(int **)((int)this + 100) + 0x4c))
              (*(int **)((int)this + 100),param_1,*(undefined4 *)((int)this + 0x18));
    *(undefined4 *)((int)this + 0x1c) = param_1;
    return;
  case 6:
    *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0x5c);
    (**(code **)(**(int **)((int)this + 0x74) + 0x4c))
              (*(int **)((int)this + 0x74),param_1,*(undefined4 *)((int)this + 0x5c));
    (**(code **)(**(int **)((int)this + 0x8c) + 0x4c))
              (*(int **)((int)this + 0x8c),*(undefined4 *)((int)this + 0x5c),
               *(undefined4 *)((int)this + 0x18));
    return;
  case 7:
    (**(code **)(**(int **)((int)this + 0x74) + 0x4c))
              (*(int **)((int)this + 0x74),param_1,*(undefined4 *)((int)this + 0x5c));
    (**(code **)(**(int **)((int)this + 0x8c) + 0x4c))
              (*(int **)((int)this + 0x8c),*(undefined4 *)((int)this + 0x5c),
               *(undefined4 *)((int)this + 0x18));
    *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0x54);
    (**(code **)(**(int **)((int)this + 0x84) + 0x4c))
              (*(int **)((int)this + 0x84),*(undefined4 *)((int)this + 0x5c),
               *(undefined4 *)((int)this + 0x54));
    return;
  case 8:
    (**(code **)(**(int **)((int)this + 100) + 0x4c))
              (*(int **)((int)this + 100),param_1,*(undefined4 *)((int)this + 0x4c));
    *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0x54);
    (**(code **)(**(int **)((int)this + 0x6c) + 0x4c))
              (*(int **)((int)this + 0x6c),*(undefined4 *)((int)this + 0x4c),
               *(undefined4 *)((int)this + 0x54));
    return;
  case 9:
    (**(code **)(**(int **)((int)this + 100) + 0x4c))
              (*(int **)((int)this + 100),param_1,*(undefined4 *)((int)this + 0x18));
    *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0x54);
    (**(code **)(**(int **)((int)this + 0x6c) + 0x4c))
              (*(int **)((int)this + 0x6c),*(undefined4 *)((int)this + 0x18),
               *(undefined4 *)((int)this + 0x54));
  }
  return;
}


