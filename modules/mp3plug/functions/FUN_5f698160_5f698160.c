/* Module: mp3plug.dll
   Function: FUN_5f698160
   Address: 5f698160
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f698160(void *this,int param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  LPVOID this_00;
  undefined4 *this_01;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1;
  if (*(int *)((int)this + 0x1a0) <= param_1) {
    return -0x7ff8ffa9;
  }
  iVar4 = param_1 * 0x20;
  piVar1 = (int *)(*(int *)((int)this + 0x1bc) + iVar4);
  if (piVar1[7] != 0) {
    return 0;
  }
  param_1 = -0x7fff0001;
  if (*piVar1 == 1) {
    pvVar2 = GlobalAlloc(0x40,0x1c);
    this_00 = GlobalLock(pvVar2);
    if (this_00 != (LPVOID)0x0) {
      this_01 = (undefined4 *)FUN_5f699820(this_00,this);
      if (this_01 != (undefined4 *)0x0) {
        iVar3 = FUN_5f699a30(this_01,iVar3);
        if (-1 < iVar3) {
          *(undefined4 **)(iVar4 + 0x1c + *(int *)((int)this + 0x1bc)) = this_01;
          return iVar3;
        }
        FUN_5f699850(this_01);
        pvVar2 = GlobalHandle(this_01);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(this_01);
        GlobalFree(pvVar2);
        *(undefined4 *)(iVar4 + 0x1c + *(int *)((int)this + 0x1bc)) = 0;
        return iVar3;
      }
    }
    param_1 = -0x7ff8fff2;
  }
  return param_1;
}


