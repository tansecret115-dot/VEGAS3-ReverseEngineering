/* Module: sfcdi.dll
   Function: FUN_5bf2b970
   Address: 5bf2b970
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5bf2b970(uchar *param_1,uint param_2,int param_3,undefined4 param_4)

{
  BYTE *pBVar1;
  uint local_1c [3];
  uint local_10 [4];
  
  switch(param_4) {
  case 0:
    FUN_5bf2b5e0(local_1c,param_2);
    FUN_5bf2b930(param_1);
    return;
  default:
    FUN_5bf2b740(local_10,param_2);
    FUN_5bf2b8f0(param_1);
    return;
  case 2:
    break;
  case 3:
    break;
  case 4:
    local_1c[1] = 0;
    local_1c[0] = param_2;
    pBVar1 = FUN_5bf29180(DAT_5bf76078,0x111c);
    FUN_5bf25750(param_1,pBVar1);
    lstrlenA((LPCSTR)param_1);
    return;
  }
  FUN_5bf25750(param_1,"$d");
  lstrlenA((LPCSTR)param_1);
  return;
}


