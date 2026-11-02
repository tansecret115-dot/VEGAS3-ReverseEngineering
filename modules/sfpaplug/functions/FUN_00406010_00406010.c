/* Module: sfpaplug.dll
   Function: FUN_00406010
   Address: 00406010
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00406010(int *param_1,LPWSTR param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  iVar1 = FUN_00406470((int)param_1);
  if (-1 < iVar1) {
    if (param_1[0x9c] == 0) {
      iVar1 = FUN_00406b00(param_1);
    }
    if (*(int *)(param_1[0x9c] + 0x20) == 0) {
      iVar1 = FUN_004068b0(param_1,0);
    }
    if (((-1 < iVar1) && (param_1[0x9c] != 0)) &&
       (iVar1 = *(int *)(param_1[0x9c] + 0x20), iVar1 != 0)) {
      FUN_004073f0(iVar1,param_2,param_3,param_5);
    }
  }
  return;
}


