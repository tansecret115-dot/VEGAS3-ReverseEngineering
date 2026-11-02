/* Module: sfpaplug.dll
   Function: FUN_004197f0
   Address: 004197f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_004197f0(HWND param_1,UINT param_2,uchar *param_3)

{
  uchar uVar1;
  uchar *lpsz;
  uchar local_800 [2048];
  
  uVar1 = *param_3;
  lpsz = param_3;
  do {
    if (uVar1 == '\0') {
LAB_00419821:
      FUN_00419710(param_1,(LPCSTR)param_3,(LPCSTR)0x0,param_2);
      return;
    }
    if ((uVar1 == '%') || (uVar1 == '$')) {
      FUN_004189a0(local_800,param_3,(uint *)&stack0x00000010);
      param_3 = local_800;
      goto LAB_00419821;
    }
    lpsz = (uchar *)CharNextA((LPCSTR)lpsz);
    uVar1 = *lpsz;
  } while( true );
}


