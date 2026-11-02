/* Module: vegas30.exe
   Function: FUN_0047c670
   Address: 0047c670
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0047c670(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_2;
  iVar4 = param_1;
  puVar1 = (undefined4 *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar3 = _SfList_CreateExZ_32(puVar1,4,10,4,0x40000000,0,0,0);
    if (iVar3 < 0) {
      return iVar3;
    }
  }
  else {
    iVar3 = FUN_0047c7d0(param_1,*(undefined4 *)(param_2 + 0x10));
    if (iVar3 != 0) {
      return 1;
    }
  }
  *(int *)(iVar2 + 4) = iVar4;
  param_1 = iVar2;
  iVar4 = _SfList_InsertList_16(*puVar1,param_3,&param_1,1);
  if ((iVar4 < 0) && (*(int *)*puVar1 < 1)) {
    _SfList_Destroy_4((int *)*puVar1);
    *puVar1 = 0;
  }
  return iVar4;
}


