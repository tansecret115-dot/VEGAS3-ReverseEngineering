/* Module: vidcap30.exe
   Function: FUN_00441920
   Address: 00441920
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00441920(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if (DAT_005bba94 == 0) {
    iVar1 = _SfList_MoveRange_16
                      (*(undefined4 *)(*(int *)(DAT_005ba4c0 + 0x6c) + 0x1c68),param_1,param_2,1);
    if (-1 < iVar1) {
      DAT_005ba50c = DAT_005ba50c | 0x200;
    }
  }
  return;
}


