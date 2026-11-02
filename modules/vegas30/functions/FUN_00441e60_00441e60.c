/* Module: vegas30.exe
   Function: FUN_00441e60
   Address: 00441e60
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00441e60(LPCSTR param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = param_2;
  uVar3 = 0;
  if (param_2 == (uint *)0x0) {
    param_2 = (uint *)0x0;
  }
  else {
    param_2 = (uint *)*param_2;
  }
  if (param_2 != (uint *)0x0) {
    do {
      iVar2 = lstrcmpiA(*(LPCSTR *)(puVar1[2] + uVar3 * 4),param_1);
      if (iVar2 == 0) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
  return uVar3;
}


