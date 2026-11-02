/* Module: vegas30.exe
   Function: FUN_005e46c0
   Address: 005e46c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005e46c0(int *param_1,int param_2)

{
  int iVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  undefined4 *pMem;
  int iStack_c;
  
  iStack_c = param_2;
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (iVar1 <= (int)param_1) {
    return iStack_c;
  }
  pvVar2 = GlobalAlloc(0x40,0x60);
  pvVar3 = GlobalLock(pvVar2);
  if (pvVar3 != (LPVOID)0x0) {
    pMem = (undefined4 *)FUN_005e48d0(param_1,&iStack_c,0);
    if (pMem != (undefined4 *)0x0) {
      iVar1 = (**(code **)*pMem)(pMem,&DAT_00633708,param_2);
      if (iVar1 < 0) {
        FUN_005e4910();
        pvVar2 = GlobalHandle(pMem);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(pMem);
        GlobalFree(pvVar2);
      }
      return iVar1;
    }
  }
  return -0x7ff8fff2;
}


