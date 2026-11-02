/* Module: vegas30.exe
   Function: FUN_0048ca50
   Address: 0048ca50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0048ca50(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_8 [2];
  
  iVar1 = param_2;
  *param_3 = 0;
  *param_4 = 0;
  iVar2 = _SfList_CreateExZ_32(&param_2,8,*(undefined4 *)(param_2 + 0x10),0x10,4,0,0,0);
  if (-1 < iVar2) {
    uVar3 = *(uint *)(iVar1 + 8);
    if (uVar3 < *(int *)(iVar1 + 0x10) + uVar3) {
      do {
        local_8[0] = *(int *)(*(int *)(*(int *)(param_1 + 0x134) + 8) + uVar3 * 4);
        if (local_8[0] != 0) {
          local_8[1] = 0;
          iVar2 = _SfList_InsertList_16(param_2,0xffffffff,local_8,1);
          if (-1 < iVar2) {
            *param_4 = *param_4 + 1;
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)(*(int *)(iVar1 + 8) + *(int *)(iVar1 + 0x10)));
    }
    *param_3 = param_2;
  }
  return;
}


