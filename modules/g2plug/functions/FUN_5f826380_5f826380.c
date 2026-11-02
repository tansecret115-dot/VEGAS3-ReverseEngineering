/* Module: g2plug.dll
   Function: FUN_5f826380
   Address: 5f826380
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f826380(undefined4 *param_1,HWND param_2,UINT param_3,uint param_4)

{
  BYTE BVar1;
  uchar *puVar2;
  BYTE *lpsz;
  uchar local_800 [2048];
  
  puVar2 = (uchar *)FUN_5f8177a0(param_1,param_4);
  if (*puVar2 == '\0') {
    puVar2 = FUN_5f818540(param_1,param_4);
  }
  BVar1 = *puVar2;
  lpsz = puVar2;
  do {
    if (BVar1 == '\0') {
LAB_5f8263eb:
      FUN_5f826220(param_2,(LPCSTR)puVar2,(LPCSTR)0x0,param_3);
      return;
    }
    if ((BVar1 == '%') || (BVar1 == '$')) {
      FUN_5f8254b0(local_800,puVar2,(uint *)&stack0x00000014);
      puVar2 = local_800;
      goto LAB_5f8263eb;
    }
    lpsz = (BYTE *)CharNextA((LPCSTR)lpsz);
    BVar1 = *lpsz;
  } while( true );
}


