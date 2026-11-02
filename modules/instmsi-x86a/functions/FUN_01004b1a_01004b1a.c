/* Module: InstMsi-x86a.exe
   Function: FUN_01004b1a
   Address: 01004b1a
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01004b1a(LPCSTR param_1,int param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  BOOL BVar3;
  undefined3 extraout_var;
  char *pcVar4;
  CHAR local_12c [260];
  _union_530 local_28 [9];
  
  if (param_2 == 0) {
    lstrcpyA(&DAT_0100ae84,param_1);
    goto LAB_01004bb6;
  }
  iVar2 = FUN_01004a65(param_1,local_12c);
  if (iVar2 == 0) {
    return 0;
  }
  lstrcpyA(&DAT_0100ae84,local_12c);
  if ((DAT_0100b6d4 & 0x20) != 0) {
    GetSystemInfo((LPSYSTEM_INFO)&local_28[0].s);
    if (local_28[0].s.wProcessorArchitecture == 0) {
      pcVar4 = "i386";
    }
    else if (local_28[0].s.wProcessorArchitecture == 1) {
      pcVar4 = "mips";
    }
    else if (local_28[0].s.wProcessorArchitecture == 2) {
      pcVar4 = "alpha";
    }
    else {
      if (local_28[0].s.wProcessorArchitecture != 3) goto LAB_01004b9a;
      pcVar4 = "ppc";
    }
    FUN_01005a4d(&DAT_0100ae84,pcVar4);
  }
LAB_01004b9a:
  FUN_01005a4d(&DAT_0100ae84,"");
LAB_01004bb6:
  iVar2 = FUN_01004ee3(&DAT_0100ae84);
  if (iVar2 == 0) {
    BVar3 = CreateDirectoryA(&DAT_0100ae84,(LPSECURITY_ATTRIBUTES)0x0);
    if (BVar3 == 0) {
      DAT_0100b704 = FUN_010056fe();
      return 0;
    }
    DAT_0100aaa0 = 1;
  }
  bVar1 = FUN_01004f82(&DAT_0100ae84,param_3,0);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if (DAT_0100aaa0 != 0) {
      DAT_0100aaa0 = 0;
      RemoveDirectoryA(&DAT_0100ae84);
    }
    return 0;
  }
  DAT_0100b704 = 0;
  return 1;
}


