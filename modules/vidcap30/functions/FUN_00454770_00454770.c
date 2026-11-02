/* Module: vidcap30.exe
   Function: FUN_00454770
   Address: 00454770
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00454770(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)(param_1 + 0x30);
  iVar3 = **(int **)(param_1 + 0x2c);
  if (param_3 == 0) {
    if (param_2 < 0) {
      iVar3 = 0;
    }
    else if (param_2 <= iVar3) {
      iVar3 = param_2;
    }
    *(int *)(param_1 + 0x30) = iVar3;
  }
  else {
    iVar2 = 0;
    if (0 < iVar3) {
      puVar4 = (undefined4 *)(*(int **)(param_1 + 0x2c))[2];
      do {
        if (*(int *)*puVar4 == param_2) {
          *(int *)(param_1 + 0x30) = iVar2;
          break;
        }
        iVar2 = iVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar2 < iVar3);
    }
  }
  if (*(int *)(param_1 + 0x30) != iVar1) {
    FUN_004544d0(param_1,0);
  }
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)(param_1 + 0x14),1);
  }
  return;
}


