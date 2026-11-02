/* Module: vegas30k.dll
   Function: FUN_011653d0
   Address: 011653d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011653d0(int *param_1)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int *piVar2;
  int iVar3;
  
  hMem = GlobalAlloc(0x40,0x28);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 != (LPVOID)0x0) {
    piVar2 = (int *)FUN_01164f80();
    if (piVar2 != (int *)0x0) {
      iVar3 = (**(code **)(*param_1 + 0x38))
                        (param_1,param_1[1],param_1[4],param_1[5],param_1[6],param_1[7]);
      if (-1 < iVar3) {
        piVar2[2] = param_1[2];
        piVar2[3] = param_1[3];
        return iVar3;
      }
      (**(code **)(*piVar2 + 8))(piVar2);
      return iVar3;
    }
  }
  return -0x7ff8fff2;
}


