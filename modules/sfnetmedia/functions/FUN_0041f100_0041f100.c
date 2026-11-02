/* Module: sfnetmedia.dll
   Function: FUN_0041f100
   Address: 0041f100
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0041f100(HWND param_1,int *param_2,undefined4 param_3,int param_4,int param_5,uint *param_6)

{
  uchar *_Source;
  BYTE *pBVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint uVar6;
  uchar local_54 [12];
  uchar local_48 [32];
  uint local_28 [10];
  
  uVar3 = 1;
  puVar4 = local_28;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_48[0] = '\0';
  local_28[0] = 1;
  if ((param_5 == 0) ||
     (((uVar6 = *param_6, (uVar6 & 4) == 0 && (param_6[3] == 0)) || ((uVar6 & 1) != 0)))) {
    if (param_2 != (int *)0x0) {
      uVar3 = (**(code **)(*param_2 + 0x38))(param_2);
    }
    FUN_004226f0(local_48,local_28,0,0,3);
    if ((param_5 == 0) || ((*param_6 & 1) == 0)) {
      uVar6 = 0x1131;
    }
    else {
      uVar6 = 0x1130;
    }
    pBVar1 = FUN_00419120(DAT_00441d60,uVar6);
    FUN_00417320(param_1,pBVar1);
    uVar6 = 0x1132;
  }
  else {
    local_54[0] = '\0';
    if ((uVar6 & 2) == 0) {
      _Source = FUN_00419120(DAT_00441d60,0x1125);
      _mbscpy(local_54,_Source);
    }
    else {
      FUN_0041eae0(local_54,param_6[1] & 0xff,1,0);
    }
    if (((*param_6 & 4) == 0) || ((*param_6 & 8) == 0)) {
      pBVar1 = FUN_00419120(DAT_00441d60,0x112d);
      FUN_00417320(param_1,pBVar1);
      uVar6 = 0x112e;
    }
    else {
      if (*(int *)(*(int *)(param_4 + 4) + 4) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = ftol();
      }
      FUN_004226f0(local_48,local_28,(uint)uVar5,(int)((ulonglong)uVar5 >> 0x20),3);
      pBVar1 = FUN_00419120(DAT_00441d60,0x112b);
      FUN_00417320(param_1,pBVar1);
      uVar6 = 0x112c;
    }
    pBVar1 = FUN_00419120(DAT_00441d60,uVar6);
    FUN_00417320(param_1,pBVar1);
    uVar6 = 0x112f;
  }
  pBVar1 = FUN_00419120(DAT_00441d60,uVar6);
  FUN_00417320(param_1,pBVar1);
  return uVar3;
}


