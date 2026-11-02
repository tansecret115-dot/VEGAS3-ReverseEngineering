/* Module: vegas30k.dll
   Function: SfValidateMPEGAsVCD
   Address: 010111c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfValidateMPEGAsVCD(char *,enum VCDTYPE *) */

long SfValidateMPEGAsVCD(char *param_1,VCDTYPE *param_2)

{
  HANDLE hFile;
  int iVar1;
  int local_28;
  int local_24;
  int local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
                    /* 0x111c0  504  ?SfValidateMPEGAsVCD@@YGJPADPAW4VCDTYPE@@@Z */
  *param_2 = 0;
  hFile = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    iVar1 = FUN_01010b80(hFile,&local_28);
    if (-1 < iVar1) {
      if ((((((local_28 == 0) && (local_18 == 0)) && (local_10 != 0x3ffff)) &&
           ((local_10 != 0 && (local_10 < 0xb3c)))) &&
          ((local_8 == 0 && ((local_4 == 2 && (local_c < 0xc)))))) && (local_24 == 0x160)) {
        if (local_20 == 0xf0) {
          if (local_14 == 4) {
            *param_2 = 1;
          }
        }
        else if ((local_20 == 0x120) && (local_14 == 3)) {
          *param_2 = 2;
        }
      }
      if (*param_2 != 0) {
        SetFilePointer(hFile,0,(PLONG)0x0,0);
        iVar1 = FUN_01010fa0(hFile);
        if (iVar1 != 0) {
          *param_2 = 0;
        }
      }
    }
    CloseHandle(hFile);
  }
  return 0;
}


