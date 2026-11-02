/* Module: pngu3266.dll
   Function: EndWindowUpdate
   Address: 606027b4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNMultipleWindowUpdate::EndWindowUpdate(void) */

int __thiscall CPNMultipleWindowUpdate::EndWindowUpdate(CPNMultipleWindowUpdate *this)

{
  int *piVar1;
  int iVar2;
  uint uFlags;
  int local_20 [3];
  int *local_14;
  HWND local_10;
  int local_c;
  HDWP local_8;
  
                    /* 0x127b4  1043  ?EndWindowUpdate@CPNMultipleWindowUpdate@@UAEHXZ */
  iVar2 = *(int *)(this + 0x10);
  if (*(int *)(this + 0x20) == 0) {
    iVar2 = 0;
  }
  else {
    local_8 = BeginDeferWindowPos(iVar2);
    FUN_605f28b6(local_20,this + 4,-(uint)(*(int *)(this + 0x10) != 0));
    if (0 < iVar2) {
      do {
        local_c = iVar2;
        piVar1 = local_14;
        uFlags = 4;
        if ((~*(ushort *)(local_14 + 4) & 2) != 0) {
          uFlags = 5;
        }
        if ((~*(ushort *)(local_14 + 4) & 1) != 0) {
          uFlags = uFlags | 2;
        }
        local_8 = DeferWindowPos(local_8,local_10,(HWND)0x0,*local_14,local_14[1],local_14[2],
                                 local_14[3],uFlags);
        operator_delete(piVar1);
        FUN_6060285c(local_20);
        local_c = local_c + -1;
        iVar2 = local_c;
      } while (local_c != 0);
    }
    FUN_606196e0((int)(this + 4));
    *(undefined4 *)(this + 0x20) = 0;
    iVar2 = EndDeferWindowPos(local_8);
  }
  return iVar2;
}


