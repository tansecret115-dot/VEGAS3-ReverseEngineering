/* Module: sfcd.cdd
   Function: FUN_00403890
   Address: 00403890
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00403890(HSFCD__ *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(param_1 + 0x160);
  *(undefined4 *)(iVar1 + 0x1e0) = 0;
  uVar2 = FUN_00402e70(param_1,0x23,&local_8,8);
  if (uVar2 == 0) {
    *(undefined4 *)(iVar1 + 0x1e4) = local_8;
    *(undefined4 *)(iVar1 + 0x1e8) = local_4;
    *(undefined4 *)(iVar1 + 0x1e0) = 1;
  }
  return;
}


