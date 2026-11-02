/* Module: vegas30k.dll
   Function: FUN_01178670
   Address: 01178670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01178670(undefined4 param_1,int *param_2,undefined4 param_3)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  
  iVar3 = 4;
  bVar5 = true;
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
    piVar4 = &DAT_011d9d80;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar5 = *piVar2 == *piVar4;
      piVar2 = piVar2 + 1;
      piVar4 = piVar4 + 1;
    } while (bVar5);
    if (!bVar5) {
      return 0x80004002;
    }
  }
  hMem = GlobalAlloc(0x40,0x218);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 != (LPVOID)0x0) {
    piVar2 = (int *)FUN_011767c0();
    if (piVar2 != (int *)0x0) {
      iVar3 = FUN_011769d0();
      if (iVar3 != 0) {
        (**(code **)*piVar2)(piVar2,param_2,param_3);
        return 0;
      }
      (**(code **)(*piVar2 + 0x110))(1);
    }
  }
  return 0x8007000e;
}


