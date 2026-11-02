/* Module: sfnetmedia.dll
   Function: FUN_0041f3a0
   Address: 0041f3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0041f3a0(HWND param_1,undefined4 param_2,int param_3,int param_4,uint *param_5)

{
  bool bVar1;
  undefined3 extraout_var;
  uchar *_Source;
  BYTE *pBVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint uVar7;
  uchar local_54 [12];
  uchar local_48 [32];
  uint local_28 [10];
  
  iVar4 = 1;
  if (param_4 != 0) {
    bVar1 = FUN_0041ed50(param_5);
    iVar4 = CONCAT31(extraout_var,bVar1);
  }
  local_54[0] = '\0';
  local_48[0] = '\0';
  if ((iVar4 == 2) || (iVar4 == 0)) {
    if ((*param_5 & 2) == 0) {
      _Source = FUN_00419120(DAT_00441d60,0x1125);
      _mbscpy(local_54,_Source);
    }
    else {
      FUN_0041eae0(local_54,param_5[1] & 0xff,1,0);
    }
  }
  if (*(int *)(*(int *)(param_3 + 4) + 4) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = ftol();
  }
  puVar5 = local_28;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_28[0] = 1;
  FUN_004226f0(local_48,local_28,(uint)uVar6,(int)((ulonglong)uVar6 >> 0x20),3);
  if (iVar4 == 0) {
    pBVar2 = FUN_00419120(DAT_00441d60,0x1135);
    FUN_00417320(param_1,pBVar2);
    pBVar2 = FUN_00419120(DAT_00441d60,0x112e);
    FUN_00417320(param_1,pBVar2);
    uVar7 = 0x1134;
  }
  else if (iVar4 == 2) {
    pBVar2 = FUN_00419120(DAT_00441d60,0x1133);
    FUN_00417320(param_1,pBVar2);
    pBVar2 = FUN_00419120(DAT_00441d60,0x112c);
    FUN_00417320(param_1,pBVar2);
    uVar7 = 0x1134;
  }
  else {
    if (param_4 == 0) {
      uVar7 = 0x1137;
    }
    else {
      uVar7 = 0x1136;
    }
    pBVar2 = FUN_00419120(DAT_00441d60,uVar7);
    FUN_00417320(param_1,pBVar2);
    uVar7 = 0x1138;
  }
  pBVar2 = FUN_00419120(DAT_00441d60,uVar7);
  FUN_00417320(param_1,pBVar2);
  return 1;
}


