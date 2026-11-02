/* Module: dsetup.dll
   Function: FUN_00402735
   Address: 00402735
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00402735(int *param_1)

{
  BOOL BVar1;
  
  if (((((*param_1 != 0x20) || (BVar1 = IsBadReadPtr(param_1,0x20), BVar1 == 0)) &&
       ((*param_1 != 4 || (BVar1 = IsBadReadPtr(param_1,4), BVar1 == 0)))) &&
      (((((*param_1 == 0x20 || (*param_1 == 4)) &&
         (BVar1 = IsBadStringPtrW((LPCWSTR)param_1[2],0x104), BVar1 == 0)) &&
        ((BVar1 = IsBadStringPtrW((LPCWSTR)param_1[4],0x104), BVar1 == 0 &&
         (BVar1 = IsBadStringPtrW((LPCWSTR)param_1[5],0x104), BVar1 == 0)))) &&
       (BVar1 = IsBadStringPtrW((LPCWSTR)param_1[6],0x104), BVar1 == 0)))) &&
     ((BVar1 = IsBadStringPtrW((LPCWSTR)param_1[7],0x104), BVar1 == 0 &&
      (((*param_1 != 4 || ((LPCWSTR)param_1[8] == (LPCWSTR)0x0)) ||
       (BVar1 = IsBadStringPtrW((LPCWSTR)param_1[8],0x104), BVar1 == 0)))))) {
    return 1;
  }
  return 0;
}


