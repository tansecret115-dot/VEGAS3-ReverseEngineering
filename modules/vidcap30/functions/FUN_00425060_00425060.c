/* Module: vidcap30.exe
   Function: FUN_00425060
   Address: 00425060
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00425060(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_8;
  int local_4;
  
  iVar1 = 0;
  if (((*param_1 == 7) && ((param_1[0x52] & 4U) != 0)) &&
     (iVar1 = FUN_00424e80(param_1,&local_8), -1 < iVar1)) {
    uVar3 = local_8 + param_2;
    iVar2 = local_4 + param_3 + (uint)CARRY4(local_8,param_2);
    iVar1 = param_1[0xe7];
    if ((iVar1 <= iVar2) && ((iVar1 < iVar2 || ((uint)param_1[0xe6] < uVar3)))) {
      iVar2 = iVar1;
      uVar3 = param_1[0xe6];
    }
    if ((iVar2 < 1) && (iVar2 < 0)) {
      uVar3 = 0;
      iVar2 = 0;
    }
    iVar1 = FUN_00424ef0(param_1,uVar3,iVar2);
  }
  return iVar1;
}


