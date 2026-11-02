/* Module: vegas30.exe
   Function: FUN_004c33d0
   Address: 004c33d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c33d0(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc38);
  piVar1 = (int *)(param_1 + 0xc38);
  if (param_2 != iVar2) {
    if (iVar2 != 0) {
      _SfList_DeleteList_16(iVar2,0,0xffffffff,0);
    }
    if ((*(uint *)(param_1 + 0x18) & 0x800000) == 0) {
      _SfList_Destroy_4(*piVar1);
    }
    *piVar1 = param_2;
    *(uint *)(param_1 + 0x18) = (param_3 & 1) << 0x17 | *(uint *)(param_1 + 0x18) & 0xff7fffff;
  }
  if (*piVar1 == 0) {
    _SfList_CreateExZ_32(piVar1,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xff7fffff;
  }
  _SfList_Sort_12(*piVar1,0,&LAB_004baab0);
  FUN_004ba9e0(param_1);
  FUN_004530a0(param_1,0x3ff);
  return;
}


