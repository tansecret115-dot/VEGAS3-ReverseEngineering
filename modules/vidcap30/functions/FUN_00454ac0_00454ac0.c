/* Module: vidcap30.exe
   Function: FUN_00454ac0
   Address: 00454ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00454ac0(int param_1,int param_2,LPCSTR param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 < **(int **)(param_1 + 0x2c)) {
    iVar1 = *(int *)((*(int **)(param_1 + 0x2c))[2] + param_2 * 4);
    iVar2 = lstrcmpA(*(LPCSTR *)(iVar1 + 4),param_3);
    if (iVar2 != 0) {
      uVar3 = FUN_00454440(iVar1,param_3);
      FUN_004544d0(param_1,1);
      if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
        InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)(param_1 + 0x14),1);
      }
      return uVar3;
    }
  }
  return 0;
}


