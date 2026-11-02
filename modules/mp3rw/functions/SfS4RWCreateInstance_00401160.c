/* Module: mp3rw.dll
   Function: SfS4RWCreateInstance
   Address: 00401160
   Source: Ghidra pseudocode (Stage 10 batch) */


int SfS4RWCreateInstance(int param_1,int *param_2,undefined4 *param_3)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
                    /* 0x1160  1  SfS4RWCreateInstance */
  *param_3 = 0;
  if (param_1 != 0) {
    return -0x7ffbfef0;
  }
  iVar3 = 4;
  bVar4 = true;
  piVar2 = &DAT_00490698;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar4 = *piVar2 == *param_2;
    piVar2 = piVar2 + 1;
    param_2 = param_2 + 1;
  } while (bVar4);
  if (!bVar4) {
    return -0x7fffbffe;
  }
  hMem = GlobalAlloc(0x40,0x594);
  puVar1 = GlobalLock(hMem);
  if ((puVar1 != (undefined4 *)0x0) && (piVar2 = FUN_00401250(puVar1), piVar2 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar2 + 0xc))(piVar2);
    if (-1 < iVar3) {
      *param_3 = piVar2;
      return iVar3;
    }
    (**(code **)(*piVar2 + 8))(piVar2);
    return iVar3;
  }
  return -0x7ff8fff2;
}


