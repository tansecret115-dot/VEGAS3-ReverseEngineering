/* Module: vidcap30.exe
   Function: FUN_004f2a40
   Address: 004f2a40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f2a40(int param_1,int param_2,int param_3)

{
  LRESULT LVar1;
  int *piVar2;
  int iVar3;
  HWND local_c;
  int local_8;
  undefined4 local_4;
  
  local_8 = param_3;
  local_4 = *(undefined4 *)(param_2 + 0x10 + param_3 * 4);
  local_c = *(HWND *)(param_1 + 0x24);
  SendMessageA(local_c,0x1030,(WPARAM)&local_c,0x4f2ac0);
  LVar1 = SendMessageA(local_c,0x1004,0,0);
  iVar3 = 0;
  if (0 < LVar1) {
    do {
      piVar2 = (int *)FUN_004f3c20(local_c,iVar3);
      if (piVar2 != (int *)0x0) {
        *piVar2 = iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < LVar1);
  }
  return;
}


