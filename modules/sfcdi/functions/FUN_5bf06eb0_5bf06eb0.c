/* Module: sfcdi.dll
   Function: FUN_5bf06eb0
   Address: 5bf06eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf06eb0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_5bf66624 <= *(int *)(param_1 + 4)) {
    return 0x8004e0c0;
  }
  iVar2 = *(int *)(param_1 + 4) * 0x6c;
  puVar1 = (undefined4 *)(iVar2 + 0x68 + DAT_5bf66628);
  *(undefined4 *)(iVar2 + 4 + DAT_5bf66628) = 100;
  (*(code *)*puVar1)(*(undefined4 *)(iVar2 + DAT_5bf66628),1,param_1,iVar2 + 4 + DAT_5bf66628);
  return 0;
}


