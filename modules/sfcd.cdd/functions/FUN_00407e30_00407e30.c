/* Module: sfcd.cdd
   Function: FUN_00407e30
   Address: 00407e30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00407e30(HSFCD__ *param_1,int param_2)

{
  int iVar1;
  uint local_2c [6];
  uint local_14;
  
  *(undefined4 *)(param_2 + 0x18) = 95000;
  iVar1 = FUN_0041c6f0(param_1,local_2c);
  if (((*(int *)(param_2 + 4) == 0) && (iVar1 == 0)) && ((local_2c[0] & 2) != 0)) {
    *(uint *)(param_2 + 0x18) =
         *(int *)(param_2 + 0x18) + ((local_14 / 0x4b) * 0x7d & 0x1fffffff) * 4;
  }
  return iVar1;
}


