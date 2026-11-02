/* Module: wmfplug2.dll
   Function: FUN_00425f90
   Address: 00425f90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00425f90(undefined4 *param_1,HWND param_2,UINT param_3,uint param_4)

{
  BYTE BVar1;
  uchar *puVar2;
  BYTE *lpsz;
  uchar local_800 [2048];
  
  puVar2 = (uchar *)FUN_0041ff60(param_1,param_4);
  if (*puVar2 == '\0') {
    puVar2 = FUN_00420d00(param_1,param_4);
  }
  BVar1 = *puVar2;
  lpsz = puVar2;
  do {
    if (BVar1 == '\0') {
LAB_00425ffb:
      FUN_00425e30(param_2,(LPCSTR)puVar2,(LPCSTR)0x0,param_3);
      return;
    }
    if ((BVar1 == '%') || (BVar1 == '$')) {
      FUN_004250c0(local_800,puVar2,(uint *)&stack0x00000014);
      puVar2 = local_800;
      goto LAB_00425ffb;
    }
    lpsz = (BYTE *)CharNextA((LPCSTR)lpsz);
    BVar1 = *lpsz;
  } while( true );
}


