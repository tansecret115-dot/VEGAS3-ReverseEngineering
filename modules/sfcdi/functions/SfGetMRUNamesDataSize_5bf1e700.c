/* Module: sfcdi.dll
   Function: SfGetMRUNamesDataSize
   Address: 5bf1e700
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfGetMRUNamesDataSize(char const *,char const *,unsigned long *) */

long SfGetMRUNamesDataSize(char *param_1,char *param_2,ulong *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  void *local_10c;
  int local_108;
  BYTE local_104 [260];
  
                    /* 0x1e700  88  ?SfGetMRUNamesDataSize@@YGJPBD0PAK@Z */
  *param_3 = 0;
  iVar1 = FUN_5bf22040(&local_10c,"CD Interface",0x2000001,(int)param_1);
  if (iVar1 < 0) {
    return iVar1;
  }
  local_108 = iVar1;
  uVar2 = FUN_5bf21860((DWORD)local_10c,100,0,300,0xf);
  iVar4 = 0;
  uVar3 = 1000;
  if (0 < (int)uVar2) {
    do {
      iVar1 = FUN_5bf21c40((int)local_10c,uVar3,local_104,0x104,(LPCSTR)0x0,1);
      if ((iVar1 != 0) && (local_104[0] != '\0')) {
        iVar1 = lstrcmpiA((LPCSTR)local_104,param_2);
        if (iVar1 == 0) {
          uVar2 = FUN_5bf21860((DWORD)local_10c,uVar3 + 2000,0,0xffffffff,0);
          *param_3 = uVar2;
          iVar1 = local_108;
          break;
        }
        uVar3 = uVar3 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar1 = local_108;
    } while (iVar4 < (int)uVar2);
  }
  FUN_5bf22510(local_10c);
  return iVar1;
}


