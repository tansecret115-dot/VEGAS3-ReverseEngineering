/* Module: aviplug.dll
   Function: FUN_5f977270
   Address: 5f977270
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f977270(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = &DAT_5f9e6d50;
  do {
    piVar1 = piVar3 + param_2 * 5 + 0x78;
    iVar2 = *piVar3;
    piVar3 = piVar3 + 1;
    *param_3 = *piVar1 + iVar2;
    param_3[1] = piVar3[param_1 * 5 + 9] + piVar3[param_2 * 5 + 0xfe];
    param_3 = param_3 + 2;
  } while ((int)piVar3 < 0x5f9e6d64);
  return;
}


