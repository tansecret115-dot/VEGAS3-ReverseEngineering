/* Module: mcplugrw.dll
   Function: FUN_0040aa60
   Address: 0040aa60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040aa60(HWND param_1,int param_2)

{
  uint uVar1;
  uchar *lpsz;
  uchar local_a00 [2560];
  
  SetWindowLongA(param_1,-0x15,param_2);
  FUN_0041ff20(param_1,(HFONT)0x0);
  FUN_00429fa0(param_1,(HWND)0x0,(int *)0x0,0x8001);
  uVar1 = FUN_00406330(*(int *)(param_2 + 0x170),*(int *)(param_2 + 0x174),*(int *)(param_2 + 0x240)
                      );
  if ((uVar1 & 0x1000) == 0) {
    FUN_0041f9f0(DAT_004a811c,0x273a);
    FUN_0041f9f0(DAT_004a811c,0x2739);
    FUN_0041f9f0(DAT_004a811c,0x2738);
    FUN_00420fe0(local_a00,(BYTE *)"%s%s%s");
  }
  else {
    FUN_0041f9f0(DAT_004a811c,0x273a);
    FUN_0041f9f0(DAT_004a811c,0x2737);
    FUN_00420fe0(local_a00,"%s%s");
  }
  lpsz = local_a00;
  do {
    if (*lpsz == '\n') {
      *lpsz = '\r';
      lpsz = lpsz + 1;
      *lpsz = '\n';
    }
    lpsz = (uchar *)CharNextA((LPCSTR)lpsz);
  } while (*lpsz != '\0');
  SetDlgItemTextA(param_1,0x4d1,(LPCSTR)local_a00);
  return 1;
}


