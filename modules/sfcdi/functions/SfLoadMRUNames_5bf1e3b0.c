/* Module: sfcdi.dll
   Function: SfLoadMRUNames
   Address: 5bf1e3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfLoadMRUNames(char const *,char * *,int) */

int SfLoadMRUNames(char *param_1,char **param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  HGLOBAL hMem;
  LPSTR lpString1;
  int iVar4;
  void *local_110;
  int local_10c;
  uint local_108;
  BYTE local_104 [260];
  
                    /* 0x1e3b0  90  ?SfLoadMRUNames@@YGHPBDPAPADH@Z */
  iVar4 = 0;
  iVar1 = FUN_5bf22040(&local_110,"CD Interface",0x2000001,(int)param_1);
  if (iVar1 < 0) {
    return 0;
  }
  uVar2 = FUN_5bf21860((DWORD)local_110,100,0,300,0xf);
  local_10c = 0;
  local_108 = uVar2;
  if (0 < (int)uVar2) {
    do {
      iVar1 = local_10c;
      iVar3 = FUN_5bf21c40((int)local_110,local_10c + 1000,local_104,0x104,(LPCSTR)0x0,1);
      if ((iVar3 != 0) && (local_104[0] != '\0')) {
        iVar1 = lstrlenA((LPCSTR)local_104);
        hMem = GlobalAlloc(0x42,iVar1 + 1U);
        lpString1 = GlobalLock(hMem);
        *param_2 = lpString1;
        lstrcpynA(lpString1,(LPCSTR)local_104,iVar1 + 1U);
        iVar4 = iVar4 + 1;
        param_2 = param_2 + 1;
        lpString1[iVar1] = '\0';
        iVar1 = local_10c;
        uVar2 = local_108;
        if (param_3 <= iVar4) break;
      }
      local_10c = iVar1 + 1;
    } while (local_10c < (int)uVar2);
  }
  FUN_5bf22510(local_110);
  return iVar4;
}


