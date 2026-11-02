/* Module: vegas30.exe
   Function: FUN_004e4d30
   Address: 004e4d30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e4d30(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (DAT_0064cd84 == 0) {
    DAT_0064cc7c = '\0';
    DAT_0064cd84 = 1;
  }
  if ((DAT_0064762c != 0) && (iVar1 = *(int *)(DAT_0064762c + 0x70), iVar1 != 0)) {
    if (param_2 == 0) {
      DAT_0064cc7c = '\0';
      DAT_0064cd80 = 0;
      if (*(int *)(iVar1 + 0xdd0) != 0) {
        iVar2 = FUN_005ec620();
        if (iVar2 != 0) {
          DAT_0064cd80 = *(int *)(iVar1 + 0xdd0);
          FUN_005ed3f0(DAT_0064cd80);
          _mbscpy((uchar *)&DAT_0064cc7c,(uchar *)(DAT_0064cd80 + 0x170));
        }
      }
      FUN_004de320(iVar1,0,0,0,0,1);
    }
    else if (DAT_0064cc7c != '\0') {
      iVar2 = FUN_005ec620();
      if (iVar2 != 0) {
        FUN_005b83b0(param_1,1);
        iVar2 = FUN_005ec8a0(&DAT_0064cc7c,&DAT_0064cd80,1,0);
        FUN_005b84d0(param_1,1);
        if (-1 < iVar2) {
          FUN_004de320(iVar1,DAT_0064cd80,0,0,0,1);
          FUN_005ed410(DAT_0064cd80,0,0);
          return;
        }
      }
    }
  }
  return;
}


