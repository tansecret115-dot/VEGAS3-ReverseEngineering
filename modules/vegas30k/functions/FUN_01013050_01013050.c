/* Module: vegas30k.dll
   Function: FUN_01013050
   Address: 01013050
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01013050(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1;
  iVar1 = *(int *)(param_2 + 0x34c);
  iVar3 = 0;
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    iVar3 = **(int **)(param_1 + 0x18);
  }
  if (iVar3 < *(int *)(iVar1 + 0xc)) {
    iVar3 = _SfList_CreateExZ_32(&param_1,4,0xffffffff,0xffffffff,0x40000004,0,0,0);
    if (iVar3 < 0) {
      return;
    }
    iVar3 = _SfList_InsertList_16
                      (*(undefined4 *)(iVar2 + 0x18),*(int *)(iVar1 + 0xc) + -1,&param_1,1);
    if (iVar3 < 0) {
      return;
    }
  }
  iVar3 = *(int *)(iVar2 + 0x18);
  _SfList_InsertList_16
            (*(undefined4 *)
              ((*(int *)(iVar1 + 0xc) + -1) * *(int *)(iVar3 + 4) + *(int *)(iVar3 + 8)),0xffffffff,
             &param_2,1);
  return;
}


