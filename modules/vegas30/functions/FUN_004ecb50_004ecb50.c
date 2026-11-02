/* Module: vegas30.exe
   Function: FUN_004ecb50
   Address: 004ecb50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004ecb50(LPCSTR param_1,uint *param_2,uint *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar1 = 0x80004005;
  if (*param_3 != 0) {
    iVar3 = 0;
    while( true ) {
      iVar2 = lstrcmpiA((LPCSTR)(iVar3 + 4 + param_3[1]),param_1);
      if (iVar2 == 0) break;
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x108;
      if (*param_3 <= uVar4) {
        return 0x80004005;
      }
    }
    uVar1 = 0;
    *param_2 = uVar4;
  }
  return uVar1;
}


