/* Module: vegas30k.dll
   Function: FUN_01046887
   Address: 01046887
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01046887(undefined4 param_1,undefined4 param_2,char param_3)

{
  uchar uVar1;
  uint *puVar2;
  LPCWSTR in_EAX;
  uint uVar3;
  uchar *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 uStack0000010b;
  uchar in_stack_0000010c;
  int in_stack_00000214;
  undefined4 in_stack_00000218;
  
  uVar7 = 0;
  if (*in_EAX == L'\0') {
    if (&stack0x00000000 != (undefined1 *)0xfffffff8) {
      param_2._0_1_ = '\0';
    }
  }
  else {
    WideCharToMultiByte(0,0,in_EAX,-1,(LPSTR)&param_2,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  uStack0000010b = 0;
  puVar4 = (uchar *)&param_2;
  uVar1 = (uchar)param_2;
  while (uVar1 != '\0') {
    uVar3 = _mbctoupper((int)(char)uVar1);
    *puVar4 = (uchar)uVar3;
    puVar4 = (uchar *)CharNextA((LPCSTR)puVar4);
    uVar1 = *puVar4;
  }
  iVar5 = lstrlenA((LPCSTR)&param_2);
  if ((((4 < iVar5) && ((uchar)param_2 == DAT_011dd1a8)) && (param_2._1_1_ == DAT_011dd1a9)) &&
     (((param_2._2_1_ == DAT_011dd1aa && (param_2._3_1_ == DAT_011dd1ab)) &&
      (iVar5 = _ismbcdigit((int)param_3), iVar5 != 0)))) {
    _mbscpy((uchar *)&param_2,"W64");
  }
  while( true ) {
    puVar2 = *(uint **)(*(int *)(in_stack_00000214 + 0x24) + 4);
    if (*puVar2 <= uVar7) {
      return param_1;
    }
    iVar5 = *(int *)(puVar2[2] + uVar7 * 4);
    lstrcpynA((LPSTR)&stack0x0000010c,*(LPCSTR *)(iVar5 + 0x26c),0x104);
    puVar4 = &stack0x0000010c;
    uVar1 = in_stack_0000010c;
    while (uVar1 != '\0') {
      uVar3 = _mbctoupper((int)(char)uVar1);
      *puVar4 = (uchar)uVar3;
      puVar4 = (uchar *)CharNextA((LPCSTR)puVar4);
      uVar1 = *puVar4;
    }
    puVar4 = _mbsstr(&stack0x0000010c,(uchar *)&param_2);
    if (puVar4 != (uchar *)0x0) break;
    uVar7 = uVar7 + 1;
  }
  uVar6 = FUN_01043670(iVar5,in_stack_00000218);
  return uVar6;
}


