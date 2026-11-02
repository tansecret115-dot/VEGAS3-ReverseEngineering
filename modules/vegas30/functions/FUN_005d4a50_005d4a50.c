/* Module: vegas30.exe
   Function: FUN_005d4a50
   Address: 005d4a50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005d4a50(HWND param_1,int param_2)

{
  uint uVar1;
  CHAR local_200 [512];
  
  GetDlgItemTextA(param_1,0x45f,local_200,0x200);
  FUN_005d48c0(local_200,param_2,0);
  GetDlgItemTextA(param_1,0x5dc,local_200,0x200);
  uVar1 = _SfTextToDWordToken_8(local_200,0);
  *(uint *)(param_2 + 0x104) = uVar1;
  if ((uVar1 == 0) || (99 < uVar1)) {
    *(undefined4 *)(param_2 + 0x104) = 1;
  }
  return;
}


