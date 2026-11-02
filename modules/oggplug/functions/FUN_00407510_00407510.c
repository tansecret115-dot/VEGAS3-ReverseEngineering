/* Module: oggplug.dll
   Function: FUN_00407510
   Address: 00407510
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00407510(void *this,int param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  LPVOID this_00;
  undefined4 *this_01;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1;
  if (*(int *)((int)this + 0x348) <= param_1) {
    return -0x7ff8ffa9;
  }
  iVar4 = param_1 * 0x20;
  piVar1 = (int *)(*(int *)((int)this + 0x364) + iVar4);
  if (piVar1[7] != 0) {
    return 0;
  }
  param_1 = -0x7fff0001;
  if (*piVar1 == 1) {
    pvVar2 = GlobalAlloc(0x40,0x1c);
    this_00 = GlobalLock(pvVar2);
    if (this_00 != (LPVOID)0x0) {
      this_01 = (undefined4 *)FUN_00408650(this_00,this);
      if (this_01 != (undefined4 *)0x0) {
        iVar3 = FUN_00408860(this_01,iVar3);
        if (-1 < iVar3) {
          *(undefined4 **)(iVar4 + 0x1c + *(int *)((int)this + 0x364)) = this_01;
          return iVar3;
        }
        FUN_00408680(this_01);
        pvVar2 = GlobalHandle(this_01);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(this_01);
        GlobalFree(pvVar2);
        *(undefined4 *)(iVar4 + 0x1c + *(int *)((int)this + 0x364)) = 0;
        return iVar3;
      }
    }
    param_1 = -0x7ff8fff2;
  }
  return param_1;
}


