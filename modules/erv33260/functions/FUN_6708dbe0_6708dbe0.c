/* Module: erv33260.dll
   Function: FUN_6708dbe0
   Address: 6708dbe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6708dbe0(undefined1 *param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  
  iVar1 = 4;
  do {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    param_3[3] = param_1[3];
    param_3 = param_3 + param_2;
    iVar1 = iVar1 + -1;
    param_1 = param_1 + 0x10;
  } while (iVar1 != 0);
  return;
}


