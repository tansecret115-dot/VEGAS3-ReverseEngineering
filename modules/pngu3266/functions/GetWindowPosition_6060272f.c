/* Module: pngu3266.dll
   Function: GetWindowPosition
   Address: 6060272f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNMultipleWindowUpdate::GetWindowPosition(void *,struct _PNxPoint
   &) */

int __thiscall
CPNMultipleWindowUpdate::GetWindowPosition
          (CPNMultipleWindowUpdate *this,void *param_1,_PNxPoint *param_2)

{
  int iVar1;
  undefined4 *local_8;
  
                    /* 0x1272f  1422
                       ?GetWindowPosition@CPNMultipleWindowUpdate@@UAEHPAXAAU_PNxPoint@@@Z */
  local_8 = (undefined4 *)0x0;
  if (((*(int *)(this + 0x20) != 0) &&
      (iVar1 = FUN_60619880(this + 4,(uint)param_1,(int *)&local_8), iVar1 != 0)) &&
     ((*(byte *)(local_8 + 4) & 1) != 0)) {
    *(undefined4 *)param_2 = *local_8;
    *(undefined4 *)(param_2 + 4) = local_8[1];
    return 1;
  }
  return 0;
}


