/* Module: mpgmux.dll
   Function: FUN_1000cb10
   Address: 1000cb10
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_1000cb10(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1001b640) &&
     ((*(byte *)((&DAT_1001b540)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10010211(param_1);
    iVar1 = FUN_1000cb75(param_1,param_2,param_3);
    FUN_10010270(param_1);
    return iVar1;
  }
  pDVar2 = FUN_1000ff9f();
  *pDVar2 = 9;
  pDVar2 = FUN_1000ffa8();
  *pDVar2 = 0;
  return -1;
}


