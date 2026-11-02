/* Module: pngu3266.dll
   Function: MoveAndSize
   Address: 60602661
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNMultipleWindowUpdate::MoveAndSize(void *,struct _PNxRect const
   &) */

int __thiscall
CPNMultipleWindowUpdate::MoveAndSize(CPNMultipleWindowUpdate *this,void *param_1,_PNxRect *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *local_8;
  
                    /* 0x12661  1571  ?MoveAndSize@CPNMultipleWindowUpdate@@UAEHPAXABU_PNxRect@@@Z
                        */
  local_8 = (undefined4 *)0x0;
  if (*(int *)(this + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = FUN_60619880(this + 4,(uint)param_1,(int *)&local_8);
    if (iVar2 == 0) {
      local_8 = operator_new(0x12);
      if (local_8 != (undefined4 *)0x0) {
        memset(local_8,0,0x12);
        *local_8 = *(undefined4 *)param_2;
        local_8[1] = *(undefined4 *)(param_2 + 4);
        local_8[2] = *(int *)(param_2 + 8) - *(int *)param_2;
        local_8[3] = *(int *)(param_2 + 0xc) - *(int *)(param_2 + 4);
        *(undefined2 *)(local_8 + 4) = 3;
        FUN_60619810(this + 4,(uint)param_1,(int)local_8);
      }
    }
    else {
      *local_8 = *(undefined4 *)param_2;
      local_8[1] = *(undefined4 *)(param_2 + 4);
      local_8[2] = *(int *)(param_2 + 8) - *(int *)param_2;
      local_8[3] = *(int *)(param_2 + 0xc) - *(int *)(param_2 + 4);
      *(byte *)(local_8 + 4) = *(byte *)(local_8 + 4) | 2;
      *(byte *)(local_8 + 4) = *(byte *)(local_8 + 4) | 1;
    }
    uVar1 = (uint)(local_8 != (undefined4 *)0x0);
  }
  return uVar1;
}


