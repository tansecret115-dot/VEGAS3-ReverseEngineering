/* Module: sfs4rw.dll
   Function: FUN_004778b0
   Address: 004778b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004778b0(int *param_1,int param_2,uint param_3)

{
  FUN_00477900(param_1,(byte *)(param_1 + 0x45));
  if (((*(byte *)(param_1 + 0x45) & 0x20) == 0) &&
     (FUN_00475b30(param_1,(undefined4 *)"unknown critical chunk"), param_2 == 0)) {
    return;
  }
  if ((param_1[0x18] & 4U) != 0) {
    param_1[0x18] = param_1[0x18] | 8;
  }
  FUN_00475d40(param_1,param_3);
  return;
}


