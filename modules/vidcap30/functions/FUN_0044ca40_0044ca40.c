/* Module: vidcap30.exe
   Function: FUN_0044ca40
   Address: 0044ca40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0044ca40(undefined4 param_1,undefined4 param_2,undefined4 param_3,code *param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0044c5f0(param_1);
  iVar3 = 1;
  if (param_4 != (code *)0x0) {
    (*param_4)(1,param_5);
  }
  iVar2 = FUN_0044cae0(param_1);
  if (iVar2 == 3) {
    FUN_0044fb60(param_1);
  }
  else {
    if (iVar2 == 4) {
      iVar3 = FUN_0044f970(param_1,param_3,param_2);
    }
    else {
      if (iVar2 != 5) goto LAB_0044ca8b;
      iVar3 = FUN_0044fa10(param_1,param_3,param_2);
    }
    if (iVar3 == 0) {
      return 0;
    }
  }
LAB_0044ca8b:
  iVar2 = _SfList_FindSpecificItemRange_16(*(undefined4 *)(iVar1 + 0x43c),0,0xffffffff,param_1);
  if (-1 < iVar2) {
    _SfList_DeleteList_16(*(undefined4 *)(iVar1 + 0x43c),iVar2,1,0);
  }
  FUN_0044c8a0(param_1);
  return iVar3;
}


