/* Module: vegas30.exe
   Function: FUN_005952b0
   Address: 005952b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005952b0(undefined4 *param_1)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int iVar2;
  LPVOID pvVar3;
  int iVar4;
  
  hMem = GlobalAlloc(0x42,0x750);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 == (LPVOID)0x0) {
    return -0x7ff8fff2;
  }
  iVar4 = 0;
  pvVar3 = pvVar1;
  do {
    iVar2 = _SfList_CreateExZ_32(pvVar3,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar4 = iVar4 + 1;
    pvVar3 = (LPVOID)((int)pvVar3 + 4);
  } while (iVar4 < 0x3a);
  *(undefined4 *)((int)pvVar1 + 0x744) = 0;
  *(undefined4 *)((int)pvVar1 + 0x748) = 0;
  *param_1 = pvVar1;
  return 0;
}


