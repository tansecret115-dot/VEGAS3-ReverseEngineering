/* Module: vegas30.exe
   Function: FUN_00469040
   Address: 00469040
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_00469040(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_4;
  
  piVar2 = param_2;
  iVar1 = *param_2;
  iVar3 = _SfList_CreateExZ_32(&param_2,4,0xffffffff,iVar1,0,0,0,0);
  if (-1 < iVar3) {
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        local_4 = *(undefined4 *)(piVar2[2] + iVar3 * 4);
        _SfList_InsertList_16(param_2,0xffffffff,&local_4,1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        FUN_00499f20(param_1,*(undefined4 *)(param_2[2] + iVar3 * 4),&param_2,0);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    return param_2;
  }
  return (int *)0x0;
}


