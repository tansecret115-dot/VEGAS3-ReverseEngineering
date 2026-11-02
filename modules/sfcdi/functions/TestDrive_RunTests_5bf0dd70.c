/* Module: sfcdi.dll
   Function: TestDrive_RunTests
   Address: 5bf0dd70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall TestDrive_RunTests(struct tPARAMETERS_DEVDES *) */

long TestDrive_RunTests(tPARAMETERS_DEVDES *param_1)

{
  char *pcVar1;
  long lVar2;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  HSFCD__ *pHVar3;
  uint *in_stack_fffffdf4;
  int *in_stack_fffffdf8;
  uchar local_104 [260];
  
                    /* 0xdd70  142  ?TestDrive_RunTests@@YGJPAUtPARAMETERS_DEVDES@@@Z */
  GetModuleFileNameA(DAT_5bf65eb8,(LPSTR)local_104,0x104);
  pcVar1 = FUN_5bf230b0((LPCSTR)local_104);
  *pcVar1 = '\0';
  _mbscat(local_104,(uchar *)"drvtest.log");
  GetModuleFileNameA(DAT_5bf65eb8,&stack0xfffffdf8,0x104);
  pcVar1 = FUN_5bf230b0(&stack0xfffffdf8);
  *pcVar1 = '\0';
  _mbscat(&stack0xfffffdf8,(uchar *)"drvtest.txt");
  pHVar3 = (HSFCD__ *)0x0;
  lVar2 = cdr_Open(param_1,(HSFCD__ **)&stack0xfffffdf0);
  if (-1 < lVar2) {
    FUN_5bf0d0b0((int *)&stack0xfffffdf4);
    FUN_5bf0deb0(pHVar3);
    FUN_5bf0d250();
    lVar2 = FUN_5bf0daf0((LPCSTR)local_104,&stack0xfffffdf8,in_stack_fffffdf4);
    FUN_5bf0d0d0((int *)in_stack_fffffdf4);
    cdr_Close(pHVar3);
    FUN_5bf0d390((uint)param_1,unaff_EDI,unaff_ESI,(uint)pHVar3,in_stack_fffffdf4,in_stack_fffffdf8)
    ;
  }
  return lVar2;
}


