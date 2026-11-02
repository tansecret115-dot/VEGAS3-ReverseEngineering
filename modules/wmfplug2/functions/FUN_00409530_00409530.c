/* Module: wmfplug2.dll
   Function: FUN_00409530
   Address: 00409530
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00409530(void *this,int param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  undefined4 *this_00;
  int iVar4;
  int iVar5;
  
  if (*(int *)((int)this + 0x30) <= param_1) {
    return -0x7ff8ffa9;
  }
  iVar5 = param_1 * 0x20;
  piVar1 = (int *)(*(int *)((int)this + 0x5c) + iVar5);
  if (piVar1[6] != 0) {
    return 0;
  }
  iVar4 = *piVar1;
  if (iVar4 == 1) {
    pvVar2 = GlobalAlloc(0x40,0x1c);
    pvVar3 = GlobalLock(pvVar2);
    if ((pvVar3 != (LPVOID)0x0) &&
       (this_00 = (undefined4 *)FUN_0040a8a0(pvVar3,this), this_00 != (undefined4 *)0x0)) {
      iVar4 = FUN_0040aac0(this_00,param_1);
      if (-1 < iVar4) {
        *(undefined4 **)(iVar5 + 0x18 + *(int *)((int)this + 0x5c)) = this_00;
        return iVar4;
      }
      FUN_0040a8d0(this_00);
LAB_0040960e:
      pvVar2 = GlobalHandle(this_00);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(this_00);
      GlobalFree(pvVar2);
      *(undefined4 *)(iVar5 + 0x18 + *(int *)((int)this + 0x5c)) = 0;
      return iVar4;
    }
  }
  else {
    if (iVar4 != 2) {
      return -0x7fff0001;
    }
    pvVar2 = GlobalAlloc(0x40,0x1c);
    pvVar3 = GlobalLock(pvVar2);
    if ((pvVar3 != (LPVOID)0x0) &&
       (this_00 = (undefined4 *)FUN_0040a500(pvVar3,this), this_00 != (undefined4 *)0x0)) {
      iVar4 = FUN_0040a6c0(this_00,param_1);
      if (-1 < iVar4) {
        *(undefined4 **)(iVar5 + 0x18 + *(int *)((int)this + 0x5c)) = this_00;
        return iVar4;
      }
      FUN_0040a530(this_00);
      goto LAB_0040960e;
    }
  }
  return -0x7ff8fff2;
}


