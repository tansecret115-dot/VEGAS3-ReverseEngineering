/* Module: sfcdi.dll
   Function: FUN_5bf395a0
   Address: 5bf395a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf395a0(int *param_1,uchar *param_2)

{
  int iVar1;
  uchar *_Source;
  BYTE *pBVar2;
  uint uVar3;
  uchar local_40 [64];
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    FUN_5bf2ba80(local_40,param_1[2],0);
    pBVar2 = FUN_5bf29180(DAT_5bf76078,0x111a);
    FUN_5bf25750(param_2,pBVar2);
    return;
  }
  if (iVar1 == 3) {
    uVar3 = 0x1118;
  }
  else {
    if (iVar1 != 4) {
      _Source = FUN_5bf29180(DAT_5bf76078,0x111b);
      _mbscpy(param_2,_Source);
      return;
    }
    uVar3 = 0x1119;
  }
  pBVar2 = FUN_5bf29180(DAT_5bf76078,uVar3);
  FUN_5bf25750(param_2,pBVar2);
  return;
}


