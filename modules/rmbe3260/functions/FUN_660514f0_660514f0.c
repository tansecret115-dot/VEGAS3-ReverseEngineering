/* Module: rmbe3260.dll
   Function: FUN_660514f0
   Address: 660514f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_660514f0(LPCSTR param_1,LPSTR param_2)

{
  DWORD DVar1;
  UINT UVar2;
  undefined4 uVar3;
  CHAR local_108 [260];
  
  uVar3 = 0;
  DVar1 = GetTempPathA(0x104,local_108);
  if (DVar1 != 0) {
    UVar2 = GetTempFileNameA(local_108,param_1,0,param_2);
    if (UVar2 != 0) {
      uVar3 = 1;
    }
  }
  return uVar3;
}


