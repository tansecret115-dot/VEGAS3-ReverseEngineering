/* Module: tokr3260.dll
   Function: FUN_680573a0
   Address: 680573a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_680573a0(int param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *piStack00000044;
  int in_stack_00000048;
  float fStack00000084;
  int in_stack_00000088;
  int local_10c [63];
  int local_10;
  float *local_c;
  int local_8;
  
  piVar7 = local_10c;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  iVar3 = 0;
  local_8 = 0;
  if (0 < in_stack_00000048) {
    piVar7 = (int *)&stack0x0000004c;
    do {
      iVar1 = FUN_68053c50(piVar7[7]);
      if (iVar1 == -999999) {
        return 0xfff0bdc1;
      }
      if (iVar3 <= *piVar7 + 0x20) {
        iVar4 = ((*piVar7 + 0x20) - iVar3) + 1;
        piVar6 = local_10c + iVar3;
        for (iVar5 = iVar4; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar6 = iVar1;
          piVar6 = piVar6 + 1;
        }
        iVar3 = iVar3 + iVar4;
      }
      local_8 = local_8 + 1;
      piVar7 = piVar7 + 1;
    } while (local_8 < in_stack_00000048);
  }
  iVar3 = 0;
  iVar1 = 0;
  if (0 < param_2) {
    piVar7 = (int *)&stack0x0000000c;
    do {
      iVar5 = FUN_68053c50(piVar7[7]);
      if (iVar5 == -999999) {
        return 0xfff0bdc1;
      }
      if (iVar1 <= *piVar7) {
        piVar6 = local_10c + iVar1;
        iVar4 = (*piVar7 - iVar1) + 1;
        iVar1 = iVar1 + iVar4;
        do {
          *piVar6 = *piVar6 + iVar5;
          piVar6 = piVar6 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar3 = iVar3 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar3 < param_2);
  }
  piStack00000044 = &local_10;
  iVar3 = param_1 * 4;
  fStack00000084 = 1.0;
  local_8 = 0x3f;
  iVar1 = 0;
  iVar5 = param_1;
  param_1 = in_stack_00000088 + iVar3;
  do {
    iVar4 = *piStack00000044;
    iVar8 = -iVar4;
    if (-iVar1 == iVar4) {
      if (iVar5 + -8 < iVar5) {
        local_c = (float *)(in_stack_00000088 + -0x20 + iVar3);
        pfVar2 = local_c;
        for (iVar1 = iVar5 - (iVar5 + -8); iVar1 != 0; iVar1 = iVar1 + -1) {
          *pfVar2 = fStack00000084;
          pfVar2 = pfVar2 + 1;
        }
      }
    }
    else {
      if (iVar8 < 0) {
        fStack00000084 = (float)_DAT_6805b120 / (float)(1 << (-(byte)iVar8 & 0x1f));
      }
      else {
        fStack00000084 = (float)(1 << ((byte)iVar8 & 0x1f));
      }
      pfVar2 = FUN_68057560((float *)(param_1 + -0x20),fStack00000084,iVar1 + iVar4,8);
      if (pfVar2 == (float *)0xfff0bdc1) {
        return 0xfff0bdc1;
      }
    }
    param_1 = param_1 + -0x20;
    iVar5 = iVar5 + -8;
    iVar3 = iVar3 + -0x20;
    local_8 = local_8 + -1;
    piStack00000044 = piStack00000044 + -1;
    iVar1 = iVar8;
    if (local_8 < 0) {
      return 0;
    }
  } while( true );
}


