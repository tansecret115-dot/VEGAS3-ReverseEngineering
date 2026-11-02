/* Module: vegas30k.dll
   Function: FUN_011bc950
   Address: 011bc950
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_011bc950(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  iVar3 = 0;
  if ((*(byte *)(param_1 + 8) & 4) != 0) {
    iVar1 = *(int *)(param_1 + 0x23c);
    iVar3 = (**(code **)(**(int **)(param_1 + 0x218) + 0x28))(*(int **)(param_1 + 0x218));
    if (-1 < iVar3) {
      (**(code **)(**(int **)(param_1 + 0x218) + 0x40))(*(int **)(param_1 + 0x218),0);
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffb;
      if (*(void **)(param_1 + 0x23c) != (void *)0x0) {
        free(*(void **)(param_1 + 0x23c));
      }
      *(undefined4 *)(param_1 + 0x23c) = 0;
      if (*(void **)(param_1 + 0x240) != (void *)0x0) {
        free(*(void **)(param_1 + 0x240));
      }
      uVar4 = 0;
      *(undefined4 *)(param_1 + 0x240) = 0;
      *(undefined4 *)(param_1 + 0x244) = 0;
      *(undefined4 *)(param_1 + 0x248) = 0;
      if (*(int *)(param_1 + 0x2ac) != 0) {
        piVar5 = (int *)(param_1 + 0x24c);
        do {
          piVar2 = (int *)*piVar5;
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
          }
          *piVar5 = 0;
          if ((HANDLE)piVar5[2] != (HANDLE)0x0) {
            CloseHandle((HANDLE)piVar5[2]);
          }
          piVar5[2] = 0;
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 3;
          iVar3 = iVar1;
        } while (uVar4 < *(uint *)(param_1 + 0x2ac));
      }
      *(undefined4 *)(param_1 + 0x2b4) = 0;
      *(undefined4 *)(param_1 + 0x2b0) = 0;
      *(undefined4 *)(param_1 + 0x2ac) = 0;
      if (*(HANDLE *)(param_1 + 700) != (HANDLE)0x0) {
        SetEvent(*(HANDLE *)(param_1 + 700));
        WaitForSingleObject(*(HANDLE *)(param_1 + 0x2c0),0xffffffff);
        CloseHandle(*(HANDLE *)(param_1 + 700));
        CloseHandle(*(HANDLE *)(param_1 + 0x2c0));
        *(undefined4 *)(param_1 + 700) = 0;
        *(undefined4 *)(param_1 + 0x2c0) = 0;
      }
      return iVar3;
    }
  }
  return iVar3;
}


