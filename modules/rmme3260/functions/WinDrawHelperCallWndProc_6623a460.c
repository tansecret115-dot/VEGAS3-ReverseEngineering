/* Module: rmme3260.dll
   Function: WinDrawHelperCallWndProc
   Address: 6623a460
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x6623a4a1) */
/* long __stdcall WinDrawHelperCallWndProc(int,unsigned int,long) */

long WinDrawHelperCallWndProc(int param_1,uint param_2,long param_3)

{
  long lParam;
  int iVar1;
  int *piVar2;
  int local_c;
  long local_8;
  
                    /* 0x3a460  11  ?WinDrawHelperCallWndProc@@YGJHIJ@Z */
  lParam = param_3;
  if (((*(int *)(param_3 + 8) == 0x216) || (*(int *)(param_3 + 8) == 0x46)) &&
     (iVar1 = FUN_66251030(&DAT_6627cec0,*(uint *)(param_3 + 0xc),&param_3), iVar1 != 0)) {
    local_c = *(int *)(param_3 + 4);
    local_8 = param_3;
    while (local_c != 0) {
      piVar2 = (int *)FUN_66250c10(local_c);
      FUN_6623a790(*piVar2);
      FUN_66250bf0(&local_c);
    }
  }
  CallNextHookEx(DAT_6627cf30,param_1,param_2,lParam);
  return 0;
}


