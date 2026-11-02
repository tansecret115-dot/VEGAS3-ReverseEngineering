/* Module: dsetup.dll
   Function: FUN_004026a2
   Address: 004026a2
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004026a2(int *param_1)

{
  BOOL BVar1;
  
  if (((((*param_1 != 0x20) || (BVar1 = IsBadReadPtr(param_1,0x20), BVar1 == 0)) &&
       ((*param_1 != 0x24 || (BVar1 = IsBadReadPtr(param_1,0x24), BVar1 == 0)))) &&
      (((((*param_1 == 0x20 || (*param_1 == 0x24)) &&
         (BVar1 = IsBadStringPtrA((LPCSTR)param_1[2],0x104), BVar1 == 0)) &&
        ((BVar1 = IsBadStringPtrA((LPCSTR)param_1[4],0x104), BVar1 == 0 &&
         (BVar1 = IsBadStringPtrA((LPCSTR)param_1[5],0x104), BVar1 == 0)))) &&
       (BVar1 = IsBadStringPtrA((LPCSTR)param_1[6],0x104), BVar1 == 0)))) &&
     ((BVar1 = IsBadStringPtrA((LPCSTR)param_1[7],0x104), BVar1 == 0 &&
      (((*param_1 != 4 || ((LPCSTR)param_1[8] == (LPCSTR)0x0)) ||
       (BVar1 = IsBadStringPtrA((LPCSTR)param_1[8],0x104), BVar1 == 0)))))) {
    return 1;
  }
  return 0;
}


