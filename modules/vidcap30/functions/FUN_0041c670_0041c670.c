/* Module: vidcap30.exe
   Function: FUN_0041c670
   Address: 0041c670
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041c670(HWND param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  CHAR local_20 [32];
  
  iVar1 = *param_2;
  GetDlgItemTextA(param_1,0x494,local_20,0x20);
  uVar2 = _SfTextToDWordToken_8(local_20,0);
  if (20000 < uVar2) {
    uVar2 = 20000;
  }
  *(uint *)(iVar1 + 0xf6c) = uVar2;
  GetDlgItemTextA(param_1,0x472,local_20,0x20);
  uVar2 = _SfTextToDWordToken_8(local_20,0);
  if (600 < uVar2) {
    uVar2 = 600;
  }
  *(uint *)(iVar1 + 0xf70) = uVar2;
  return;
}


