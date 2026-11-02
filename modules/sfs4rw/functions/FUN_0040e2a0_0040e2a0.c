/* Module: sfs4rw.dll
   Function: FUN_0040e2a0
   Address: 0040e2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040e2a0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *in_stack_00000fe4;
  uchar *in_stack_00001010;
  uint in_stack_00001014;
  
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
  _mbscpy(&stack0x00000004,(uchar *)"?RequestType=GenUserID&");
  FUN_0040e180(&stack0x00000804,0x800);
  _mbscat(&stack0x00000004,&stack0x00000804);
  FUN_00420f60(&stack0x00000804,(BYTE *)"&UserID=%s");
  _mbscat(&stack0x00000004,&stack0x00000804);
  iVar2 = lstrlenA((LPCSTR)in_stack_00001010);
  iVar1 = lstrlenA(&stack0x00000004);
  if ((uint)(iVar2 + iVar1) < in_stack_00001014) {
    _mbscat(in_stack_00001010,&stack0x00000004);
    InternetSetOptionA();
    iVar2 = InternetOpenUrlA();
    *in_stack_00000fe4 = iVar2;
    if (iVar2 != 0) {
      return 0;
    }
  }
  return 0x80004005;
}


