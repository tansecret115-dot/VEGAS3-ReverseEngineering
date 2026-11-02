/* Module: erv23260.dll
   Function: FUN_63819000
   Address: 63819000
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_63819000(int *param_1,int *param_2,byte param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = (-(uint)(param_4 < 4) & 0x10) + 0x10;
  if (((param_3 & 1) != 0) && (*param_1 < -iVar1)) {
    *param_1 = -iVar1;
  }
  if (((param_3 & 2) != 0) && (iVar1 < *param_1)) {
    *param_1 = iVar1;
  }
  if (((param_3 & 4) != 0) && (*param_2 < -iVar1)) {
    *param_2 = -iVar1;
  }
  if (((param_3 & 8) != 0) && (iVar1 < *param_2)) {
    *param_2 = iVar1;
  }
  return;
}


