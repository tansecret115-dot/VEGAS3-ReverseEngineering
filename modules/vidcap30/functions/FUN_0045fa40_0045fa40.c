/* Module: vidcap30.exe
   Function: FUN_0045fa40
   Address: 0045fa40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0045fa40(int *param_1)

{
  int *piVar1;
  int iVar2;
  HGLOBAL pvVar3;
  LPVOID pMem;
  int unaff_EBP;
  int iVar4;
  undefined4 unaff_ESI;
  uint unaff_EDI;
  undefined1 local_20 [4];
  int iStack_1c;
  undefined4 uStack_18;
  int aiStack_14 [2];
  int aiStack_c [3];
  
  piVar1 = param_1;
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (-1 < iVar2) {
    if (aiStack_c[0] != 4) {
      return -0x7ffb1ff8;
    }
    iVar4 = 0x1c;
    if (unaff_EDI < 0x21) {
      iVar4 = unaff_EDI - 4;
    }
    iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,&stack0xffffffd4,iVar4,aiStack_c);
    if (-1 < iVar2) {
      if (iVar4 != iStack_1c) {
        return -0x7ffb1ff8;
      }
      if ((int *)0x20 < piVar1) {
        iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,piVar1 + -8,0,1,0);
      }
      if (-1 < iVar2) {
        if (unaff_EBP == 4) {
          if (&stack0x00000000 == (undefined1 *)0x20) {
            return -0x7ffb1ff5;
          }
          pvVar3 = GlobalAlloc(0x40,(SIZE_T)local_20);
          pMem = GlobalLock(pvVar3);
          if (pMem == (LPVOID)0x0) {
            iVar2 = -0x7ff8fff2;
          }
          else {
            iVar2 = FUN_00451430(piVar1,pMem,local_20);
            if ((-1 < iVar2) &&
               (iVar2 = FUN_0045efd0(uStack_18,aiStack_14,aiStack_14[0],pMem,0), -1 < iVar2)) {
              *(undefined4 *)(aiStack_14[0] + 8) = 4;
            }
          }
        }
        else {
          pMem = (LPCVOID)0x0;
          if ((unaff_EBP == 5) &&
             (iVar2 = FUN_0045fbd0(uStack_18,aiStack_14,aiStack_14[0],0xffffffff,&param_1,unaff_EDI,
                                   unaff_ESI), pMem = (LPCVOID)0x0, -1 < iVar2)) {
            *(undefined4 *)(aiStack_14[0] + 8) = 4;
          }
        }
        if (pMem != (LPCVOID)0x0) {
          pvVar3 = GlobalHandle(pMem);
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle(pMem);
          GlobalFree(pvVar3);
        }
      }
    }
  }
  return iVar2;
}


