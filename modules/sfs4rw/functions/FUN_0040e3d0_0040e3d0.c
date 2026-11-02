/* Module: sfs4rw.dll
   Function: FUN_0040e3d0
   Address: 0040e3d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040e3d0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 unaff_retaddr;
  int *in_stack_0000180c;
  uchar *in_stack_00001810;
  uint in_stack_00001814;
  LPCSTR in_stack_00001818;
  char *pcVar4;
  
  FUN_0048b2e0();
  puVar3 = (undefined4 *)&stack0x00000804;
  for (iVar2 = 0x200; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)register0x00000010;
  for (iVar2 = 0x200; puVar3 = puVar3 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
  }
  puVar3 = (undefined4 *)&stack0x00001004;
  for (iVar2 = 0x200; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  _mbscpy(&stack0x00000804,(uchar *)"?RequestType=Register&");
  FUN_0040e180(&stack0x00000004,0x800);
  _mbscat(&stack0x00000804,&stack0x00000004);
  FUN_00420f60(&stack0x00000004,(BYTE *)"&UserID=%s");
  _mbscat(&stack0x00000804,&stack0x00000004);
  iVar2 = lstrlenA(in_stack_00001818);
  FUN_00404470((undefined4 *)&stack0x00001004,in_stack_00001818,(short)iVar2);
  FUN_00420f60(&stack0x00000004,(BYTE *)"&FirstName=%s");
  _mbscat(&stack0x00000804,&stack0x00000004);
  iVar2 = lstrlenA(in_stack_00001818 + 0x80);
  FUN_00404470((undefined4 *)&stack0x00001004,in_stack_00001818 + 0x80,(short)iVar2);
  FUN_00420f60(&stack0x00000004,(BYTE *)"&LastName=%s");
  _mbscat(&stack0x00000804,&stack0x00000004);
  iVar2 = lstrlenA(in_stack_00001818 + 0x100);
  FUN_00404470((undefined4 *)&stack0x00001004,in_stack_00001818 + 0x100,(short)iVar2);
  FUN_00420f60(&stack0x00000004,(BYTE *)"&Organization=%s");
  _mbscat(&stack0x00000804,&stack0x00000004);
  iVar2 = lstrlenA(in_stack_00001818 + 0x180);
  FUN_00404470((undefined4 *)&stack0x00001004,in_stack_00001818 + 0x180,(short)iVar2);
  FUN_00420f60(&stack0x00000004,(BYTE *)"&Address1=%s");
  _mbscat(&stack0x00000804,&stack0x00000004);
  iVar2 = lstrlenA(in_stack_00001818 + 0x200);
  FUN_00404470((undefined4 *)&stack0x00001004,in_stack_00001818 + 0x200,(short)iVar2);
  FUN_00420f60(&stack0x00000004,(BYTE *)"&Address2=%s");
  _mbscat(&stack0x00000804,&stack0x00000004);
  iVar2 = lstrlenA(in_stack_00001818 + 0x280);
  FUN_00404470((undefined4 *)&stack0x00001004,in_stack_00001818 + 0x280,(short)iVar2);
  FUN_00420f60(&stack0x00000004,(BYTE *)"&City=%s");
  _mbscat(&stack0x00000804,&stack0x00000004);
  iVar2 = lstrlenA(in_stack_00001818 + 0x300);
  FUN_00404470((undefined4 *)&stack0x00001004,in_stack_00001818 + 0x300,(short)iVar2);
  FUN_00420f60(&stack0x00000004,(BYTE *)"&StateOrProvince=%s");
  _mbscat(&stack0x00000804,&stack0x00000004);
  iVar2 = lstrlenA(in_stack_00001818 + 0x305);
  FUN_00404470((undefined4 *)&stack0x00001004,in_stack_00001818 + 0x305,(short)iVar2);
  FUN_00420f60(&stack0x00000004,(BYTE *)"&PostalCode=%s");
  _mbscat(&stack0x00000804,&stack0x00000004);
  iVar2 = lstrlenA(in_stack_00001818 + 0x31a);
  FUN_00404470((undefined4 *)&stack0x00001004,in_stack_00001818 + 0x31a,(short)iVar2);
  FUN_00420f60(&stack0x00000004,(BYTE *)"&Country=%s");
  _mbscat(&stack0x00000804,&stack0x00000004);
  iVar2 = lstrlenA(in_stack_00001818 + 0x41f);
  FUN_00404470((undefined4 *)&stack0x00001004,in_stack_00001818 + 0x41f,(short)iVar2);
  FUN_00420f60(&stack0x00000004,(BYTE *)"&Phone=%s");
  _mbscat(&stack0x00000804,&stack0x00000004);
  FUN_00420f60(&stack0x00000004,(BYTE *)"&Email=%s");
  _mbscat(&stack0x00000804,&stack0x00000004);
  if (*(int *)(in_stack_00001818 + 0x444) == 0) {
    pcVar4 = "&MayShareInfo=0";
  }
  else {
    pcVar4 = "&MayShareInfo=1";
  }
  _mbscat(&stack0x00000804,(uchar *)pcVar4);
  if (*(int *)(in_stack_00001818 + 0x440) == 0) {
    pcVar4 = "&EmailOK=0";
  }
  else {
    pcVar4 = "&EmailOK=1";
  }
  _mbscat(&stack0x00000804,(uchar *)pcVar4);
  iVar2 = lstrlenA((LPCSTR)in_stack_00001810);
  iVar1 = lstrlenA(&stack0x00000804);
  if ((uint)(iVar2 + iVar1) < in_stack_00001814) {
    _mbscat(in_stack_00001810,&stack0x00000804);
    unaff_retaddr = 20000;
    InternetSetOptionA();
    iVar2 = InternetOpenUrlA();
    *in_stack_0000180c = iVar2;
    if (iVar2 != 0) {
      return 0;
    }
  }
  return unaff_retaddr;
}


