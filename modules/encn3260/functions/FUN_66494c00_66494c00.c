/* Module: encn3260.dll
   Function: FUN_66494c00
   Address: 66494c00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x66494c85) */

undefined4 __thiscall FUN_66494c00(void *this,undefined2 param_1)

{
  undefined4 *puVar1;
  int local_c;
  int *local_8;
  
  if (*(int *)this == 0) {
    FUN_66496710(this);
  }
  if (*(int *)((int)this + 0x26) == 0) {
    *(undefined2 *)((int)this + 0x70) = param_1;
    *(undefined4 *)((int)this + 0x26) = 1;
    *(undefined2 *)((int)this + 0x6e) = param_1;
    *(undefined2 *)((int)this + 0x72) = param_1;
    if (*(short *)((int)this + 0x78) != 0) {
      return 0;
    }
  }
  else {
    if (*(short *)((int)this + 0x78) != 0) {
      *(short *)((int)this + 0x78) = *(short *)((int)this + 0x78) + -1;
    }
    if (*(short *)((int)this + 0x78) != 0) {
      return 0;
    }
    *(undefined2 *)((int)this + 0x76) = param_1;
    *(undefined4 *)((int)this + 0x2a) = 1;
  }
  *(undefined4 *)((int)this + 0x22) = 2;
  *(undefined4 *)((int)this + 0x3e) = 1;
  local_c = *(int *)((int)this + 0x12);
  local_8 = (int *)((int)this + 0xe);
  while (local_c != 0) {
    puVar1 = (undefined4 *)FUN_664bab80(local_c);
    FUN_66494cd0(this,(int *)*puVar1);
    FUN_664bab40(&local_c);
  }
  (**(code **)(*(int *)((int)this + 0xe) + 8))();
  *(undefined4 *)((int)this + 0x3e) = 0;
  return 0;
}


