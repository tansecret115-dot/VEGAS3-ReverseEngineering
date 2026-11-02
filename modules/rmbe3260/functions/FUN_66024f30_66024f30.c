/* Module: rmbe3260.dll
   Function: FUN_66024f30
   Address: 66024f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66024f30(int param_1,int *param_2,undefined4 *param_3)

{
  if ((param_2 == (int *)0x0) || (param_3 == (undefined4 *)0x0)) {
    return 0x80004003;
  }
  if ((*(int *)(param_1 + 0x56) != 0) && (*(int *)(param_1 + 0x5a) != 0)) {
    *param_2 = *(int *)(param_1 + 0x56);
    *param_3 = *(undefined4 *)(param_1 + 0x5a);
    return 0;
  }
  *param_2 = *(int *)(param_1 + 0x4e);
  *param_3 = *(undefined4 *)(param_1 + 0x52);
  return 0;
}


