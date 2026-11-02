/* Module: mpegin.dll
   Function: FUN_10001000
   Address: 10001000
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_10001000(int param_1)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  longlong lVar9;
  ulonglong local_10;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_10007d70(param_1,&DAT_10018050);
    FUN_10007d70(param_1,(byte *)s_Searching_for_audio_samples_____10018030);
  }
  iVar4 = *(int *)(param_1 + 0x12e54);
  FUN_10005520((int *)(iVar4 + 0x200),*(uint *)(iVar4 + 0xf8),*(int *)(iVar4 + 0xfc),0);
  iVar4 = *(int *)(param_1 + 0x12e54);
  *(undefined4 *)(iVar4 + 0xd8) = 0;
  *(undefined4 *)(iVar4 + 0xdc) = 0xbff00000;
  uVar2 = FUN_10004210(param_1);
  if (uVar2 == 0) {
    FUN_1000dfdc(*(double *)(*(int *)(param_1 + 0x12e54) + 0xd0));
    lVar9 = __ftol();
    local_10 = (ulonglong)*(uint *)(param_1 + 0x8c);
    *(longlong *)(param_1 + 0x4d24) = lVar9;
    *(double *)(*(int *)(param_1 + 0x12e54) + 0xe0) = _DAT_10016108 / (double)local_10;
    *(double *)(*(int *)(param_1 + 0x12e54) + 0xe8) =
         (double)*(int *)(param_1 + 0xcb0) * *(double *)(*(int *)(param_1 + 0x12e54) + 0xe0);
    if ((*(int *)(param_1 + 0x4d28) < 1) && (*(int *)(param_1 + 0x4d28) < 0)) {
      FUN_1000dfdc(*(double *)(*(int *)(param_1 + 0x12e54) + 0xd0));
      lVar9 = __ftol();
      *(longlong *)(param_1 + 0x4d24) = lVar9;
    }
    *(undefined4 *)(param_1 + 0x4d2c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x4d30) = 0xffffffff;
    iVar4 = *(int *)(param_1 + 0x12e54);
    *(undefined4 *)(iVar4 + 0xd0) = 0;
    *(undefined4 *)(iVar4 + 0xd4) = 0xbff00000;
    iVar4 = *(int *)(param_1 + 0x12e54);
    iVar3 = *(int *)(iVar4 + 0x24c);
    uVar2 = *(uint *)(iVar4 + 0x248);
    uVar6 = 0x80000;
    iVar7 = 0;
    if ((iVar3 < 1) && ((iVar3 < 0 || (uVar2 < 0x80000)))) {
      uVar6 = uVar2;
      iVar7 = iVar3;
    }
    if ((iVar7 <= iVar3) && ((iVar7 < iVar3 || (uVar6 <= uVar2)))) {
LAB_1000117b:
      do {
        if ((0 < *(int *)(param_1 + 0x4d30)) ||
           ((-1 < *(int *)(param_1 + 0x4d30) || (*(int *)(iVar4 + 0x240) != 0)))) break;
        FUN_10005520((int *)(iVar4 + 0x200),uVar2 - uVar6,(iVar3 - iVar7) - (uint)(uVar2 < uVar6),0)
        ;
        FUN_1000dfdc(*(double *)(*(int *)(param_1 + 0x12e54) + 0xd0));
        lVar9 = __ftol();
        iVar4 = *(int *)(param_1 + 0x12e54);
        *(longlong *)(param_1 + 0x4d2c) = lVar9;
        *(undefined4 *)(iVar4 + 0xd8) = 0;
        *(undefined4 *)(iVar4 + 0xdc) = 0xbff00000;
        iVar4 = FUN_100013a0(param_1);
        while (iVar4 == 0) {
          dVar1 = *(double *)(*(int *)(param_1 + 0x12e54) + 0xd0);
          if ((double)*(longlong *)(param_1 + 0x4d2c) < dVar1) {
            FUN_1000dfdc(dVar1);
            lVar9 = __ftol();
            *(longlong *)(param_1 + 0x4d2c) = lVar9;
          }
          iVar4 = *(int *)(param_1 + 0x12e54);
          iVar3 = *(int *)(iVar4 + 0x27c);
          if ((*(int *)(iVar4 + 0x104) <= iVar3) &&
             ((*(int *)(iVar4 + 0x104) < iVar3 ||
              (*(uint *)(iVar4 + 0x100) < *(uint *)(iVar4 + 0x278))))) {
            *(uint *)(iVar4 + 0x100) = *(uint *)(iVar4 + 0x278);
            *(int *)(iVar4 + 0x104) = iVar3;
          }
          iVar4 = FUN_100013a0(param_1);
        }
        iVar4 = *(int *)(param_1 + 0x12e54);
        iVar3 = *(int *)(iVar4 + 0x24c);
        uVar2 = *(uint *)(iVar4 + 0x248);
        if ((iVar3 < iVar7) || ((iVar3 <= iVar7 && (uVar2 <= uVar6)))) {
          uVar6 = uVar2 + 1;
          iVar7 = iVar3 + (uint)(0xfffffffe < uVar2);
        }
        else {
          bVar8 = 0xfff7ffff < uVar6;
          uVar6 = uVar6 + 0x80000;
          iVar7 = iVar7 + (uint)bVar8;
          if (iVar7 < iVar3) goto LAB_1000117b;
          if ((iVar3 < iVar7) || (uVar2 < uVar6)) {
            uVar6 = uVar2;
            iVar7 = iVar3;
          }
        }
        if ((iVar3 <= iVar7) && ((iVar3 < iVar7 || (uVar2 < uVar6)))) break;
      } while( true );
    }
    uVar2 = *(uint *)(param_1 + 0x4d30);
    if (-1 < (int)uVar2) {
      lVar9 = __ftol();
      iVar4 = (int)lVar9;
      *(int *)(param_1 + 0x84) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0x84) = 0;
        uVar2 = 0;
      }
      else {
        uVar6 = *(uint *)(param_1 + 0xcb0);
        uVar5 = iVar4 + uVar6;
        *(uint *)(param_1 + 0x84) = uVar5;
        uVar2 = uVar5 / uVar6;
        if (uVar5 % uVar6 != 0) {
          uVar2 = *(uint *)(param_1 + 0x84);
          do {
            uVar2 = uVar2 + 1;
          } while (uVar2 % uVar6 != 0);
          *(uint *)(param_1 + 0x84) = uVar2;
          return uVar2 / uVar6;
        }
      }
    }
  }
  return uVar2;
}


