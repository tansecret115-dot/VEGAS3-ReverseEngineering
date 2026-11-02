/* Module: vidcap30.exe
   Function: FUN_00454e50
   Address: 00454e50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00454e50(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  tagPOINT local_8;
  
  local_8.x = *(int *)(param_2 + 0x14);
  local_8.y = *(int *)(param_2 + 0x18);
  iVar1 = **(int **)(param_1 + 0x2c);
  ScreenToClient(*(HWND *)(param_2 + 0xc),&local_8);
  iVar3 = 0;
  if (0 < iVar1) {
    piVar4 = *(int **)(*(int *)(param_1 + 0x2c) + 8);
    do {
      puVar2 = (undefined4 *)*piVar4;
      if (((((int)puVar2[5] <= local_8.x) && (local_8.x < (int)puVar2[7])) &&
          ((int)puVar2[6] <= local_8.y)) && (local_8.y < (int)puVar2[8])) {
        *(undefined4 *)(param_2 + 8) = *puVar2;
        return;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < iVar1);
  }
  return;
}


