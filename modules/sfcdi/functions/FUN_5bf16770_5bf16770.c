/* Module: sfcdi.dll
   Function: FUN_5bf16770
   Address: 5bf16770
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf16770(HSFCD__ *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uchar local_100 [256];
  
  if (param_2 == 4) {
    uVar2 = 0xfb;
  }
  else {
    iVar1 = cdr_GetTestMode(param_1);
    if (iVar1 == 0) {
      uVar2 = 0xfd;
    }
    else {
      uVar2 = 0xfc;
    }
  }
  FUN_5bf27f10(DAT_5bf65fc4,uVar2,(LPSTR)local_100,0x100);
  iVar1 = FUN_5bf25c20((HWND)0x0,0x114,local_100);
  return 2 - (uint)(iVar1 != 6);
}


