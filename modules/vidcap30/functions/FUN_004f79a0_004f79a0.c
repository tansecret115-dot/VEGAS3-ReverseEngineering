/* Module: vidcap30.exe
   Function: FUN_004f79a0
   Address: 004f79a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004f79a0(HWND param_1,LPARAM param_2,LONG *param_3)

{
  int *piVar1;
  LRESULT LVar2;
  LONG LVar3;
  int iVar4;
  
  piVar1 = (int *)FUN_004f6ec0(param_1,param_2);
  *param_3 = (LONG)piVar1;
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (*piVar1 + -1 < 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)piVar1[2];
  }
  if (iVar4 == 0) {
    return 0;
  }
  LVar2 = SendMessageA(param_1,0x110a,3,param_2);
  if (LVar2 == 0) {
    LVar3 = GetWindowLongA(param_1,-0x15);
    *param_3 = LVar3;
    return *(undefined4 *)(iVar4 + 4);
  }
  LVar3 = FUN_004f6ec0(param_1,LVar2);
  *param_3 = LVar3;
  return *(undefined4 *)(iVar4 + 4);
}


