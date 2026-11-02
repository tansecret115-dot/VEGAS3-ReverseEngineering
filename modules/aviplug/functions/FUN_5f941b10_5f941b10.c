/* Module: aviplug.dll
   Function: FUN_5f941b10
   Address: 5f941b10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f941b10(int param_1,int param_2,int param_3,int *param_4,int param_5,undefined4 *param_6)

{
  int iVar1;
  int *piVar2;
  HGLOBAL hMem;
  int *piVar3;
  int *piVar4;
  
  *param_6 = 0;
  piVar3 = (int *)0x0;
  iVar1 = *(int *)(param_1 + 0x674);
  piVar4 = (int *)(param_1 + 0x634);
  if (iVar1 != 0) goto LAB_5f941bfc;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x63c));
  piVar2 = (int *)*piVar4;
  if (piVar4 != piVar2) {
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    *piVar2 = (int)piVar2;
    piVar3 = piVar2;
    if ((int *)*piVar4 == piVar4) {
      ResetEvent(*(HANDLE *)(param_1 + 0x654));
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x63c));
  if (piVar3 == (int *)0x0) {
    if (*(int *)(param_1 + 0x658) < *(int *)(param_1 + 0x65c)) {
      hMem = GlobalAlloc(0x42,0x30);
      piVar3 = GlobalLock(hMem);
      if (piVar3 != (int *)0x0) goto LAB_5f941bbe;
      if (*(int *)(param_1 + 0x658) == 0) {
        *param_6 = 0;
        return -0x7ff8fff2;
      }
    }
    piVar3 = FUN_5f98fe50(piVar4,0xffffffff);
    if (piVar3 == (int *)0x0) {
      *param_6 = 0;
      return -0x7ffb1fd4;
    }
  }
LAB_5f941bbe:
  piVar3[2] = param_2;
  piVar3[4] = param_3;
  piVar3[5] = 1;
  piVar3[7] = 1;
  piVar3[6] = 0;
  piVar3[9] = param_5;
  piVar3[8] = (int)param_4;
  piVar3[10] = (int)piVar4;
  piVar3[0xb] = (int)FUN_5f941ad0;
  (**(code **)(*param_4 + 4))(param_4);
LAB_5f941bfc:
  *param_6 = piVar3;
  return iVar1;
}


