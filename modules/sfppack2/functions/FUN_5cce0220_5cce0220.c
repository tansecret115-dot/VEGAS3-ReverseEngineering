/* Module: sfppack2.dll
   Function: FUN_5cce0220
   Address: 5cce0220
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5cce0220(void *this,int param_1,int param_2,int param_3)

{
  HANDLE hEvent;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_4;
  
  iVar1 = 0;
  local_4 = 0;
  if (*(int *)((int)this + 0x130) == 0) {
    iVar1 = FUN_5ccdd470(this,(undefined4 *)((int)this + param_1 * 0x2c + 0xc0));
  }
  else {
    if (*(uint *)((int)this + 300) <= *(uint *)((int)this + 0x128)) {
      iVar1 = FUN_5ccdd470(this,(undefined4 *)((int)this + param_1 * 0x2c + 0xc0));
      *(undefined4 *)((int)this + 0x128) = 0;
    }
    *(int *)((int)this + 0x128) = *(int *)((int)this + 0x128) + param_2;
  }
  if (((iVar1 != 0) || (*(int *)((int)this + 0x5c) == 0)) ||
     ((param_3 != 0 && ((*(int *)((int)this + 0x40) != 0 && (*(int *)((int)this + 100) == 0)))))) {
    if (*(int *)((int)this + 0x38) == 0) {
      if (*(int *)((int)this + 0x130) == 0) {
        hEvent = *(HANDLE *)((int)this + 0x84);
        puVar2 = (undefined4 *)((int)this + param_1 * 0x2c + 0xc0);
        puVar3 = (undefined4 *)((int)this + 0x110);
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
        SetEvent(hEvent);
      }
      else {
        FUN_5ccdf760((undefined4 *)((int)this + param_1 * 0x2c + 0xac),*(int *)((int)this + 0x108),
                     (uint *)((int)this + 0x68),(undefined4 *)((int)this + param_1 * 0x2c + 0xc0));
      }
    }
    else {
      FUN_5ccdd470(this,(undefined4 *)((int)this + 0xc0));
      local_4 = FUN_5ccdfda0((uint *)((int)this + 0x68));
      param_1 = 0;
      *(undefined4 *)((int)this + 0x38) = 0;
      *(int *)((int)this + 300) = *(int *)((int)this + 0xb4) * 5;
    }
    *(uint *)((int)this + 0x5c) = (uint)(-1 < local_4);
  }
  *(undefined4 *)((int)this + 0x40) = 1;
  return param_1;
}


