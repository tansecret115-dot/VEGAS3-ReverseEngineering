/* Module: pngu3266.dll
   Function: SetWindowSize
   Address: 606025c6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNMultipleWindowUpdate::SetWindowSize(void *,struct _PNxSize
   const &) */

int __thiscall
CPNMultipleWindowUpdate::SetWindowSize
          (CPNMultipleWindowUpdate *this,void *param_1,_PNxSize *param_2)

{
  uint uVar1;
  int iVar2;
  void *local_8;
  
                    /* 0x125c6  2045  ?SetWindowSize@CPNMultipleWindowUpdate@@UAEHPAXABU_PNxSize@@@Z
                        */
  local_8 = (void *)0x0;
  if (*(int *)(this + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = FUN_60619880(this + 4,(uint)param_1,(int *)&local_8);
    if (iVar2 == 0) {
      local_8 = operator_new(0x12);
      if (local_8 != (void *)0x0) {
        memset(local_8,0,0x12);
        *(undefined4 *)((int)local_8 + 8) = *(undefined4 *)param_2;
        *(undefined4 *)((int)local_8 + 0xc) = *(undefined4 *)(param_2 + 4);
        *(undefined2 *)((int)local_8 + 0x10) = 2;
        FUN_60619810(this + 4,(uint)param_1,(int)local_8);
      }
    }
    else {
      *(undefined4 *)((int)local_8 + 8) = *(undefined4 *)param_2;
      *(undefined4 *)((int)local_8 + 0xc) = *(undefined4 *)(param_2 + 4);
      *(byte *)((int)local_8 + 0x10) = *(byte *)((int)local_8 + 0x10) | 2;
    }
    uVar1 = (uint)(local_8 != (void *)0x0);
  }
  return uVar1;
}


