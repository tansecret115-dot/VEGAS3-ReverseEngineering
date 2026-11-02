/* Module: sfmarket2.dll
   Function: FUN_0042a420
   Address: 0042a420
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0042a420(int param_1,LPCSTR param_2,int param_3,int *param_4,int param_5,uchar *param_6)

{
  DWORD DVar1;
  int iVar2;
  LPCSTR lpsz;
  undefined4 uVar3;
  uchar local_20c [260];
  char local_108 [260];
  
  uVar3 = 0x80004005;
  if (param_1 == 0) {
    return 0x80004005;
  }
  if ((param_6 == (uchar *)0x0) || (*param_6 == '\0')) {
    param_6 = "oem";
  }
  _mbscpy(local_20c,param_6);
  DVar1 = GetPrivateProfileStringA
                    ((LPCSTR)local_20c,param_2,"",local_108,0x104,(LPCSTR)(param_1 + 0x208));
  if (DVar1 != 0) {
    if (param_3 != 2) {
      if ((param_3 < 3) || (5 < param_3)) {
        return 0x80004001;
      }
      lpsz = local_108;
      iVar2 = _ismbcspace((int)local_108[0]);
      while (iVar2 != 0) {
        lpsz = CharNextA(lpsz);
        iVar2 = _ismbcspace((int)*lpsz);
      }
      FUN_00492f90();
      FUN_00492f90();
      lstrcpynA(&stack0xfffffde8,lpsz,3);
      lstrcpynA(&stack0xfffffde8,"0x",3);
      iVar2 = lstrcmpiA(&stack0xfffffde8,&stack0xfffffde8);
      if (iVar2 == 0) {
        iVar2 = FUN_0042c430(lpsz,(undefined4 *)0x0);
        *param_4 = iVar2;
        return 0;
      }
      iVar2 = FUN_0042bba0(lpsz,0);
      *param_4 = iVar2;
      return 0;
    }
    if (0 < param_5) {
      lstrcpynA((LPSTR)param_4,local_108,param_5);
      *(undefined1 *)((int)param_4 + param_5 + -1) = 0;
      return 0;
    }
    uVar3 = 0x8004e03c;
  }
  return uVar3;
}


