/* Module: rmto3260.dll
   Function: FUN_662f4240
   Address: 662f4240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662f4240(GUID *param_1)

{
  HRESULT HVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  HVar1 = CoCreateGuid(param_1);
  if (HVar1 != 0) {
    uVar2 = 0x80004005;
  }
  return uVar2;
}


