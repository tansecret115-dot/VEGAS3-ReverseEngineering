/* Module: vfplugs.dll
   Function: FUN_004564d0
   Address: 004564d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_004564d0(undefined4 param_1,int *param_2,undefined4 param_3,int *param_4,undefined4 param_5,
            int *param_6,undefined4 param_7,LONG *param_8,int param_9,int param_10)

{
  int iVar1;
  undefined4 local_78 [26];
  int local_10;
  int local_c;
  
  iVar1 = FUN_00456090(local_78,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (iVar1 != 0) {
    if (local_10 < 0x4001) {
      if (local_c < 0x4001) goto LAB_00456699;
    }
    else if (0x4000 < local_c) {
      if (param_10 != 0) {
        if (param_9 == 0x10) {
          FUN_00456c00();
          return 0;
        }
        if ((double)(local_10 + 0x8000) * _DAT_0048ca38 * (double)(local_c + 0x8000) * _DAT_0048ca38
            * _DAT_0048cda8 < _DAT_0048cda0) {
          FUN_00457360();
          return 0;
        }
        FUN_00457ce0();
        return 0;
      }
      goto LAB_00456699;
    }
    if (param_10 == 0) {
LAB_00456699:
      if (param_9 == 0x10) {
        FUN_00458870();
        return 0;
      }
      FUN_00459780();
      return 0;
    }
    if ((local_10 < 0x4001) && (0x3fff < local_c)) {
      if (param_9 == 0x10) {
        FUN_0045afc0();
        return 0;
      }
      if ((double)(local_c + 0x8000) * _DAT_0048ca38 * _DAT_0048cda8 < _DAT_0048cda0) {
        FUN_0045b520();
        return 0;
      }
      FUN_0045bbf0();
      return 0;
    }
    if (param_9 == 0x10) {
      FUN_0045c3f0();
      return 0;
    }
    if ((double)(local_10 + 0x8000) * _DAT_0048ca38 * _DAT_0048cd98 < _DAT_0048cda0) {
      FUN_0045c990();
      return 0;
    }
    FUN_0045d110();
  }
  return 0;
}


