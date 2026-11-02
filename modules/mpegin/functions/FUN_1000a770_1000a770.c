/* Module: mpegin.dll
   Function: FUN_1000a770
   Address: 1000a770
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_1000a770(int param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  longlong lVar9;
  ulonglong local_10;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_10007d70(param_1,&DAT_10018050);
    FUN_10007d70(param_1,(byte *)s_Searching_for_PCM_audio_samples___10019038);
  }
  iVar3 = *(int *)(param_1 + 0x12e54);
  FUN_10005520((int *)(iVar3 + 0x200),*(uint *)(iVar3 + 0xf8),*(int *)(iVar3 + 0xfc),0);
  uVar5 = *(uint *)(param_1 + 0x12e54);
  if (*(int *)(uVar5 + 0x2d4) != 0) {
    *(double *)(uVar5 + 0xd0) = (double)*(longlong *)(uVar5 + 600);
    FUN_1000dfdc(*(double *)(*(int *)(param_1 + 0x12e54) + 0xd0));
    lVar9 = __ftol();
    local_10 = (ulonglong)*(uint *)(param_1 + 0x8c);
    *(longlong *)(param_1 + 0x4d24) = lVar9;
    *(double *)(*(int *)(param_1 + 0x12e54) + 0xe0) = _DAT_10016108 / (double)local_10;
    *(double *)(*(int *)(param_1 + 0x12e54) + 0xe8) =
         (double)*(int *)(param_1 + 0xcb0) * *(double *)(*(int *)(param_1 + 0x12e54) + 0xe0);
    iVar3 = *(int *)(param_1 + 0x12e54);
    *(undefined4 *)(param_1 + 0x4d2c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x4d30) = 0xffffffff;
    iVar2 = *(int *)(iVar3 + 0x24c);
    uVar5 = *(uint *)(iVar3 + 0x248);
    uVar6 = 0x80000;
    iVar7 = 0;
    if ((iVar2 < 1) && ((iVar2 < 0 || (uVar5 < 0x80000)))) {
      uVar6 = uVar5;
      iVar7 = iVar2;
    }
    if ((iVar7 <= iVar2) && ((iVar7 < iVar2 || (uVar6 <= uVar5)))) {
LAB_1000a892:
      do {
        if ((0 < *(int *)(param_1 + 0x4d30)) ||
           ((-1 < *(int *)(param_1 + 0x4d30) || (*(int *)(iVar3 + 0x240) != 0)))) break;
        FUN_10005520((int *)(iVar3 + 0x200),uVar5 - uVar6,(iVar2 - iVar7) - (uint)(uVar5 < uVar6),0)
        ;
        *(double *)(*(int *)(param_1 + 0x12e54) + 0xd0) =
             (double)*(longlong *)(*(int *)(param_1 + 0x12e54) + 600);
        FUN_1000dfdc(*(double *)(*(int *)(param_1 + 0x12e54) + 0xd0));
        lVar9 = __ftol();
        *(longlong *)(param_1 + 0x4d2c) = lVar9;
        iVar3 = FUN_1000aab0(param_1);
        while (iVar3 == 0) {
          dVar1 = *(double *)(*(int *)(param_1 + 0x12e54) + 0xd0);
          if ((double)*(longlong *)(param_1 + 0x4d2c) < dVar1) {
            FUN_1000dfdc(dVar1);
            lVar9 = __ftol();
            *(longlong *)(param_1 + 0x4d2c) = lVar9;
          }
          iVar3 = *(int *)(param_1 + 0x12e54);
          iVar2 = *(int *)(iVar3 + 0x27c);
          if ((*(int *)(iVar3 + 0x104) <= iVar2) &&
             ((*(int *)(iVar3 + 0x104) < iVar2 ||
              (*(uint *)(iVar3 + 0x100) < *(uint *)(iVar3 + 0x278))))) {
            *(uint *)(iVar3 + 0x100) = *(uint *)(iVar3 + 0x278);
            *(int *)(iVar3 + 0x104) = iVar2;
          }
          iVar3 = FUN_1000aab0(param_1);
        }
        iVar3 = *(int *)(param_1 + 0x12e54);
        iVar2 = *(int *)(iVar3 + 0x24c);
        uVar5 = *(uint *)(iVar3 + 0x248);
        if ((iVar2 < iVar7) || ((iVar2 <= iVar7 && (uVar5 <= uVar6)))) {
          uVar6 = uVar5 + 1;
          iVar7 = iVar2 + (uint)(0xfffffffe < uVar5);
        }
        else {
          bVar8 = 0xfff7ffff < uVar6;
          uVar6 = uVar6 + 0x80000;
          iVar7 = iVar7 + (uint)bVar8;
          if (iVar7 < iVar2) goto LAB_1000a892;
          if ((iVar2 < iVar7) || (uVar5 < uVar6)) {
            uVar6 = uVar5;
            iVar7 = iVar2;
          }
        }
        if ((iVar2 <= iVar7) && ((iVar2 < iVar7 || (uVar5 < uVar6)))) break;
      } while( true );
    }
    uVar5 = *(uint *)(param_1 + 0x4d30);
    if (-1 < (int)uVar5) {
      lVar9 = __ftol();
      iVar3 = (int)lVar9;
      *(int *)(param_1 + 0x84) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x84) = 0;
        uVar5 = 0;
      }
      else {
        uVar6 = *(uint *)(param_1 + 0xcb0);
        uVar4 = iVar3 + uVar6;
        *(uint *)(param_1 + 0x84) = uVar4;
        uVar5 = uVar4 / uVar6;
        if (uVar4 % uVar6 != 0) {
          uVar5 = *(uint *)(param_1 + 0x84);
          do {
            uVar5 = uVar5 + 1;
          } while (uVar5 % uVar6 != 0);
          *(uint *)(param_1 + 0x84) = uVar5;
          return uVar5 / uVar6;
        }
      }
    }
  }
  return uVar5;
}


