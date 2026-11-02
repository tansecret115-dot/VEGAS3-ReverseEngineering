/* Module: vidcap30.exe
   Function: FUN_004a0110
   Address: 004a0110
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_004a0110(int param_1,LPCSTR param_2)

{
  int iVar1;
  ushort *puVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar1 = **(int **)(param_1 + 0xc);
  if (0 < iVar1) {
    do {
      puVar2 = *(ushort **)(*(int *)(*(int *)(param_1 + 0xc) + 8) + iVar5 * 4);
      uVar3 = 0;
      if (puVar2[1] != 0) {
        uVar3 = *puVar2;
      }
      iVar4 = lstrcmpiA(param_2,(LPCSTR)(uVar3 + 4 + (int)puVar2));
      if (iVar4 == 0) {
        return iVar5;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  return -1;
}


