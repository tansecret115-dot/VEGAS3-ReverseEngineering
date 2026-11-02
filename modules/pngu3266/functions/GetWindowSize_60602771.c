/* Module: pngu3266.dll
   Function: GetWindowSize
   Address: 60602771
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNMultipleWindowUpdate::GetWindowSize(void *,struct _PNxSize &)
    */

int __thiscall
CPNMultipleWindowUpdate::GetWindowSize
          (CPNMultipleWindowUpdate *this,void *param_1,_PNxSize *param_2)

{
  int iVar1;
  int local_8;
  
                    /* 0x12771  1424  ?GetWindowSize@CPNMultipleWindowUpdate@@UAEHPAXAAU_PNxSize@@@Z
                        */
  local_8 = 0;
  if (((*(int *)(this + 0x20) != 0) &&
      (iVar1 = FUN_60619880(this + 4,(uint)param_1,&local_8), iVar1 != 0)) &&
     ((*(byte *)(local_8 + 0x10) & 2) != 0)) {
    *(undefined4 *)param_2 = *(undefined4 *)(local_8 + 8);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(local_8 + 0xc);
    return 1;
  }
  return 0;
}


