/* Module: sfppack2.dll
   Function: FUN_5ccd5830
   Address: 5ccd5830
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5ccd5830(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_4;
  
  iVar1 = 0;
  local_4 = 0;
  if (*(int *)((int)this + 0xa88) == 0) {
    iVar1 = FUN_5ccd2f30(this,(undefined4 *)(param_1 * 0x280 + 0x338 + (int)this));
  }
  else {
    if (*(uint *)((int)this + 0xa84) <= *(uint *)((int)this + 0xa80)) {
      iVar1 = FUN_5ccd2f30(this,(undefined4 *)(param_1 * 0x280 + 0x338 + (int)this));
      *(undefined4 *)((int)this + 0xa80) = 0;
    }
    *(int *)((int)this + 0xa80) = *(int *)((int)this + 0xa80) + param_2;
  }
  if (((iVar1 != 0) || (*(int *)((int)this + 0x2c0) == 0)) ||
     ((param_3 != 0 && ((*(int *)((int)this + 0x284) != 0 && (*(int *)((int)this + 0x2c8) == 0))))))
  {
    if (*(int *)((int)this + 0x27c) == 0) {
      if (*(int *)((int)this + 0xa88) == 0) {
        puVar2 = (undefined4 *)(param_1 * 0x280 + 0x338 + (int)this);
        puVar3 = (undefined4 *)((int)this + 0x824);
        for (iVar1 = 0x97; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
        SetEvent(*(HANDLE *)((int)this + 0x308));
      }
      else {
        FUN_5ccd4dd0((undefined4 *)((int)this + param_1 * 0x280 + 0x318),*(int *)((int)this + 0x818)
                     ,(int)this + 0x2d0,(int *)((int)this + param_1 * 0x280 + 0x338));
      }
    }
    else {
      FUN_5ccd2f30(this,(undefined4 *)((int)this + 0x338));
      local_4 = FUN_5ccd5360((undefined4 *)((int)this + 0x2d0));
      param_1 = 0;
      *(undefined4 *)((int)this + 0x27c) = 0;
      *(int *)((int)this + 0xa84) = *(int *)((int)this + 800) * 5;
    }
    *(uint *)((int)this + 0x2c0) = (uint)(-1 < local_4);
  }
  *(undefined4 *)((int)this + 0x284) = 1;
  return param_1;
}


