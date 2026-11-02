/* Module: sfcdi.dll
   Function: FUN_5bf210b0
   Address: 5bf210b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf210b0(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = param_1;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *param_1 = 1;
  param_1[1] = 1;
  param_1[0xe] = 0;
  param_1[4] = 0;
  uVar1 = FUN_5bf21060(param_2);
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[6] = uVar1;
  param_1[0x12] = 0x930;
  return 0;
}


