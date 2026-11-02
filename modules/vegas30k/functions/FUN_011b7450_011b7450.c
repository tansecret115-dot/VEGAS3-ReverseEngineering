/* Module: vegas30k.dll
   Function: FUN_011b7450
   Address: 011b7450
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011b7450(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  
  iVar3 = 4;
  bVar5 = true;
  *param_3 = 0;
  piVar2 = param_2;
  piVar4 = &DAT_011dab80;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar5 = *piVar2 == *piVar4;
    piVar2 = piVar2 + 1;
    piVar4 = piVar4 + 1;
  } while (bVar5);
  if (!bVar5) {
    iVar3 = 4;
    bVar5 = true;
    piVar2 = param_2;
    piVar4 = &DAT_011d9a40;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar5 = *piVar2 == *piVar4;
      piVar2 = piVar2 + 1;
      piVar4 = piVar4 + 1;
    } while (bVar5);
    if (!bVar5) {
      return -0x7fffbffe;
    }
  }
  iVar3 = -0x7ff8fff2;
  hMem = GlobalAlloc(0x40,0x18);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 != (LPVOID)0x0) {
    piVar2 = (int *)FUN_011b6d30();
    if (piVar2 != (int *)0x0) {
      iVar3 = FUN_011b6da0();
      if (-1 < iVar3) {
        (**(code **)*piVar2)(piVar2,param_2,param_3);
        return 0;
      }
      (**(code **)(*piVar2 + 0x5c))(1);
    }
  }
  return iVar3;
}


