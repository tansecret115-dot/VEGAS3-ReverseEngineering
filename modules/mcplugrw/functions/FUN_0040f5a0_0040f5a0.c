/* Module: mcplugrw.dll
   Function: FUN_0040f5a0
   Address: 0040f5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040f5a0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  HANDLE hFile;
  DWORD nNumberOfBytesToWrite;
  BOOL BVar4;
  int iVar5;
  undefined4 *puVar6;
  LPCSTR in_stack_00008938;
  LPCSTR in_stack_0000893c;
  undefined4 *in_stack_00008940;
  LPDWORD lpNumberOfBytesWritten;
  char *pcVar7;
  uchar *_Source;
  LPOVERLAPPED lpOverlapped;
  
  FUN_0048b360();
  puVar6 = (undefined4 *)&stack0x00000c34;
  for (iVar5 = 8000; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  puVar6 = (undefined4 *)&stack0x00000434;
  for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  puVar6 = (undefined4 *)&stack0x00000034;
  for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *in_stack_00008940 = DAT_004a8128;
  iVar5 = FUN_00412f90(DAT_004a8128,(int *)&stack0x00000008,&param_1,2);
  uVar1 = DAT_004a84f4;
  if (in_stack_00008940[0x67] == 0) {
    if (iVar5 == -0x7ffb1ecb) {
      iVar5 = 0;
    }
    else if (iVar5 < 0) {
      return iVar5;
    }
    in_stack_00008940[1] = param_1;
    uVar2 = FUN_00410900(DAT_004a8128);
    in_stack_00008940[2] = uVar2 & 0xffff;
  }
  else {
    if ((iVar5 != -0x7ffb1ed3) && (iVar5 != -0x7ffb1ec0)) {
      return -0x7fffbffb;
    }
    in_stack_00008940[2] = 0;
    in_stack_00008940[1] = uVar1;
  }
  FUN_00420fe0(&stack0x00000034,(BYTE *)"FamilyID=%d");
  _mbscat(&stack0x00000434,&stack0x00000034);
  FUN_00420fe0(&stack0x00000034,(BYTE *)"&Build=%d");
  _mbscat(&stack0x00000434,&stack0x00000034);
  FUN_00420fe0(&stack0x00000034,(BYTE *)"&SIVersion=%d");
  _mbscat(&stack0x00000434,&stack0x00000034);
  FUN_00420fe0(&stack0x00000034,(BYTE *)"&UserID=%s");
  _mbscat(&stack0x00000434,&stack0x00000034);
  iVar3 = lstrlenA(in_stack_0000893c);
  FUN_004044d0((undefined4 *)&stack0x00000834,in_stack_0000893c,(short)iVar3);
  FUN_00420fe0(&stack0x00000034,(BYTE *)"&FirstName=%s");
  _mbscat(&stack0x00000434,&stack0x00000034);
  iVar3 = lstrlenA(in_stack_0000893c + 0x80);
  FUN_004044d0((undefined4 *)&stack0x00000834,in_stack_0000893c + 0x80,(short)iVar3);
  FUN_00420fe0(&stack0x00000034,(BYTE *)"&LastName=%s");
  _mbscat(&stack0x00000434,&stack0x00000034);
  iVar3 = lstrlenA(in_stack_0000893c + 0x100);
  FUN_004044d0((undefined4 *)&stack0x00000834,in_stack_0000893c + 0x100,(short)iVar3);
  FUN_00420fe0(&stack0x00000034,(BYTE *)"&Organization=%s");
  _mbscat(&stack0x00000434,&stack0x00000034);
  iVar3 = lstrlenA(in_stack_0000893c + 0x180);
  FUN_004044d0((undefined4 *)&stack0x00000834,in_stack_0000893c + 0x180,(short)iVar3);
  FUN_00420fe0(&stack0x00000034,(BYTE *)"&Address1=%s");
  _mbscat(&stack0x00000434,&stack0x00000034);
  iVar3 = lstrlenA(in_stack_0000893c + 0x200);
  FUN_004044d0((undefined4 *)&stack0x00000834,in_stack_0000893c + 0x200,(short)iVar3);
  FUN_00420fe0(&stack0x00000034,(BYTE *)"&Address2=%s");
  _mbscat(&stack0x00000434,&stack0x00000034);
  iVar3 = lstrlenA(in_stack_0000893c + 0x280);
  FUN_004044d0((undefined4 *)&stack0x00000834,in_stack_0000893c + 0x280,(short)iVar3);
  FUN_00420fe0(&stack0x00000034,(BYTE *)"&City=%s");
  _mbscat(&stack0x00000434,&stack0x00000034);
  iVar3 = lstrlenA(in_stack_0000893c + 0x300);
  FUN_004044d0((undefined4 *)&stack0x00000834,in_stack_0000893c + 0x300,(short)iVar3);
  FUN_00420fe0(&stack0x00000034,(BYTE *)"&StateOrProvince=%s");
  _mbscat(&stack0x00000434,&stack0x00000034);
  iVar3 = lstrlenA(in_stack_0000893c + 0x305);
  FUN_004044d0((undefined4 *)&stack0x00000834,in_stack_0000893c + 0x305,(short)iVar3);
  FUN_00420fe0(&stack0x00000034,(BYTE *)"&PostalCode=%s");
  _mbscat(&stack0x00000434,&stack0x00000034);
  iVar3 = lstrlenA(in_stack_0000893c + 0x31a);
  FUN_004044d0((undefined4 *)&stack0x00000834,in_stack_0000893c + 0x31a,(short)iVar3);
  FUN_00420fe0(&stack0x00000034,(BYTE *)"&Country=%s");
  _mbscat(&stack0x00000434,&stack0x00000034);
  iVar3 = lstrlenA(in_stack_0000893c + 0x41f);
  FUN_004044d0((undefined4 *)&stack0x00000834,in_stack_0000893c + 0x41f,(short)iVar3);
  FUN_00420fe0(&stack0x00000034,(BYTE *)"&Phone=%s");
  _mbscat(&stack0x00000434,&stack0x00000034);
  FUN_00420fe0(&stack0x00000034,(BYTE *)"&Email=%s");
  _mbscat(&stack0x00000434,&stack0x00000034);
  if (*(int *)(in_stack_0000893c + 0x444) == 0) {
    pcVar7 = "&MayShareInfo=0";
  }
  else {
    pcVar7 = "&MayShareInfo=1";
  }
  FUN_00420fe0(&stack0x00000034,(BYTE *)pcVar7);
  _mbscat(&stack0x00000434,&stack0x00000034);
  if (*(int *)(in_stack_0000893c + 0x440) == 0) {
    pcVar7 = "&EmailOK=0";
  }
  else {
    pcVar7 = "&EmailOK=1";
  }
  FUN_00420fe0(&stack0x00000034,(BYTE *)pcVar7);
  _mbscat(&stack0x00000434,&stack0x00000034);
  FUN_00420fe0(&stack0x00000034,(BYTE *)"&FeatureSet=%d");
  _mbscat(&stack0x00000434,&stack0x00000034);
  FUN_004101e0((void *)*in_stack_00008940,&stack0x00000028,0xb);
  FUN_00420fe0(&stack0x00000034,(BYTE *)"&ComputerID=%s");
  _mbscat(&stack0x00000434,&stack0x00000034);
  FUN_00420fe0(&stack0x00000034,(BYTE *)"&ActivateType=%s");
  _mbscat(&stack0x00000434,&stack0x00000034);
  if (in_stack_00008940[0x67] == 0) {
    iVar3 = FUN_004131b0((void *)*in_stack_00008940,&stack0x0000000c,0x19,in_stack_00008940[1]);
    if ((-1 < iVar3) ||
       (iVar3 = FUN_00413b60((void *)*in_stack_00008940,&stack0x0000000c,0x19), -1 < iVar3))
    goto LAB_0040fb1a;
    _Source = "";
  }
  else {
    _Source = (uchar *)in_stack_00008940[100];
  }
  _mbscpy(&stack0x0000000c,_Source);
LAB_0040fb1a:
  FUN_00420fe0(&stack0x00000034,(BYTE *)"&SerialNumber=%s");
  _mbscat(&stack0x00000434,&stack0x00000034);
  _mbscpy(&stack0x00000c34,(uchar *)"<html>\n");
  _mbscat(&stack0x00000c34,(uchar *)"<HEAD>\n<TITLE>Sonic Foundry Registration</TITLE>\n");
  _mbscat(&stack0x00000c34,(uchar *)"<META HTTP-EQUIV=Refresh CONTENT=1;url=http://");
  _mbscat(&stack0x00000c34,(uchar *)"www.sonicfoundry.com");
  _mbscat(&stack0x00000c34,(uchar *)"/Registration/default.asp?");
  _mbscat(&stack0x00000c34,&stack0x00000434);
  _mbscat(&stack0x00000c34,(uchar *)">\n</HEAD>\n\n");
  _mbscat(&stack0x00000c34,(uchar *)"<BODY text=yellow link=yellow vlink=gold bgcolor=black>\n");
  _mbscat(&stack0x00000c34,
          (uchar *)
          "<br><b>In a short time the registration page should automatically appear.</b><br><br>\n")
  ;
  _mbscat(&stack0x00000c34,(uchar *)"<A HREF=http://");
  _mbscat(&stack0x00000c34,(uchar *)"www.sonicfoundry.com");
  _mbscat(&stack0x00000c34,(uchar *)"/Registration/default.asp?");
  _mbscat(&stack0x00000c34,&stack0x00000434);
  _mbscat(&stack0x00000c34,(uchar *)">If not click here.</a>\n");
  _mbscat(&stack0x00000c34,(uchar *)"</BODY>\n");
  _mbscat(&stack0x00000c34,(uchar *)"</html>");
  hFile = CreateFileA(in_stack_00008938,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    return iVar5;
  }
  lpOverlapped = (LPOVERLAPPED)0x0;
  lpNumberOfBytesWritten = (LPDWORD)register0x00000010;
  nNumberOfBytesToWrite = lstrlenA(&stack0x00000c34);
  BVar4 = WriteFile(hFile,&stack0x00000c34,nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped
                   );
  CloseHandle(hFile);
  return (-(uint)(BVar4 != 0) & 0x7ffb1ff7) + 0x8004e009;
}


