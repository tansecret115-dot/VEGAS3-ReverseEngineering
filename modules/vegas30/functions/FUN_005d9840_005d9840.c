/* Module: vegas30.exe
   Function: FUN_005d9840
   Address: 005d9840
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005d9840(int param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = param_4;
  puVar2 = param_3;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = -1;
  }
  FUN_005b83b0(param_1,1);
  if (*(int *)(param_1 + 0x218) == 0) {
    FUN_005b84d0(param_1,1);
    return -0x7fff0001;
  }
  _SfList_AllocItem_12(*(int *)(param_1 + 0x218),8,&param_3);
  *param_3 = 0;
  param_3[1] = 0;
  param_3[1] = param_2;
  iVar4 = _SfList_CreateExZ_32(param_3,8,0xffffffff,0xffffffff,0x40000004,0,0,0);
  if (iVar4 < 0) {
    _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x218),0xffffffff,0xffffffff,0);
  }
  else {
    iVar4 = _SfList_InsertList_16(*(undefined4 *)(param_1 + 0x218),0xffffffff,0,0xffffffff);
  }
  if (-1 < iVar4) {
    iVar1 = **(int **)(param_1 + 0x218);
    if (piVar3 != (int *)0x0) {
      *piVar3 = iVar1 + -1;
    }
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x218) + 8) + -4 + iVar1 * 4);
    }
  }
  FUN_005b84d0(param_1,1);
  return iVar4;
}


