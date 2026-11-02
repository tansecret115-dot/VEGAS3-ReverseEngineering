/* Module: vegas30k.dll
   Function: FUN_01021bd0
   Address: 01021bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01021bd0(undefined4 param_1,ushort *param_2,ushort *param_3)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar2 = 0;
  if (param_2[1] != 0) {
    uVar2 = *param_2;
  }
  uVar1 = 0;
  if (param_3[1] != 0) {
    uVar1 = *param_3;
  }
  lstrcmpA((LPCSTR)(uVar2 + 4 + (int)param_2),(LPCSTR)(uVar1 + 4 + (int)param_3));
  return;
}


