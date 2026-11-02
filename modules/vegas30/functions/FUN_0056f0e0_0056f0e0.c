/* Module: vegas30.exe
   Function: FUN_0056f0e0
   Address: 0056f0e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0056f0e0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_4;
  
  local_4 = param_1;
  iVar3 = _SfList_CreateExZ_32((undefined4 *)(param_1 + 0x740),4,0xffffffff,0xffffffff,0,0,0,0);
  iVar5 = 0;
  iVar1 = **(int **)(param_1 + 0x2b0);
  if (0 < iVar1) {
    do {
      if (iVar3 < 0) {
        return;
      }
      piVar2 = *(int **)(param_1 + 0x2b0);
      if (piVar2 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar2;
      }
      if ((iVar5 < 0) || (iVar4 + -1 < iVar5)) {
        local_4 = 0;
      }
      else {
        local_4 = *(int *)(piVar2[2] + iVar5 * 4);
      }
      if ((*(byte *)(local_4 + 0x1c) & 1) != 0) {
        iVar3 = _SfList_InsertList_16(*(undefined4 *)(param_1 + 0x740),0xffffffff,&local_4,1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  return;
}


