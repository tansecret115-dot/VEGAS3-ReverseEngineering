/* Module: vidcap30.exe
   Function: FUN_00434850
   Address: 00434850
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00434850(int param_1,LPCSTR param_2)

{
  int iVar1;
  
  iVar1 = lstrcmpA(param_2,"No Capture Device");
  if (iVar1 != 0) {
    lstrcpynA(&DAT_005bb228,param_2,0x104);
    DAT_005bb32b = 0;
  }
  lstrcpynA((LPSTR)(param_1 + 0x19b4),param_2,0x104);
  *(undefined1 *)(param_1 + 0x1ab7) = 0;
  return;
}


