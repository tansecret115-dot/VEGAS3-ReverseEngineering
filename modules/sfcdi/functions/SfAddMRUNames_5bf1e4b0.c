/* Module: sfcdi.dll
   Function: SfAddMRUNames
   Address: 5bf1e4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfAddMRUNames(char const *,char const *) */

int SfAddMRUNames(char *param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  void *local_20c;
  BYTE local_208 [258];
  undefined1 local_106;
  BYTE local_104 [260];
  
                    /* 0x1e4b0  21  ?SfAddMRUNames@@YGHPBD0@Z */
  iVar1 = FUN_5bf22040(&local_20c,"CD Interface",0x2000001,(int)param_1);
  if (iVar1 < 0) {
    return 0;
  }
  uVar2 = FUN_5bf21860((DWORD)local_20c,100,0,300,0xf);
  lstrcpynA((LPSTR)local_208,param_2,0x103);
  local_106 = 0;
  uVar3 = 1000;
  if (0 < (int)uVar2) {
    do {
      local_106 = 0;
      iVar1 = FUN_5bf21c40((int)local_20c,uVar3,local_104,0x104,(LPCSTR)0x0,1);
      if (((iVar1 == 0) || (local_104[0] == '\0')) ||
         (iVar1 = lstrcmpiA((LPCSTR)local_104,param_2), iVar1 == 0)) {
        FUN_5bf21d50((int)local_20c,uVar3,local_208);
        break;
      }
      FUN_5bf21d50((int)local_20c,uVar3,local_208);
      lstrcpynA((LPSTR)local_208,(LPCSTR)local_104,0x103);
      local_106 = 0;
      iVar1 = uVar3 - 999;
      uVar3 = uVar3 + 1;
    } while (iVar1 < (int)uVar2);
  }
  FUN_5bf22510(local_20c);
  return 1;
}


