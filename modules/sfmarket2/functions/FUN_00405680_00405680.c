/* Module: sfmarket2.dll
   Function: FUN_00405680
   Address: 00405680
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00405680(int param_1)

{
  int iVar1;
  uchar *puVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = InternetAttemptConnect(0);
    if (iVar1 == 0) {
      PostMessageA(*(HWND *)(param_1 + 0xc),0x1090,param_1 + 0x18,0);
      return 0;
    }
    puVar2 = (uchar *)FUN_004226d0(DAT_004a9c94,0x2c0);
    FUN_00424f30(*(HWND *)(param_1 + 0xc),0x10,puVar2);
  }
  return 0x80004005;
}


