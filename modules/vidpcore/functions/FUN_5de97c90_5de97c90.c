/* Module: vidpcore.dll
   Function: FUN_5de97c90
   Address: 5de97c90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5de97c90(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 local_b10;
  undefined1 local_b08 [1104];
  undefined4 local_6b8;
  undefined4 local_6b4;
  undefined4 local_670;
  undefined1 local_66c [100];
  undefined1 local_608 [92];
  undefined4 local_5ac;
  undefined4 local_58c;
  undefined4 local_f8;
  undefined1 local_f4 [100];
  undefined1 local_90 [124];
  undefined4 local_14;
  
  FUN_5df090f0();
  FUN_5df090f0();
  iVar1 = FUN_5df08950(*(undefined4 *)(param_1 + 0xa8),local_b08);
  if (iVar1 < 0) {
LAB_5de97e80:
    FUN_5df09140();
    FUN_5df09140();
    return iVar1;
  }
  iVar1 = FUN_5df09170(*(undefined4 *)(*(int *)(param_1 + 0xa0) + 4),local_b08,0,param_2 + 8);
  if (iVar1 != 0) {
    iVar1 = FUN_5df09170(*(undefined4 *)(param_1 + 0xa8),local_b08,1,param_2 + 0x50);
    if (iVar1 != 0) {
      if ((*(int *)(param_1 + 0x1cc) != 0) || (*(int *)(param_1 + 0x248) != 0)) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13c));
        if (*(int *)(param_1 + 0x248) == 0) {
          puVar2 = (undefined4 *)(param_1 + 0x154);
          puVar3 = (undefined4 *)(param_1 + 400);
          for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar3 = puVar3 + 1;
          }
        }
        else {
          FUN_5de98d30(param_1 + 0x1d0,param_1 + 0x20c,*(undefined4 *)(param_1 + 0x250),
                       *(undefined4 *)(param_1 + 0x254));
        }
        *(undefined4 *)(param_1 + 0x1cc) = 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13c));
      }
      if ((float)_DAT_5df18838 <= *(float *)(param_1 + 0x1c8)) {
        if (*(float *)(param_1 + 0x1c8) <= (float)_DAT_5df18830) {
          local_b10 = (double)*(float *)(param_1 + 0x1c8);
        }
        else {
          local_b10 = 1.0;
        }
      }
      else {
        local_b10 = 0.0;
      }
      iVar1 = FUN_5de97ed0(local_670,local_66c,local_58c,local_608,local_f8,local_f4,local_14,
                           local_90,local_5ac,(undefined4)local_b10,local_b10._4_4_,
                           *(uint *)(param_1 + 0x80) & 1,local_6b8,local_6b4,
                           *(undefined4 *)(param_1 + 0x1c4),param_1 + 400);
      if (-1 < iVar1) {
        FUN_5df090e0();
      }
      goto LAB_5de97e80;
    }
  }
  FUN_5df09140();
  FUN_5df09140();
  return -0x7fffbffb;
}


