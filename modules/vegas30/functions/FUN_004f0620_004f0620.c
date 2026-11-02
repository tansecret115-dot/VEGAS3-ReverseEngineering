/* Module: vegas30.exe
   Function: FUN_004f0620
   Address: 004f0620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004f0620(uchar *param_1,uchar *param_2)

{
  LPCSTR lpString1;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  WCHAR *pWVar4;
  int *piVar5;
  int local_658 [65];
  undefined1 auStack_554 [4];
  CHAR local_550 [492];
  undefined1 auStack_364 [336];
  WCHAR aWStack_214 [266];
  
  uVar3 = 0;
  _mbscpy(param_2,param_1);
  lpString1 = (LPCSTR)_SfGetFileNameExtensionPtrA_4();
  iVar1 = lstrcmpiA(lpString1,".lnk");
  if (iVar1 == 0) {
    iVar1 = lstrlenA((LPCSTR)param_2);
    lstrcpynA(local_550,(LPCSTR)param_2,iVar1 + -3);
    auStack_554[iVar1] = 0;
    _SfGetFileNameExtensionPtrA_4();
    piVar5 = local_658;
    iVar1 = (**(code **)*DAT_0064b504)();
    if (-1 < iVar1) {
      MultiByteToWideChar(0,0,(LPCSTR)param_2,-1,aWStack_214,0x104);
      pWVar4 = aWStack_214;
      uVar2 = Ordinal_2();
      iVar1 = (**(code **)(*piVar5 + 0x14))(piVar5,uVar2,0);
      if (-1 < iVar1) {
        iVar1 = (**(code **)(*DAT_0064b504 + 0x4c))(DAT_0064b504,0,0x40001);
        if (iVar1 == 0) {
          iVar1 = (**(code **)(*DAT_0064b504 + 0xc))
                            (DAT_0064b504,&stack0xfffff990,0x104,auStack_364,4);
          if (-1 < iVar1) {
            _mbscpy(param_2,&stack0xfffff990);
            uVar3 = 1;
          }
        }
      }
      (**(code **)(*(int *)pWVar4 + 8))(pWVar4);
      Ordinal_6(uVar2);
    }
  }
  return uVar3;
}


