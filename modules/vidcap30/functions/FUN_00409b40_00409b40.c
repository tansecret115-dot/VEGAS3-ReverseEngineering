/* Module: vidcap30.exe
   Function: FUN_00409b40
   Address: 00409b40
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT FUN_00409b40(int param_1,UINT param_2)

{
  int iVar1;
  LRESULT LVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = 0;
  piVar4 = (int *)(param_1 + 0x6c);
  do {
    if (*piVar4 != 0) {
      iVar1 = FUN_00409b00(*piVar4);
      if (iVar1 != 0) {
        LVar2 = SendMessageA(*(HWND *)(*(int *)(param_1 + 0x6c + uVar3 * 4) + 8),param_2,0,0);
        return LVar2;
      }
    }
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (uVar3 < 7);
  return 0;
}


