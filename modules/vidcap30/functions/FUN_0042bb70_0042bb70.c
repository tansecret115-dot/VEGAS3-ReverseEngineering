/* Module: vidcap30.exe
   Function: FUN_0042bb70
   Address: 0042bb70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042bb70(int *param_1,LPCSTR param_2)

{
  int iVar1;
  
  if (*param_1 == 8) {
    iVar1 = lstrcmpA((LPCSTR)(param_1 + 0x102),param_2);
    if (iVar1 != 0) {
      lstrcpynA((LPSTR)(param_1 + 0x102),param_2,0x104);
      *(undefined1 *)((int)param_1 + 0x50b) = 0;
    }
  }
  return;
}


