/* Module: vidcap30.exe
   Function: FUN_00417c60
   Address: 00417c60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00417c60(LPCSTR param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*param_3 != 0) {
    iVar3 = 0;
    do {
      iVar1 = lstrcmpA((LPCSTR)(iVar3 + 4 + param_3[1]),param_1);
      if (iVar1 == 0) {
        *param_2 = uVar2;
        return 0;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x108;
    } while (uVar2 < *param_3);
  }
  return 0x80004005;
}


