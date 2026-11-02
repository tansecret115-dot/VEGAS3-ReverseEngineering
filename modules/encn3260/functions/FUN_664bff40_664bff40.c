/* Module: encn3260.dll
   Function: FUN_664bff40
   Address: 664bff40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664bff40(void *this,char *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *this_00;
  char *local_14 [3];
  uint local_8;
  
  FUN_664c0060(this);
  uVar1 = FUN_664bfdc0(param_1,*param_2);
  if ((int)uVar1 < 1) {
    *param_2 = 0;
  }
  else {
    if (this == (void *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 0x10);
    }
    if (iVar2 == 0) {
      *param_2 = 0;
      return (undefined4 *)0x0;
    }
    iVar2 = _strnicmp((char *)**(undefined4 **)(*(int *)((int)this + 4) + 8),s_RTSP__664ef918,5);
    if (iVar2 == 0) {
      this_00 = FUN_664bfca0((int)this);
    }
    else {
      this_00 = FUN_664bfd30((int)this);
    }
    if (this_00 != (undefined4 *)0x0) {
      local_8 = 0;
      iVar2 = FUN_664bd740(this_00,s_Content_length_664e26c4,(long *)&local_8);
      if (iVar2 == 0) {
        *param_2 = uVar1;
        return this_00;
      }
      if (local_8 + uVar1 <= *param_2) {
        FUN_664bb980(local_14,(undefined4 *)(param_1 + uVar1),local_8);
        FUN_664bb5e0(this_00 + 4,local_14[0]);
        *param_2 = local_8 + uVar1;
        FUN_664bb3e0((int *)local_14);
        return this_00;
      }
      (**(code **)*this_00)(1);
      *param_2 = 0;
      return (undefined4 *)0x0;
    }
  }
  return (undefined4 *)0x0;
}


