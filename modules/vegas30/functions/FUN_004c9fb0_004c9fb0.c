/* Module: vegas30.exe
   Function: FUN_004c9fb0
   Address: 004c9fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c9fb0(int param_1,int param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  int local_64;
  int local_54 [2];
  undefined4 local_4c;
  undefined4 local_48;
  float local_44;
  tagRECT local_40;
  undefined1 local_30 [44];
  
  local_40.left = *param_4;
  local_40.top = param_4[1];
  local_40.right = param_4[2];
  local_40.bottom = param_4[3];
  InflateRect(&local_40,2,-1);
  FUN_004c4980(param_2,param_3,local_30);
  piVar7 = local_54;
  puVar5 = local_30;
  uVar6 = 0xffffffff;
  uVar1 = _SfGetUIFont_4(100);
  _SfGetTextExtent_16(uVar1,puVar5,uVar6,piVar7);
  local_40.left = local_40.left + 10 + local_54[0];
  local_40.right = local_40.right + 6;
  FUN_004c4530(param_2,param_3,local_30);
  iVar2 = FUN_00404d90();
  if (iVar2 == 0) {
    if (param_3 == 0) {
      fVar4 = (float10)*(float *)(param_2 + 0x48);
      if ((float10)_DAT_006106d0 == fVar4) {
        local_64 = 0;
      }
      else if ((float10)_DAT_00610fd8 == fVar4) {
        local_64 = -600;
      }
      else {
        log2(fVar4);
        local_64 = ftol();
      }
      _SfTextToDoubleTokenEx_32
                (local_30,(double)local_64 * _DAT_00610800,0xcccccccd,0xc04e0ccc,0,0x40280000,0);
      iVar2 = ftol();
      if (iVar2 < -0x259) {
        iVar2 = -0x259;
      }
      else if (0x78 < iVar2) {
        iVar2 = 0x78;
      }
      if (local_64 != iVar2) {
        FUN_004e9f70(*(undefined4 *)(param_1 + 0xbc8),0x51,0);
        FUN_004ea250(*(undefined4 *)(param_1 + 0xbc8),param_2,0xe,0);
        if (iVar2 == 0) {
          fVar4 = (float10)_DAT_006106d0;
        }
        else if (iVar2 < -599) {
          fVar4 = (float10)_DAT_00610fd8;
        }
        else {
          fVar4 = (float10)_CIpow();
        }
        *(float *)(param_2 + 0x48) = (float)fVar4;
        local_48 = *(undefined4 *)(param_2 + 0x18);
        local_44 = (float)iVar2 * _DAT_00613a04;
        local_4c = 7;
        FUN_00568d40(&local_4c,0xc);
        FUN_004eb2b0(*(undefined4 *)(param_1 + 0xbc8));
        FUN_004ea040(*(undefined4 *)(param_1 + 0xbc8),0);
        if (param_2 == 0) {
          uVar1 = 0xffffffff;
        }
        else {
          uVar1 = *(undefined4 *)(param_2 + 0x44);
        }
        (**(code **)(*DAT_0064b144 + 0xd4))(DAT_0064b144,1,uVar1,0,0,0xffffffff,0xffffffff);
        _FaderInst_Message_16
                  (*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x69c) + 0x54) + 0x118),0x610,1,iVar2
                  );
      }
    }
    else if (param_3 == 0x80) {
      iVar2 = ftol();
      fVar4 = (float10)_SfTextToDoubleTokenEx_32
                                 (local_30,(double)iVar2 * _DAT_00610800,0,0,0,0x40590000,0);
      iVar3 = ftol();
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (500 < iVar3) {
        iVar3 = 500;
      }
      if (iVar2 != iVar3) {
        FUN_004e9f70(*(undefined4 *)(param_1 + 0xbc8),0x245,0);
        FUN_004ea250(*(undefined4 *)(param_1 + 0xbc8),param_2,0x29,0);
        *(float *)(param_2 + 0x140) = (float)((float10)(double)fVar4 * (float10)_DAT_00612af0);
        FUN_004eb2b0(*(undefined4 *)(param_1 + 0xbc8));
        FUN_004ea040(*(undefined4 *)(param_1 + 0xbc8),0);
        FUN_004c3760(param_1,param_2);
        iVar2 = *(int *)(param_2 + 0x15c) + 1;
        if (iVar2 < 2) {
          iVar2 = 1;
        }
        *(int *)(param_2 + 0x15c) = iVar2;
        DAT_0064767c = DAT_0064767c | 0x1400;
        return;
      }
    }
  }
  return;
}


