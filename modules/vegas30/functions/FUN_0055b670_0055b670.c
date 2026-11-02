/* Module: vegas30.exe
   Function: FUN_0055b670
   Address: 0055b670
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055b670(int param_1,int param_2)

{
  float10 fVar1;
  float10 fVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  *(int *)(param_2 + 4) = param_1;
  if (*(int *)(param_1 + 0x50) != 0) {
    if ((*(int *)(*(int *)(param_1 + 0x50) + 0x18) != 0) && (iVar3 = FUN_005f13f0(2), iVar3 != 0)) {
      *(undefined4 *)(param_2 + 0x114) = *(undefined4 *)(iVar3 + 0x2c);
    }
    iVar3 = *(int *)(param_1 + 0x50);
    if (*(LPCSTR *)(iVar3 + 0x20) == (LPCSTR)0x0) {
      uVar4 = _SfGetString_8(DAT_00647204,0x50fe);
      SfPrintF(param_2 + 0x10,uVar4,iVar3);
    }
    else {
      lstrcpynA((LPSTR)(param_2 + 0x10),*(LPCSTR *)(iVar3 + 0x20),0x104);
      *(undefined1 *)(param_2 + 0x113) = 0;
    }
    if (*(int *)(*(int *)(param_1 + 0x50) + 0x18) != 0) {
      uVar4 = FUN_005f2d10();
      *(undefined4 *)(param_2 + 0x11c) = uVar4;
    }
    *(undefined4 *)(param_2 + 0x118) = 1;
  }
  fVar1 = (float10)log2((float10)*(double *)(param_1 + 0x28));
  fVar2 = (float10)log2((float10)_DAT_006128e0);
  *(double *)(param_2 + 0x130) =
       (double)((((float10)0.6931471805599453 * fVar1) / ((float10)0.6931471805599453 * fVar2)) *
               (float10)_DAT_006129b0);
  iVar3 = ftol();
  *(int *)(param_2 + 8) = iVar3 / 100;
  uVar4 = ftol();
  *(undefined4 *)(param_2 + 0xc) = uVar4;
  *(undefined4 *)(param_2 + 0x138) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_2 + 0x13c) = *(undefined4 *)(param_1 + 0x2c);
  uVar5 = *(uint *)(param_1 + 0x10) >> 0x1c & 3;
  *(uint *)(param_2 + 0x120) = uVar5;
  if ((uVar5 == 0) || (uVar5 == 2)) {
    *(double *)(param_2 + 0x140) = *(double *)(param_2 + 0x138);
    if (_DAT_006106d0 == *(double *)(param_2 + 0x138)) {
      *(undefined4 *)(param_2 + 0x120) = 0xffffffff;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x140) = 0;
    *(undefined4 *)(param_2 + 0x144) = 0x3ff00000;
  }
  uVar6 = *(uint *)(param_2 + 0x124) & 0xfffffffe;
  uVar5 = *(uint *)(param_1 + 0x10) >> 1 & 1 | uVar6;
  *(uint *)(param_2 + 0x124) = uVar5;
  uVar7 = *(uint *)(param_1 + 0x10) >> 7 & 2;
  uVar5 = CONCAT31((int3)(uVar6 >> 8),(char)uVar5);
  *(uint *)(param_2 + 0x124) = uVar7 | uVar5 & 0xfffffffd;
  uVar5 = uVar5 & 0xfffffff9;
  uVar6 = *(uint *)(param_1 + 0x10) >> 1 & 4 | uVar7 | uVar5;
  *(uint *)(param_2 + 0x124) = uVar6;
  uVar7 = *(uint *)(param_1 + 0x10) >> 6 & 8;
  uVar5 = CONCAT31((int3)(uVar5 >> 8),(char)uVar6);
  *(uint *)(param_2 + 0x124) = uVar7 | uVar5 & 0xfffffff7;
  *(undefined4 *)(param_2 + 0x128) = *(undefined4 *)(param_1 + 100);
  *(uint *)(param_2 + 0x124) = (*(uint *)(param_1 + 0xfc) & 1) << 4 | uVar7 | uVar5 & 0xffffffe7;
  *(undefined4 *)(param_2 + 0x148) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_2 + 0x14c) = *(undefined4 *)(param_1 + 0x24);
  uVar8 = ftol();
  *(undefined8 *)(param_2 + 0x150) = uVar8;
  *(uint *)(param_2 + 0x124) =
       *(uint *)(param_1 + 0x10) >> 0x14 & 0xe0 | *(uint *)(param_2 + 0x124) & 0xffffff1f;
  return;
}


