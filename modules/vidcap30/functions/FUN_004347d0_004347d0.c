/* Module: vidcap30.exe
   Function: FUN_004347d0
   Address: 004347d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004347d0(int param_1,LPCSTR param_2)

{
  int iVar1;
  
  iVar1 = lstrcmpA(param_2,"No Capture Device");
  if (iVar1 != 0) {
    lstrcpynA(&DAT_005bb32c,param_2,0x104);
    DAT_005bb42f = 0;
  }
  lstrcpynA((LPSTR)(param_1 + 0x17ac),param_2,0x104);
  *(undefined1 *)(param_1 + 0x18af) = 0;
  return;
}


