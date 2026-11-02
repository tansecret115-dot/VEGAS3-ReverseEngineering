/* Module: pngu3266.dll
   Function: FindString
   Address: 60611206
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual long __thiscall XPNPopupList::FindString(char const *,unsigned long,int,int) */

long __thiscall
XPNPopupList::FindString(XPNPopupList *this,char *param_1,ulong param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint local_14;
  uint local_10;
  char *local_8;
  
                    /* 0x21206  1053  ?FindString@XPNPopupList@@UAEJPBDKHH@Z */
  uVar1 = (**(code **)(*(int *)this + 0x130))();
  local_14 = 0;
  local_10 = 0x100;
  local_8 = operator_new(0x100);
  if (uVar1 != 0) {
    do {
      iVar2 = (**(code **)(*(int *)this + 0x168))(param_2);
      uVar3 = iVar2 + 1;
      if (local_10 < uVar3) {
        if (local_8 != (char *)0x0) {
          operator_delete(local_8);
        }
        local_8 = operator_new(uVar3);
        local_10 = uVar3;
      }
      (**(code **)(*(int *)this + 0x138))(local_8,local_10,param_2);
      if (param_3 == 0) {
        if (local_8 != (char *)0x0) {
          iVar2 = _stricmp(param_1,local_8);
          goto LAB_606112b8;
        }
      }
      else if (local_8 != (char *)0x0) {
        iVar2 = strcmp(param_1,local_8);
LAB_606112b8:
        if (iVar2 == 0) {
          return param_2;
        }
      }
      param_2 = param_2 + (-(uint)(param_4 != 0) & 0xfffffffe) + 1;
      local_14 = local_14 + 1;
      if (param_2 == 0xffffffff) {
        param_2 = uVar1 - 1;
      }
      else if (param_2 == uVar1) {
        param_2 = 0;
      }
    } while (local_14 < uVar1);
  }
  if (local_8 != (char *)0x0) {
    operator_delete(local_8);
  }
  return -1;
}


