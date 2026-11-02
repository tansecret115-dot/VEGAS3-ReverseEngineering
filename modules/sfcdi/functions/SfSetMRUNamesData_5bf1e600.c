/* Module: sfcdi.dll
   Function: SfSetMRUNamesData
   Address: 5bf1e600
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfSetMRUNamesData(char const *,char const *,void *,unsigned long) */

long SfSetMRUNamesData(char *param_1,char *param_2,void *param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *local_10c;
  uint local_108;
  BYTE local_104 [260];
  
                    /* 0x1e600  128  ?SfSetMRUNamesData@@YGJPBD0PAXK@Z */
  uVar1 = FUN_5bf22040(&local_10c,"CD Interface",0x2000001,(int)param_1);
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  local_108 = uVar1;
  uVar2 = FUN_5bf21860((DWORD)local_10c,100,0,300,0xf);
  iVar5 = 0;
  uVar4 = 1000;
  if (0 < (int)uVar2) {
    do {
      iVar3 = FUN_5bf21c40((int)local_10c,uVar4,local_104,0x104,(LPCSTR)0x0,1);
      if ((iVar3 != 0) && (local_104[0] != '\0')) {
        iVar3 = lstrcmpiA((LPCSTR)local_104,param_2);
        if (iVar3 == 0) {
          local_108 = FUN_5bf21bc0((int)local_10c,uVar4 + 0x5dc,param_3,param_4);
          FUN_5bf219a0((int)local_10c,uVar4 + 2000);
          uVar1 = local_108;
          break;
        }
        uVar4 = uVar4 + 1;
      }
      iVar5 = iVar5 + 1;
      uVar1 = local_108;
    } while (iVar5 < (int)uVar2);
  }
  FUN_5bf22510(local_10c);
  return uVar1;
}


