/* Module: sfpaplug.dll
   Function: FUN_004380d7
   Address: 004380d7
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_004380d7(int *param_1,uint param_2,char param_3)

{
  uchar uVar1;
  char cVar2;
  LPCWSTR in_EAX;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uchar *puVar6;
  int *piVar7;
  uint uVar8;
  undefined1 uStack0000010b;
  uchar in_stack_0000010c;
  void *in_stack_00000214;
  undefined4 *in_stack_00000218;
  
  uVar8 = 0;
  if (*in_EAX == L'\0') {
    if (&stack0x00000000 != (undefined1 *)0xfffffff8) {
      param_2 = param_2 & 0xffffff00;
    }
  }
  else {
    WideCharToMultiByte(0,0,in_EAX,-1,(LPSTR)&param_2,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  uStack0000010b = 0;
  puVar4 = &param_2;
  cVar2 = (char)param_2;
  while (cVar2 != '\0') {
    uVar3 = _mbctoupper((int)cVar2);
    *(CHAR *)puVar4 = (CHAR)uVar3;
    puVar4 = (uint *)CharNextA((LPCSTR)puVar4);
    cVar2 = (char)*puVar4;
  }
  iVar5 = lstrlenA((LPCSTR)&param_2);
  if ((((4 < iVar5) && ((char)param_2 == DAT_00454720)) && (param_2._1_1_ == DAT_00454721)) &&
     (((param_2._2_1_ == DAT_00454722 && (param_2._3_1_ == DAT_00454723)) &&
      (iVar5 = _ismbcdigit((int)param_3), iVar5 != 0)))) {
    _mbscpy((uchar *)&param_2,"W64");
  }
  while( true ) {
    puVar4 = *(uint **)(*(int *)((int)in_stack_00000214 + 0x24) + 4);
    if (*puVar4 <= uVar8) {
      return param_1;
    }
    iVar5 = *(int *)(puVar4[2] + uVar8 * 4);
    lstrcpynA((LPSTR)&stack0x0000010c,*(LPCSTR *)(iVar5 + 0x26c),0x104);
    puVar6 = &stack0x0000010c;
    uVar1 = in_stack_0000010c;
    while (uVar1 != '\0') {
      uVar3 = _mbctoupper((int)(char)uVar1);
      *puVar6 = (uchar)uVar3;
      puVar6 = (uchar *)CharNextA((LPCSTR)puVar6);
      uVar1 = *puVar6;
    }
    puVar6 = _mbsstr(&stack0x0000010c,(uchar *)&param_2);
    if (puVar6 != (uchar *)0x0) break;
    uVar8 = uVar8 + 1;
  }
  piVar7 = FUN_00434f20(in_stack_00000214,iVar5,in_stack_00000218);
  return piVar7;
}


