/* Module: vidcap30.exe
   Function: FUN_00417e60
   Address: 00417e60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00417e60(HWND param_1,LPCSTR param_2,LPCSTR param_3,int param_4)

{
  LPSTR lpString1;
  int iVar1;
  HMENU pHVar2;
  int local_118;
  int local_114;
  CHAR local_110 [272];
  
  local_118 = 0;
  iVar1 = FUN_00417ab0(param_1);
  pHVar2 = GetMenu(param_1);
  pHVar2 = GetSubMenu(pHVar2,iVar1);
  local_110[0] = '\0';
  if (DAT_005ba990 != 0) {
    iVar1 = lstrcmpA(param_2,param_3);
    if (iVar1 != 0) {
      local_114 = FUN_00417c60(param_2,&local_118,param_4);
      if (-1 < local_114) {
        lpString1 = (LPSTR)(*(int *)(param_4 + 4) + 4 + local_118 * 0x108);
        lstrcpynA(lpString1,param_3,0x104);
        lpString1[0x103] = '\0';
        FUN_00417a10(local_118 + 1,*(int *)(param_4 + 4) + 4 + local_118 * 0x108,local_110,0x10e);
        ModifyMenuA(pHVar2,local_118 + 0x41cU,0,local_118 + 0x41cU,local_110);
      }
      return local_114;
    }
  }
  return 0;
}


