/* Module: vidcap30.exe
   Function: FUN_0040d9a0
   Address: 0040d9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040d9a0(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar2 = param_3;
  iVar4 = *(int *)(*(int *)(param_1 + 0x8c) + 4) * param_3 + *(int *)(*(int *)(param_1 + 0x8c) + 8);
  piVar1 = (int *)(iVar4 + 0x2c);
  if (*(int *)(iVar4 + 0x2c) == 0) {
    iVar3 = _SfList_CreateExZ_32(piVar1,4,0x10,0x10,0,0,0,0);
    if (iVar3 < 0) {
      return iVar2;
    }
    param_3 = *(undefined4 *)(iVar4 + 0x28);
    _SfList_InsertList_16(*piVar1,0,&param_3,1);
  }
  param_3 = param_2;
  _SfList_InsertList_16(*piVar1,0,&param_3,1);
  uVar5 = 0;
  if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
    uVar5 = *(undefined4 *)*piVar1;
  }
  *(undefined4 *)(iVar4 + 0x30) = uVar5;
  *(undefined4 *)(iVar4 + 0x28) = param_2;
  FUN_0040d850(param_1,iVar2);
  return iVar2;
}


