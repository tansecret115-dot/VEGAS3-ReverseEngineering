/* Module: mpgvout.003
   Function: FUN_10016b90
   Address: 10016b90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10016b90(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ushort in_FPUControlWord;
  double dVar6;
  int iStack_40;
  ushort uStack_3c;
  int local_38;
  ulonglong uStack_34;
  int local_2c;
  undefined2 local_28;
  undefined2 local_26;
  short local_24;
  short local_22;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x604) < 2) {
      iVar1 = *(int *)(param_1 + 0x5d4) + 1;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x5d4) + -1 + *(int *)(param_1 + 0x38);
    }
    *(int *)(param_1 + 0x5c) = iVar1;
    if (*(int *)(param_1 + 0x604) != 0) {
      iVar1 = FUN_10018024(param_1,*(int *)(param_1 + 0x604));
      if (iVar1 != 0) goto LAB_10016db6;
      iVar1 = *(int *)(param_1 + 0x24);
      local_2c = (*(uint *)(iVar1 + 0x38) >> 3 | *(int *)(iVar1 + 0x3c) << 0x1d) -
                 *(int *)(param_1 + 0x5e8);
      local_28 = *(undefined2 *)(param_1 + 0x5bc);
      local_26 = *(undefined2 *)(param_1 + 0x5ec);
      local_24 = *(short *)(param_1 + 0x5e0) - *(short *)(param_1 + 0x5e8);
      local_22 = *(short *)(param_1 + 0x5e4) - *(short *)(param_1 + 0x5e8);
      local_20 = *(undefined4 *)(param_1 + 0x600);
      local_1c = *(undefined4 *)(param_1 + 0x5f0);
      local_18 = *(undefined4 *)(param_1 + 0x5f4);
      local_14 = *(undefined4 *)(param_1 + 0x5f8);
      local_10 = *(undefined4 *)(param_1 + 0x5fc);
      (**(code **)(iVar1 + 0x10))(iVar1,&local_2c);
      uVar2 = *(uint *)(*(int *)(param_1 + 0x24) + 0x38) >> 3 |
              *(int *)(*(int *)(param_1 + 0x24) + 0x3c) << 0x1d;
      *(undefined4 *)(param_1 + 0x5ec) = 0;
      *(uint *)(param_1 + 0x5e8) = uVar2;
      iVar1 = 0;
      while( true ) {
        *(uint *)(param_1 + 0x5e4) = uVar2;
        *(uint *)(param_1 + 0x5e0) = uVar2;
        if (*(int *)(param_1 + 0x604) + -1 <= iVar1) break;
        *(int *)(param_1 + 0x608) = iVar1;
        iVar1 = iVar1 + 1;
        iVar5 = FUN_10018024(param_1,iVar1);
        if (iVar5 != 0) goto LAB_10016db6;
        iVar5 = *(int *)(param_1 + 0x24);
        local_2c = (*(uint *)(iVar5 + 0x38) >> 3 | *(int *)(iVar5 + 0x3c) << 0x1d) -
                   *(int *)(param_1 + 0x5e8);
        local_28 = *(undefined2 *)(param_1 + 0x5bc);
        local_26 = *(undefined2 *)(param_1 + 0x5ec);
        local_24 = *(short *)(param_1 + 0x5e0) - *(short *)(param_1 + 0x5e8);
        local_22 = *(short *)(param_1 + 0x5e4) - *(short *)(param_1 + 0x5e8);
        local_20 = *(undefined4 *)(param_1 + 0x600);
        local_1c = *(undefined4 *)(param_1 + 0x5f0);
        local_18 = *(undefined4 *)(param_1 + 0x5f4);
        local_14 = *(undefined4 *)(param_1 + 0x5f8);
        local_10 = *(undefined4 *)(param_1 + 0x5fc);
        (**(code **)(iVar5 + 0x10))(iVar5,&local_2c);
        uVar2 = *(uint *)(*(int *)(param_1 + 0x24) + 0x38) >> 3 |
                *(int *)(*(int *)(param_1 + 0x24) + 0x3c) << 0x1d;
        *(undefined4 *)(param_1 + 0x5ec) = 0;
        *(uint *)(param_1 + 0x5e8) = uVar2;
      }
    }
    if (*(int *)(param_1 + 0x8c) != 0) {
      (**(code **)(*(int *)(param_1 + 0x24) + 0xc))(*(int *)(param_1 + 0x24),0x1b7,0);
    }
  }
LAB_10016db6:
  if ((*(int *)(param_1 + 0x4bc) == 0) && (iVar1 = *(int *)(param_1 + 0x580), iVar1 != 0)) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      dVar6 = (double)*(longlong *)(*(int *)(param_1 + 0x24) + 0x38) * *(double *)(param_1 + 0x68);
    }
    else {
      dVar6 = (double)*(longlong *)(*(int *)(param_1 + 0x24) + 0x38) * _DAT_10016b84;
    }
    local_38 = iVar1;
    dVar6 = ceil(dVar6 / (double)iVar1);
    uStack_3c = in_FPUControlWord | 0xc00;
    uStack_34 = (ulonglong)ROUND(dVar6);
    *(undefined4 *)(param_1 + 0x4bc) = (undefined4)uStack_34;
  }
  if (*(int *)(param_1 + 0x4b8) == 200000000) {
    *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(param_1 + 0x4bc);
  }
  (**(code **)(*(int *)(param_1 + 0x24) + 0x14))(*(int *)(param_1 + 0x24));
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x4b4) != 0) {
      (**(code **)(param_1 + 0x14))("   VBV delay overflows = %d",*(int *)(param_1 + 0x4b4));
    }
    if (*(int *)(param_1 + 0x4b0) != 0) {
      (**(code **)(param_1 + 0x14))("   VBV delay underflows = %d",*(int *)(param_1 + 0x4b0));
    }
    (**(code **)(param_1 + 0x14))
              ("   Min bitrate of any one frame = %u bits",*(undefined4 *)(param_1 + 0x4c0));
    (**(code **)(param_1 + 0x14))
              ("   Max bitrate of any one frame = %u bits",*(undefined4 *)(param_1 + 0x4c4));
    (**(code **)(param_1 + 0x14))
              ("   Min bitrate over any one second = %u bps",*(undefined4 *)(param_1 + 0x4b8));
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar1 = *(int *)(param_1 + 0x580);
      dVar6 = (double)*(longlong *)(*(int *)(param_1 + 0x24) + 0x38) * *(double *)(param_1 + 0x68);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x580);
      dVar6 = (double)*(longlong *)(*(int *)(param_1 + 0x24) + 0x38) * _DAT_10016b84;
    }
    (**(code **)(param_1 + 0x14))
              ("   Avg bitrate over any one second = %.0f bps",dVar6 / (double)iVar1);
    (**(code **)(param_1 + 0x14))
              ("   Max bitrate over any one second = %u bps",*(undefined4 *)(param_1 + 0x4bc));
    (**(code **)(param_1 + 0x14))("   Min mquant = %u",*(undefined4 *)(param_1 + 0x4c8));
    uStack_34 = (ulonglong)*(uint *)(param_1 + 0x4a8);
    dVar6 = (double)uStack_34;
    uStack_34 = (ulonglong)*(uint *)(param_1 + 0x4a4);
    (**(code **)(param_1 + 0x14))("   Avg mquant = %2.2f",dVar6 / (double)uStack_34);
    (**(code **)(param_1 + 0x14))("   Max mquant = %u",*(undefined4 *)(param_1 + 0x4cc));
    iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 0x38);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 7;
    }
    (**(code **)(param_1 + 0x14))("   Total size = %d bytes",iVar1 >> 3);
    time((time_t *)&iStack_40);
    *(int *)(param_1 + 0x624) = iStack_40;
    uVar2 = iStack_40 - *(int *)(param_1 + 0x620);
    uStack_34 = (ulonglong)uVar2;
    uVar3 = (uint)((ulonglong)DAT_10016b8c * (ulonglong)uVar2 >> 0x25);
    uVar4 = (uint)((ulonglong)DAT_10016b8c * (ulonglong)uVar3 >> 0x25);
    (**(code **)(param_1 + 0x14))
              ("   Total time: %d seconds (%02d:%02d:%02d), time per frame: %.3f seconds.",uVar2,
               uVar4,uVar3 + uVar4 * -0x3c,uVar2 + uVar3 * -0x3c,
               (double)uStack_34 / (double)*(int *)(param_1 + 0x580));
  }
  if (DAT_10035734 != (FILE *)0x0) {
    fclose(DAT_10035734);
    DAT_10035734 = (FILE *)0x0;
  }
  if (*(int *)(param_1 + 0x6a4) != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x6a4));
  }
  *(undefined4 *)(param_1 + 0x6a4) = 0;
  if (*(int *)(param_1 + 0x6a8) != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x6a8));
  }
  *(undefined4 *)(param_1 + 0x6a8) = 0;
  if (*(int *)(param_1 + 0x628) != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x628));
    *(undefined4 *)(param_1 + 0x628) = 0;
  }
  if (*(int *)(param_1 + 0x62c) != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x62c));
    *(undefined4 *)(param_1 + 0x62c) = 0;
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x38) + 5) {
    iVar5 = param_1 + 0x6ac;
    do {
      iVar1 = iVar1 + 1;
      (**(code **)(param_1 + 0x20))(*(undefined4 *)(iVar5 + 4));
      *(undefined4 *)(iVar5 + 4) = 0;
      *(undefined4 *)(iVar5 + 8) = 0;
      *(undefined4 *)(iVar5 + 0x18) = 0;
      *(undefined4 *)(iVar5 + 0x1c) = 0;
      *(undefined4 *)(iVar5 + 0x20) = 0;
      iVar5 = iVar5 + 0x28;
    } while (iVar1 < *(int *)(param_1 + 0x38) + 5);
  }
  return;
}


