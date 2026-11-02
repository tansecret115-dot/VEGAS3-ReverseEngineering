/* Module: vidpcore.dll
   Function: FUN_5de96870
   Address: 5de96870
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5de96870(short *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  if (param_2 == 4) {
    iVar2 = 0;
    do {
      *(char *)(iVar2 + (int)param_1) = -1 - (char)iVar2;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x100);
    return;
  }
  iVar2 = 0;
  do {
    sVar1 = (short)iVar2;
    iVar2 = iVar2 + 1;
    *param_1 = -1 - sVar1;
    param_1 = param_1 + 1;
  } while (iVar2 < 0x10000);
  return;
}


