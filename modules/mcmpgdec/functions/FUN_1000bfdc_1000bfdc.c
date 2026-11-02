/* Module: mcmpgdec.dll
   Function: FUN_1000bfdc
   Address: 1000bfdc
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_1000bfdc(int param_1,undefined4 param_2,uint param_3,uint *param_4,char param_5)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  int iVar9;
  
  iVar1 = *(int *)(param_1 + 0x54);
  piVar7 = (int *)(iVar1 + 0x5c);
  if (param_3 == 0x10004) {
    if (param_5 == '\x04') {
      *param_4 = iVar1 + 0x1e0;
    }
  }
  else if (param_3 < 0x10005) {
    if (param_3 == 0x10001) {
      if ((param_4 != (uint *)0x0) && (param_5 == '@')) {
        puVar8 = (uint *)(iVar1 + 0xc0);
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar8 = *param_4;
          param_4 = param_4 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      *(undefined4 *)(iVar1 + 0x6c) = param_2;
      FUN_1000d9bc(iVar1 + 0xb0,iVar1 + 0xc0,*(int *)(iVar1 + 0x640),*(int *)(iVar1 + 0x6bc));
      if ((*(int *)(iVar1 + 0xc0) == *(int *)(iVar1 + 0x1cc) << 4) &&
         (*(int *)(iVar1 + 0xc4) == *(int *)(iVar1 + 0x1d0) << 4)) {
        if (*(int *)(iVar1 + 0xb8) == 0) {
          *(undefined4 *)(iVar1 + 0x740) = 1;
        }
        else {
          *(undefined4 *)(iVar1 + 0x740) = 0;
        }
      }
      else {
        *(undefined4 *)(iVar1 + 0xb8) = 0;
        *(undefined4 *)(iVar1 + 0x740) = 1;
      }
      if (*(int *)(iVar1 + 0xb8) == 0) {
        *(undefined **)(iVar1 + 0xb8) = &DAT_1000cbec;
        *(undefined **)(iVar1 + 0xbc) = &DAT_1000cbf0;
      }
      else {
        *(undefined1 **)(iVar1 + 0xbc) = &LAB_1000cae4;
      }
      *piVar7 = 0;
      if ((*(byte *)(iVar1 + 0x744) & 0x10) != 0) {
        *piVar7 = (uint)(*(int *)(iVar1 + 0x13c) != 0) << 0x17;
      }
      *(undefined4 *)(iVar1 + 0x60) = 0;
      *(undefined4 *)(iVar1 + 0x68) = 0x100000;
      *(undefined4 *)(iVar1 + 100) = 0x4000;
      *(undefined4 *)(iVar1 + 0x38) = 4;
      *(undefined1 **)(iVar1 + 0x58) = &LAB_1000c858;
      *(int *)(iVar1 + 0x54) = iVar1;
      *(undefined1 **)(param_1 + 0xc) = &LAB_1000c9b8;
    }
    else if (param_3 < 0x10002) {
      if (param_3 == 0x10000) {
        *(undefined4 *)(iVar1 + 0x738) = 0;
        *(undefined4 *)(iVar1 + 0x38) = 4;
        *(undefined4 *)(iVar1 + 0x4c) = 0;
        *(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)(iVar1 + 0x3c);
        *(undefined4 *)(iVar1 + 0x160) = *(undefined4 *)(iVar1 + 0x130);
        *(undefined4 *)(iVar1 + 0x164) = *(undefined4 *)(iVar1 + 0x134);
        *(undefined4 *)(iVar1 + 0x168) = *(undefined4 *)(iVar1 + 0x138);
        *(undefined4 *)(iVar1 + 0x170) = *(undefined4 *)(iVar1 + 0x130);
        *(undefined4 *)(iVar1 + 0x178) = *(undefined4 *)(iVar1 + 0x138);
        *(int *)(iVar1 + 0x16c) = iVar1 + 0x13c;
        *(int *)(iVar1 + 0x17c) = iVar1 + 0x13c;
        *(undefined4 *)(iVar1 + 0x174) = *(undefined4 *)(iVar1 + 0x134);
        *(undefined4 *)(iVar1 + 0x13c) = 0;
        *(undefined4 *)(iVar1 + 0x14c) = 0;
        *(undefined4 *)(iVar1 + 0x15c) = 0;
        for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar7 = 0;
          piVar7 = piVar7 + 1;
        }
        *(undefined4 *)(iVar1 + 0x70) = 0;
        FUN_100037e8((undefined4 *)(iVar1 + 0x71c),0,0);
      }
    }
    else if (param_3 == 0x10002) {
      *(undefined4 *)(iVar1 + 0x744) = param_2;
    }
    else if (param_3 == 0x10003) {
      return *(undefined4 *)(iVar1 + 0x5c);
    }
  }
  else if (param_3 == 0x10007) {
    if (((param_4 != (uint *)0x0) && (param_5 == '@')) && (**(int **)(iVar1 + 0x17c) != 0)) {
      FUN_1000cbf8(param_4,(undefined4 *)(iVar1 + 0x170),*(int *)(iVar1 + 0x640),
                   *(int *)(iVar1 + 0x6bc),*(int *)(iVar1 + 0x1ac));
    }
  }
  else if (param_3 < 0x10008) {
    if ((param_3 == 0x10006) && (param_5 == '\x04')) {
      if ((*(int *)(iVar1 + 0x670) == 3) ||
         (((*(byte *)(iVar1 + 0x744) & 0x10) == 0 || (*(int *)(iVar1 + 0x66c) == 0)))) {
        *param_4 = iVar1 + 0x66c;
      }
      else {
        *param_4 = iVar1 + 0x748;
      }
    }
  }
  else if (param_3 == 0x101b3) {
    *(undefined4 *)(iVar1 + 0x5c) = 0;
    *(undefined4 *)(iVar1 + 0x60) = 0xfffffcff;
    *(undefined4 *)(iVar1 + 0x68) = 0x100;
    *(undefined4 *)(iVar1 + 100) = 0xffff94ff;
    *(undefined4 *)(iVar1 + 0x6c) = 3;
    *(undefined4 *)(iVar1 + 0x38) = 4;
    *(int *)(iVar1 + 0x54) = iVar1;
    *(undefined1 **)(iVar1 + 0x58) = &LAB_1000c858;
    *(undefined1 **)(param_1 + 0xc) = &LAB_1000ca9c;
  }
  else if (param_3 == 0x10202) {
    (**(code **)(param_1 + 0x14))(param_1,0,0x10000,0,0);
    iVar4 = *(int *)(iVar1 + 0x1e0) + 0xf;
    if (iVar4 < 0) {
      iVar4 = *(int *)(iVar1 + 0x1e0) + 0x1e;
    }
    *(int *)(iVar1 + 0x1cc) = iVar4 >> 4;
    if ((*(int *)(iVar1 + 0x120) == 0) || (*(int *)(iVar1 + 0x63c) != 0)) {
      iVar4 = *(int *)(iVar1 + 0x1e4) + 0xf;
      if (iVar4 < 0) {
        iVar4 = *(int *)(iVar1 + 0x1e4) + 0x1e;
      }
      iVar4 = iVar4 >> 4;
    }
    else {
      iVar4 = *(int *)(iVar1 + 0x1e4) + 0x1f;
      if (iVar4 < 0) {
        iVar4 = *(int *)(iVar1 + 0x1e4) + 0x3e;
      }
      iVar4 = (iVar4 >> 5) * 2;
    }
    *(int *)(iVar1 + 0x1d0) = iVar4;
    iVar4 = iVar4 << 4;
    *(int *)(iVar1 + 0x1b0) = iVar4;
    iVar6 = *(int *)(iVar1 + 0x1cc) << 4;
    *(int *)(iVar1 + 0x1ac) = iVar6;
    iVar9 = *(int *)(iVar1 + 0x640);
    iVar5 = iVar6;
    if (iVar9 != 3) {
      iVar5 = iVar6 >> 1;
    }
    *(int *)(iVar1 + 0x1b4) = iVar5;
    if (iVar9 == 1) {
      iVar4 = iVar4 >> 1;
    }
    *(int *)(iVar1 + 0x1b8) = iVar4;
    *(int *)(iVar1 + 0x124) = iVar6;
    *(int *)(iVar1 + 0x128) = iVar5;
    *(int *)(iVar1 + 300) = iVar5;
    if (iVar9 == 3) {
      uVar2 = 0xc;
    }
    else {
      uVar2 = 6;
      if (iVar9 == 2) {
        uVar2 = 8;
      }
    }
    *(undefined4 *)(iVar1 + 0x1bc) = uVar2;
    *(undefined4 *)(iVar1 + 0x1a8) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x184) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x180) = 0xffffffff;
    iVar9 = *(int *)(iVar1 + 0x1ac) * *(int *)(iVar1 + 0x1b0);
    iVar4 = *(int *)(iVar1 + 0x1b4) * *(int *)(iVar1 + 0x1b8);
    pvVar3 = FUN_1000bbac((uint *)(iVar1 + 0x130),iVar9,iVar4);
    *(void **)(iVar1 + 0x104) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      return 1;
    }
    pvVar3 = FUN_1000bbac((uint *)(iVar1 + 0x140),iVar9,iVar4);
    *(void **)(iVar1 + 0x100) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      free(*(void **)(iVar1 + 0x104));
      *(undefined4 *)(iVar1 + 0x130) = 0;
      *(undefined4 *)(iVar1 + 0x134) = 0;
      *(undefined4 *)(iVar1 + 0x138) = 0;
      return 1;
    }
    pvVar3 = FUN_1000bbac((uint *)(iVar1 + 0x150),iVar9,iVar4);
    *(void **)(iVar1 + 0x108) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      free(*(void **)(iVar1 + 0x104));
      *(undefined4 *)(iVar1 + 0x130) = 0;
      *(undefined4 *)(iVar1 + 0x134) = 0;
      *(undefined4 *)(iVar1 + 0x138) = 0;
      free(*(void **)(iVar1 + 0x100));
      *(undefined4 *)(iVar1 + 0x140) = 0;
      *(undefined4 *)(iVar1 + 0x144) = 0;
      *(undefined4 *)(iVar1 + 0x148) = 0;
      return 1;
    }
    iVar4 = FUN_1000dd28();
    if (iVar4 != 0) {
      free(*(void **)(iVar1 + 0x104));
      *(undefined4 *)(iVar1 + 0x130) = 0;
      *(undefined4 *)(iVar1 + 0x134) = 0;
      *(undefined4 *)(iVar1 + 0x138) = 0;
      free(*(void **)(iVar1 + 0x100));
      *(undefined4 *)(iVar1 + 0x140) = 0;
      *(undefined4 *)(iVar1 + 0x144) = 0;
      *(undefined4 *)(iVar1 + 0x148) = 0;
      free(*(void **)(iVar1 + 0x108));
      *(undefined4 *)(iVar1 + 0x150) = 0;
      *(undefined4 *)(iVar1 + 0x154) = 0;
      *(undefined4 *)(iVar1 + 0x158) = 0;
      return 1;
    }
  }
  return 0;
}


