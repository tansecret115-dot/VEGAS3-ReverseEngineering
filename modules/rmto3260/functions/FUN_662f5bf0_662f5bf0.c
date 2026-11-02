/* Module: rmto3260.dll
   Function: FUN_662f5bf0
   Address: 662f5bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_662f5bf0(LPCSTR param_1,LPCSTR param_2)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  BVar1 = CopyFileA(param_1,param_2,1);
  if (BVar1 == 0) {
    uVar2 = 0x80004005;
  }
  return uVar2;
}


