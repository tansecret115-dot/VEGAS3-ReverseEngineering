/* Module: encn3260.dll
   Function: WinDrawHelperCallWndProc
   Address: 664a4830
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x664a4871) */
/* long __stdcall WinDrawHelperCallWndProc(int,unsigned int,long) */

long WinDrawHelperCallWndProc(int param_1,uint param_2,long param_3)

{
  long lParam;
  int iVar1;
  int *piVar2;
  int local_c;
  long local_8;
  
                    /* 0x24830  11  ?WinDrawHelperCallWndProc@@YGJHIJ@Z */
  lParam = param_3;
  if (((*(int *)(param_3 + 8) == 0x216) || (*(int *)(param_3 + 8) == 0x46)) &&
     (iVar1 = FUN_664c3eb0(&DAT_664f06b8,*(uint *)(param_3 + 0xc),&param_3), iVar1 != 0)) {
    local_c = *(int *)(param_3 + 4);
    local_8 = param_3;
    while (local_c != 0) {
      piVar2 = (int *)FUN_664bab80(local_c);
      FUN_664a4b60(*piVar2);
      FUN_664bab40(&local_c);
    }
  }
  CallNextHookEx(DAT_664f0728,param_1,param_2,lParam);
  return 0;
}


