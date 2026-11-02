/* Module: sfpaplug.dll
   Function: FUN_004390a0
   Address: 004390a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004390a0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  WCHAR aWStack_240 [4];
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  int *piStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  LPSTR pCStack_34;
  int iStack_30;
  
  uStack_210 = 0;
  uStack_214 = 0;
  uStack_218 = 0;
  uStack_21c = 0;
  piStack_220 = param_3;
  uStack_224 = 0x4390bc;
  (**(code **)(*param_3 + 0x14))();
  uStack_224 = 0;
  uStack_228 = 0;
  uStack_22c = 0;
  uStack_230 = 8;
  iVar1 = (**(code **)(*param_3 + 0x14))();
  if (-1 < iVar1) {
    aWStack_240[2] = L'\0';
    aWStack_240[3] = L'\0';
    aWStack_240[0] = L'Ȉ';
    aWStack_240[1] = L'\0';
    iVar1 = (**(code **)(*param_3 + 0xc))(param_3,&uStack_230);
    if (-1 < iVar1) {
      if ((&stack0x00000000 == (undefined1 *)0x240) || (aWStack_240[0] != L'\0')) {
        WideCharToMultiByte(0,0,aWStack_240,-1,pCStack_34,iStack_30,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (pCStack_34 != (LPSTR)0x0) {
        *pCStack_34 = '\0';
      }
      pCStack_34[iStack_30 + -1] = '\0';
    }
    (**(code **)(*param_3 + 0x14))(param_3,0,0,0,0);
  }
  return iVar1;
}


