/* Module: aviplug.dll
   Function: FUN_5f977380
   Address: 5f977380
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f977380(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 5;
  piVar1 = (int *)(&DAT_5f9e6e40 + param_1 * 0x14);
  do {
    *param_3 = *(int *)(((int)&DAT_5f9e6d64 - (int)(&DAT_5f9e6e40 + param_1 * 0x14)) + (int)piVar1)
               + *(int *)(&DAT_5f9e7368 + param_2 * 4);
    iVar2 = iVar2 + -1;
    param_3[1] = *piVar1 + *(int *)(&DAT_5f9e73d4 + param_2 * 4);
    piVar1 = piVar1 + 1;
    param_3 = param_3 + 2;
  } while (iVar2 != 0);
  return;
}


