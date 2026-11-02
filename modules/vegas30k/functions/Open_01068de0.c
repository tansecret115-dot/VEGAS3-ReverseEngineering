/* Module: vegas30k.dll
   Function: Open
   Address: 01068de0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::Open(char const *,unsigned long,class CSfArchiveProgress *) */

long CArchive2::Open(char *param_1,ulong param_2,CSfArchiveProgress *param_3)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined4 in_stack_00000010;
  LPSTR local_20c;
  uchar local_208 [260];
  CHAR local_104 [260];
  
                    /* 0x68de0  254  ?Open@CArchive2@@QAGJPBDKPAVCSfArchiveProgress@@@Z */
  GetFullPathNameA((LPCSTR)param_2,0x104,(LPSTR)local_208,&local_20c);
  _SfGetRootPathFromFilePath_12(local_208,local_104,0x104);
  GetVolumeInformationA
            (local_104,(LPSTR)0x0,0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,param_1 + 0x8b8,0x80);
  *(undefined4 *)(param_1 + 0x20) = in_stack_00000010;
  param_1[0x8a0] = '\0';
  param_1[0x8a1] = '\0';
  param_1[0x8a2] = '\0';
  param_1[0x8a3] = '\0';
  param_1[0x8a4] = '\0';
  param_1[0x8a5] = '\0';
  param_1[0x8a6] = '\0';
  param_1[0x8a7] = '\0';
  *(CSfArchiveProgress **)(param_1 + 0x24) = param_3;
  pcVar3 = param_1 + 0x30;
  for (iVar2 = 400; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  param_1[0x68] = '\0';
  _mbscpy((uchar *)(param_1 + 0x678),local_208);
  switch(param_3) {
  case (CSfArchiveProgress *)0x0:
    lVar1 = FUN_010690e0(local_208);
    return lVar1;
  case (CSfArchiveProgress *)0x1:
    lVar1 = FUN_01069160(local_208);
    return lVar1;
  case (CSfArchiveProgress *)0x2:
    lVar1 = FUN_01069210(local_208);
    return lVar1;
  case (CSfArchiveProgress *)0x3:
    lVar1 = FUN_010693d0(local_208);
    return lVar1;
  case (CSfArchiveProgress *)0x4:
    lVar1 = FUN_010695a0(local_208);
    return lVar1;
  case (CSfArchiveProgress *)0x5:
    lVar1 = FUN_01069630(local_208);
    return lVar1;
  default:
    FUN_01070600(0xaaaaaaa1,"Open Main",0);
    return -0x7fffbfff;
  }
}


