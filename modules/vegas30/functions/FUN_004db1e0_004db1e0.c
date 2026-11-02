/* Module: vegas30.exe
   Function: FUN_004db1e0
   Address: 004db1e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004db1e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1;
  if (param_1 == 0) {
    return 0;
  }
  FUN_004db160(param_1);
  iVar3 = _SfList_CreateExZ_32(&param_1,4,0xffffffff,0xffffffff,&DAT_80000002,0,0,0);
  if (-1 < iVar3) {
    FUN_005b8780(iVar2,param_1);
    if (((DAT_0064762c != 0) && (*(int *)(DAT_0064762c + 0x70) != 0)) &&
       (iVar1 = *(int *)(*(int *)(DAT_0064762c + 0x70) + 0xf1c), iVar1 != 0)) {
      FUN_004dadf0(iVar2,iVar1,0);
    }
    FUN_004db260(iVar2);
  }
  return iVar3;
}


