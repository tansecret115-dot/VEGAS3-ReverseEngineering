/* Module: sfs4rw.dll
   Function: FUN_0040eaf0
   Address: 0040eaf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040eaf0(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_retaddr;
  int *in_stack_00001034;
  uchar *in_stack_00001038;
  uint in_stack_0000103c;
  undefined4 *in_stack_00001040;
  uchar *_Source;
  
  FUN_0048b2e0();
  _mbscpy(&stack0x0000082c,(uchar *)"?RequestType=Activate&");
  FUN_0040e180(&stack0x0000002c,0x800);
  _mbscat(&stack0x0000082c,&stack0x0000002c);
  FUN_00420f60(&stack0x0000002c,(BYTE *)"&UserID=%s");
  _mbscat(&stack0x0000082c,&stack0x0000002c);
  FUN_00420f60(&stack0x0000002c,(BYTE *)"&FeatureSet=%d");
  _mbscat(&stack0x0000082c,&stack0x0000002c);
  FUN_00410160((void *)*in_stack_00001040,&stack0x00000020,0xb);
  FUN_00420f60(&stack0x0000002c,(BYTE *)"&ComputerID=%s");
  _mbscat(&stack0x0000082c,&stack0x0000002c);
  FUN_00420f60(&stack0x0000002c,(BYTE *)"&ActivateType=%s");
  _mbscat(&stack0x0000082c,&stack0x0000002c);
  if (in_stack_00001040[0x67] == 0) {
    iVar1 = FUN_00413130((void *)*in_stack_00001040,&stack0x00000004,0x19,in_stack_00001040[1]);
    if (-1 < iVar1) goto LAB_0040ec45;
    iVar1 = FUN_00413ae0((void *)*in_stack_00001040,&stack0x00000004,0x19);
    if (-1 < iVar1) goto LAB_0040ec45;
    _Source = "";
  }
  else {
    _Source = (uchar *)in_stack_00001040[100];
  }
  _mbscpy(&stack0x00000004,_Source);
LAB_0040ec45:
  FUN_00420f60(&stack0x0000002c,(BYTE *)"&SerialNumber=%s");
  _mbscat(&stack0x0000082c,&stack0x0000002c);
  iVar1 = lstrlenA((LPCSTR)in_stack_00001038);
  iVar2 = lstrlenA(&stack0x0000082c);
  if ((uint)(iVar1 + iVar2) < in_stack_0000103c) {
    _mbscat(in_stack_00001038,&stack0x0000082c);
    unaff_retaddr = 20000;
    InternetSetOptionA();
    iVar1 = InternetOpenUrlA();
    *in_stack_00001034 = iVar1;
    if (iVar1 != 0) {
      return 0;
    }
  }
  return unaff_retaddr;
}


