/* Module: vegas30k.dll
   Function: FUN_01164f10
   Address: 01164f10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01164f10(int param_1)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int *piVar2;
  int iVar3;
  
  hMem = GlobalAlloc(0x40,0x20);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 != (LPVOID)0x0) {
    piVar2 = (int *)FUN_01164b80();
    if (piVar2 != (int *)0x0) {
      iVar3 = FUN_01164bc0(*(undefined4 *)(param_1 + 4));
      if (-1 < iVar3) {
        piVar2[2] = *(int *)(param_1 + 8);
        piVar2[3] = *(int *)(param_1 + 0xc);
        return iVar3;
      }
      (**(code **)(*piVar2 + 8))(piVar2);
      return iVar3;
    }
  }
  return -0x7ff8fff2;
}


