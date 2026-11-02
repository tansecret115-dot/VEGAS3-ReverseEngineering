/* Module: vidcap30.exe
   Function: FUN_004272f0
   Address: 004272f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004272f0(HGLOBAL param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  HGLOBAL pvVar4;
  void *pv;
  LPSTREAM local_8;
  int local_4;
  
  local_8 = (IStream *)0x0;
  iVar1 = FUN_00427400(0,1,&local_8);
  if (-1 < iVar1) {
    iVar1 = (-(uint)(param_3 != 0) & 0xfffffffe) + 0xc;
    pvVar4 = param_1;
    if (0 < iVar1) {
      do {
        local_4 = iVar1;
        pvVar4 = (HGLOBAL)((int)pvVar4 + 0x1e0);
        param_3 = 9;
        do {
          iVar1 = 0xf;
          pv = (void *)((int)pvVar4 + 0x53);
          pvVar4 = (HGLOBAL)((int)pvVar4 + 0x500);
          do {
            (*local_8->lpVtbl->Write)(local_8,pv,0x4d,(ULONG *)0x0);
            pv = (void *)((int)pv + 0x50);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          param_3 = param_3 + -1;
        } while (param_3 != 0);
        local_4 = local_4 + -1;
        param_3 = 0;
        iVar1 = local_4;
      } while (local_4 != 0);
    }
    param_1 = (HGLOBAL)0x0;
    iVar1 = GetHGlobalFromStream(local_8,&param_1);
    if (-1 < iVar1) {
      iVar1 = -0x7ff8fffa;
      pvVar2 = GlobalLock(param_1);
      if (pvVar2 != (LPVOID)0x0) {
        param_3 = 0;
        iVar1 = FUN_00427440(local_8,&param_3);
        if (-1 < iVar1) {
          uVar3 = FUN_0041d940(0,pvVar2,param_3);
          *param_4 = uVar3;
        }
        GlobalUnlock(param_1);
      }
    }
    if (local_8 != (LPSTREAM)0x0) {
      FUN_00427420(local_8);
    }
  }
  return iVar1;
}


