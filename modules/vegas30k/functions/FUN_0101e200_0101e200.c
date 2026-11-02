/* Module: vegas30k.dll
   Function: FUN_0101e200
   Address: 0101e200
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0101e200(undefined4 param_1,int *param_2,undefined4 param_3,float param_4,int param_5,
            uint *param_6)

{
  uint uVar1;
  uchar *_Source;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  float10 fVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  double dVar9;
  uint local_5c;
  undefined4 uStack_58;
  uchar local_54 [12];
  undefined1 local_48 [32];
  undefined4 local_28 [10];
  
  uVar4 = 1;
  puVar5 = local_28;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_48[0] = 0;
  local_28[0] = 1;
  if ((param_5 == 0) ||
     (((uVar1 = *param_6, (uVar1 & 4) == 0 && (param_6[3] == 0)) || ((uVar1 & 1) != 0)))) {
    local_5c = 0;
    uStack_58 = 0;
    if (param_2 != (int *)0x0) {
      uVar4 = (**(code **)(*param_2 + 0x38))(param_2,&local_5c);
    }
    _SfNanoTimeToTextEx_20(local_48,local_28,local_5c,uStack_58,3);
    uVar2 = _SfGetString2_8(DAT_0120e5c8);
    SfMEditPrintF(param_1,uVar2);
  }
  else {
    local_54[0] = '\0';
    if ((uVar1 & 2) == 0) {
      _Source = (uchar *)_SfGetString2_8(DAT_0120e5c8,0x1125);
      _mbscpy(local_54,_Source);
    }
    else {
      FUN_0101dbe0(local_54,param_6[1] & 0xff,1,0);
    }
    if (((*param_6 & 4) == 0) || ((*param_6 & 8) == 0)) {
      fVar6 = (float10)_DAT_011db3f0;
      uVar1 = *(uint *)(*(int *)((int)param_4 + 4) + 4);
      if (uVar1 != 0) {
        uStack_58 = 0;
        fVar6 = (float10)*(longlong *)((int)param_4 + 0x1c) / (float10)uVar1;
        local_5c = uVar1;
      }
      param_4 = 0.0;
      if (fVar6 != (float10)_DAT_011db3f0) {
        local_5c = param_6[3];
        uStack_58 = 0;
        param_4 = (float)(((float10)local_5c / fVar6) * (float10)_DAT_011db3d8);
      }
      uVar2 = _SfGetString2_8(DAT_0120e5c8,0x112d);
      SfMEditPrintF(param_1,uVar2);
      puVar8 = (undefined1 *)param_6[3];
      uVar2 = 0x112e;
    }
    else {
      uVar1 = *(uint *)(*(int *)((int)param_4 + 4) + 4);
      if (uVar1 == 0) {
        uVar7 = 0;
      }
      else {
        uStack_58 = 0;
        local_5c = uVar1;
        uVar7 = ftol();
      }
      _SfNanoTimeToTextEx_20(local_48,local_28,uVar7,3);
      uVar2 = _SfGetString2_8(DAT_0120e5c8,0x112b);
      SfMEditPrintF(param_1,uVar2);
      param_4 = (float)param_6[5];
      puVar8 = local_48;
      uVar2 = 0x112c;
    }
    dVar9 = (double)param_4;
    uVar2 = _SfGetString2_8(DAT_0120e5c8,uVar2);
    SfMEditPrintF(param_1,uVar2,puVar8,dVar9);
  }
  uVar2 = _SfGetString2_8(DAT_0120e5c8);
  SfMEditPrintF(param_1,uVar2);
  return uVar4;
}


