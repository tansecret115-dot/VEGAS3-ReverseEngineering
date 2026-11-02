/* Module: erv33260.dll
   Function: FUN_6708b450
   Address: 6708b450
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6708b450(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 4;
  do {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    param_2 = param_2 + 0x10;
    param_1 = param_1 + param_3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


