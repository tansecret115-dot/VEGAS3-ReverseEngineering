/* Module: sftrans1.dll
   Function: FUN_004ca310
   Address: 004ca310
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ca310(int param_1,LPVOID param_2,int param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  HGLOBAL hMem;
  LPVOID local_14;
  LPVOID local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  if (param_1 == 0) {
    return -0x7ff8ffa9;
  }
  piVar1 = (int *)(param_1 + 0x140);
  if ((*(int *)(param_1 + 0x140) != 0) ||
     (iVar3 = FUN_004dd740(piVar1,0x14,0xffffffff,0xffffffff,0x80000004,0,0,0), -1 < iVar3)) {
    piVar2 = (int *)*piVar1;
    iVar3 = 0;
    if (0 < *piVar2) {
      do {
        iVar4 = piVar2[1] * iVar3 + piVar2[2];
        if ((*(uint *)(iVar4 + 0xc) <= param_4) && (param_4 < *(uint *)(iVar4 + 0x10))) {
          return -0x7ff8ffa9;
        }
        if ((*(uint *)(iVar4 + 0xc) <= param_3 + param_4) &&
           (param_3 + param_4 < *(uint *)(iVar4 + 0x10))) {
          return -0x7ff8ffa9;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *piVar2);
    }
    local_4 = param_3 + param_4;
    local_c = param_3;
    local_8 = param_4;
    local_14 = param_2;
    if (*(int *)(param_1 + 0x138) != 0) {
      hMem = GlobalAlloc(0x40,param_3 * 4);
      param_2 = GlobalLock(hMem);
    }
    if (param_2 == (LPVOID)0x0) {
      return -0x7ff8fff2;
    }
    local_10 = param_2;
    iVar3 = FUN_004dc110(*piVar1,0xffffffff,&local_14,1);
  }
  return iVar3;
}


