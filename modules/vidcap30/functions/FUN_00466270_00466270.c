/* Module: vidcap30.exe
   Function: FUN_00466270
   Address: 00466270
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00466270(int param_1,int *param_2)

{
  LPCVOID pMem;
  int iVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  int iVar4;
  int iVar5;
  uint unaff_EDI;
  undefined4 *puVar6;
  undefined1 local_10 [16];
  
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)(*param_2 + 0x10))(param_2,local_10);
    if (-1 < iVar1) {
      if (*(uint *)(param_1 + 0xc0) < unaff_EDI) {
        pMem = *(LPCVOID *)(param_1 + 0xbc);
        if (pMem != (LPCVOID)0x0) {
          pvVar2 = GlobalHandle(pMem);
          GlobalUnlock(pvVar2);
          pvVar2 = GlobalHandle(pMem);
          GlobalFree(pvVar2);
          *(undefined4 *)(param_1 + 0xc4) = 0;
          *(undefined4 *)(param_1 + 0xc0) = 0;
        }
        pvVar2 = GlobalAlloc(0x40,unaff_EDI * 0x58);
        pvVar3 = GlobalLock(pvVar2);
        *(LPVOID *)(param_1 + 0xbc) = pvVar3;
        if (pvVar3 == (LPVOID)0x0) {
          *(uint *)(param_1 + 0xc4) = unaff_EDI;
          return 0x8007000e;
        }
        iVar1 = 0;
        if (0 < (int)unaff_EDI) {
          iVar5 = 0;
          do {
            puVar6 = (undefined4 *)(*(int *)(param_1 + 0xbc) + iVar5);
            for (iVar4 = 0x16; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
            iVar1 = iVar1 + 1;
            iVar5 = iVar5 + 0x58;
          } while (iVar1 < (int)unaff_EDI);
        }
        *(uint *)(param_1 + 0xc0) = unaff_EDI;
        *(undefined4 *)(param_1 + 200) = 0;
      }
      *(uint *)(param_1 + 0xc4) = unaff_EDI;
      return 0;
    }
  }
  return 0x80004005;
}


