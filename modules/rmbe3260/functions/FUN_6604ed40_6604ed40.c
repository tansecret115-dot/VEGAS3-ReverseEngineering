/* Module: rmbe3260.dll
   Function: FUN_6604ed40
   Address: 6604ed40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6604ed40(LPCSTR param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  BOOL BVar2;
  DWORD local_8;
  
  piVar1 = param_3;
  *param_2 = 0;
  *param_3 = 0;
  BVar2 = GetDiskFreeSpaceA(param_1,(LPDWORD)&param_1,(LPDWORD)&param_3,(LPDWORD)&param_2,&local_8);
  if (BVar2 != 0) {
    *piVar1 = (int)param_2 * (int)param_3 * (int)param_1;
  }
  return;
}


