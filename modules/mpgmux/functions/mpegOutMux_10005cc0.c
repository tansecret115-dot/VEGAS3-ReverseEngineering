/* Module: mpgmux.dll
   Function: mpegOutMux
   Address: 10005cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl mpegOutMux(uint *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
                    /* 0x5cc0  5  mpegOutMux */
  DAT_1001ab78._0_1_ = 0;
  if ((char)param_1[0x1b] == '\0') {
    iVar2 = 0;
    do {
      if (((param_1[0x488] == 0) && (param_1[0x490] == 0)) && (param_1[0x494] == 0)) {
        return 0;
      }
      uVar1 = FUN_10007920(param_1);
      iVar2 = iVar2 + 1;
      if (iVar2 % 500 == 0) {
        FUN_10005180((int)param_1,0,(byte *)s_Multiplexing_access_unit__d_10017550);
      }
    } while (uVar1 == 0);
  }
  else {
    if (param_1[0x1c] == 0) {
      uVar1 = FUN_100077d0((int)param_1);
      if (uVar1 != 0) {
        return uVar1;
      }
      uVar1 = FUN_100069e0((int)param_1);
      if (uVar1 != 0) {
        return uVar1;
      }
      uVar1 = FUN_10006bb0(param_1);
      if (uVar1 != 0) {
        return uVar1;
      }
      lVar3 = __ftol();
      iVar2 = (int)((ulonglong)lVar3 >> 0x20);
      *(longlong *)(param_1 + 0xb7a) = lVar3;
      uVar1 = param_1[0xb7a];
      uVar4 = __allshr(1,iVar2);
      *(undefined8 *)(param_1 + 0xb7c) = uVar4;
      param_1[0x1c] = 1;
      param_1[0xb7e] = param_1[0xb7c] + uVar1;
      param_1[0xb7f] = (int)((ulonglong)uVar4 >> 0x20) + iVar2 + (uint)CARRY4(param_1[0xb7c],uVar1);
    }
    while (uVar1 = FUN_100077d0((int)param_1), uVar1 == 0) {
      uVar1 = FUN_10007920(param_1);
      if (uVar1 != 0) {
        return uVar1;
      }
    }
  }
  return uVar1;
}


